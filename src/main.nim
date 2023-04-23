import nico
import math

#For your sanity, stop reading the code from HERE

const orgName = "tnd"
const appName = "nimusic"

type Note = object
  position: float
  shape: SynthShape
  frequency: float
  initv: 0..15
  env: -7..7
  length: 0..255

type Track = object
  notes: seq[Note]

type Song = object
  tracks: array[16, Track]

var song: Song
var songplaying: Song
var selectedNote: ptr Note
var clock = 0
var playing = false
var scrolly = 0
var scrollx = 0.0
var cursorposx = 160.0
var cursorposy = 100.0
var popupText = ""
var popupTimer = 0.0

let shapeNames = @[
  "SynSame",
  "Sine",
  "Square",
  "12.5% Pulse Wave",
  "25% Pulse Wave",
  "Saw",
  "Tri",
  "Noise",
  "Metallic Noise",
  "SynWav"
]

proc playNote(note: Note, channel: int) =
  echo "Playing Note! Track: " & $channel
  synth(channel, note.shape, note.frequency, note.initv, note.env, note.length)

proc popup(text: string) =
  popupText = text
  popupTimer = 1.0

proc initSong() =
  for track in 0 .. 15:
    song.tracks[track] = Track()

proc gameInit() =
  loadFont(0, "font.png")
  hideMouse()
  initSong()
  var notesin = Note()
  notesin.frequency = 1000
  notesin.length = 150
  notesin.shape = SynthShape.synSaw
  notesin.initv = 15
  song.tracks[0].notes.add(notesin)

proc handleSelection() =
  let gcursorx = cursorposx + scrollx
  let gcursory = cursorposy + float(scrolly*20)
  var tracki = 0
  for track in song.tracks:
    var notei = 0
    for note in track.notes:
      let gnotex = float(note.position + 10)
      let gnotey = float(tracki*20)
      let gnotew = note.length
      let gnoteh = 20.0
      if gcursorx > gnotex and gcursorx < gnotex + gnotew:
        if gcursory > gnotey and gcursory < gnotey + gnoteh:
          selectedNote = addr song.tracks[tracki].notes[notei]
      notei+=1

    tracki+=1

proc getSelectedTrack(): int =
  var tracki = 0
  for track in song.tracks:
    var notei = 0
    for note in track.notes:
      if selectedNote == addr song.tracks[tracki].notes[notei]:
        return tracki
      notei+=1
    tracki+=1
  
proc getSelectedId(): int =
  let tracki = getSelectedTrack()
  var notei = 0
  for note in song.tracks[tracki].notes:
    if selectedNote == addr song.tracks[tracki].notes[notei]:
      return notei
    notei+=1

proc gameUpdate(dt: float32) =
  if popupTimer > 0:
    popupTimer -= dt
  let selectedTrack = getSelectedTrack()
  let selectedID = getSelectedId()
  #Controls only when Not selecting a note:
  if selectedNote == nil:
    if btnp(pcDown) and scrolly < 15:
      scrolly += 1
    if btnp(pcUp) and scrolly > 0:
      scrolly -= 1

    if btn(pcLeft) and scrollx > 0:
      scrollx -= dt*50
    if btn(pcRight):
      scrollx += dt*50

    if btnp(pcL1):
      var note = Note()
      note.initv = 15
      note.length = 10
      song.tracks[scrolly].notes.add(note)
      selectedNote = addr song.tracks[scrolly].notes[^1]

    if btnp(pcR1):
      clock = 0
      songplaying = song
      playing = not playing

    if btn(pcA):
      handleSelection()

    let deadzone = 0.15
    let cursorchange = sqrt(pow(jaxis(pcXAxis2, 1), 2) + pow(jaxis(pcYAxis2, 1), 2))
    if cursorchange > deadzone:
      cursorposx += jaxis(pcXAxis2, 1) * 450 * dt
      cursorposy += jaxis(pcYAxis2, 1) * 450 * dt
  elif btn(pcX):
    if btn(pcRight) and selectedNote.length < 255:
      selectedNote.length+=int(100.0*dt)
    if btn(pcLeft) and selectedNote.length > 0:
      selectedNote.length-=int(100.0*dt)
    if btn(pcUp) and selectedNote.frequency < 1000:
      selectedNote.frequency+=float(200.0*dt)
      popup("Frequency: " & $selectedNote.frequency.int & " Hz")
    if btn(pcDown) and selectedNote.frequency > 100:
      selectedNote.frequency-=float(200.0*dt)
      popup("Frequency: " & $selectedNote.frequency.int & " Hz")
  else:
    if btnp(pcStart):
      echo "Duplicating!"
      var note = selectedNote[]
      note.position += float(note.length)
      song.tracks[scrolly].notes.add(note)
      selectedNote = addr song.tracks[scrolly].notes[^1]
    if btnp(pcA):
      playNote(selectedNote[], selectedTrack)
    if btnp(pcY):
      selectedNote.shape = SynthShape((ord(selectedNote.shape) + 1) mod ord(SynthShape.high()))
      if ord(selectedNote.shape) == 0 or ord(selectedNote.shape) == 9:
        selectedNote.shape = SynthShape.synSin
      popup(shapeNames[selectedNote.shape.ord()])
    if btn(pcRight):
      selectedNote.position+=100.0*dt
    if btn(pcLeft) and selectedNote.position > 0:
      selectedNote.position=max(selectedNote.position - (100.0*dt), 0)
    if btnp(pcUp) and selectedTrack > 0:
      let note = selectedNote[]
      song.tracks[selectedTrack].notes.del(selectedID)
      song.tracks[selectedTrack-1].notes.add(note)
      selectedNote = addr song.tracks[selectedTrack-1].notes[^1]
      scrolly = min(selectedTrack-1, scrolly)
    if btnp(pcDown) and selectedTrack < 15:
      let note = selectedNote[]
      song.tracks[selectedTrack].notes.del(selectedID)
      song.tracks[selectedTrack+1].notes.add(note)
      selectedNote = addr song.tracks[selectedTrack+1].notes[^1]
      scrolly = max(selectedTrack+1, scrolly+9)-9
    
  if btnp(pcB):
    selectedNote = nil

  if playing:
    var tracki = 0
    var notei = 0
    for track in songplaying.tracks:
      notei = 0
      for note in track.notes:
        if abs(note.position - float(clock)) < 0.5:
          playNote(note, tracki)
        inc notei
      inc tracki
    inc clock


proc drawShape(synShape: SynthShape, x, y, w, h: int) =
  try:
    case synShape:
    of SynthShape.synSin:
      let x = x + int(scrollx)
      var ypos = float(y+h)
      for i in x .. x + w:
        let sval = sin(degToRad(i*15))
        let offset = (sval/2 + 0.5)*float(h)
        let nypos = float(y) + offset
        line(i-int(scrollx), ypos, i-int(scrollx), nypos)
        ypos = nypos
    of SynthShape.synSqr:
      let x = x + int(scrollx)
      var ypos = float(y+h)
      for i in x+1 .. x + w:
        let nypos = if (i mod 10) > 5: float(y)+(0.75*float(h)) else: float(y)+(0.25*float(h))
        line(i-int(scrollx), ypos, i-int(scrollx), nypos)
        ypos = nypos
    of SynthShape.synP12:
      let x = x + int(scrollx)
      var ypos = float(y+h)
      for i in x+1 .. x + w:
        let nypos = if float(i mod 10) > (0.12*10): float(y)+(0.75*float(h)) else: float(y)+(0.25*float(h))
        line(i-int(scrollx), ypos, i-int(scrollx), nypos)
        ypos = nypos
    of SynthShape.synP25:
      let x = x + int(scrollx)
      var ypos = float(y+h)
      for i in x+1 .. x + w:
        let nypos = if float(i mod 10) > (0.25*10): float(y)+(0.75*float(h)) else: float(y)+(0.25*float(h))
        line(i-int(scrollx), ypos, i-int(scrollx), nypos)
        ypos = nypos
    of SynthShape.synSaw:
      let x = x + int(scrollx)
      var ypos = float(y+h)
      for i in x+1 .. x + w:
        let nypos = float(y + (h-(i mod -h)))
        line(i-int(scrollx), ypos, i-int(scrollx), nypos)
        ypos = nypos
    of SynthShape.synTri:
      var ypos = float(y + h)
      var direction = 1.0
      for i in x .. x + w:
        var nypos = float(ypos - direction)
        if (nypos) < float(y):
          direction = -1
        if (nypos) > float(y+h):
          direction = 1
        nypos = float(ypos - direction)
        line(i, ypos, i, nypos)
        ypos = nypos
    else:
      for i in x .. x + w:
        line(i, y, i, y + h)
      return
  except:
    echo "Whoopsiedoodles!"

proc drawNote(note: Note, ypos: int) = 
  case note.shape:
  of SynthShape.synSin:
    setColor(2)
  of SynthShape.synSqr:
    setColor(4)
  of SynthShape.synP12, SynthShape.synP25:
    setColor(8)
  of SynthShape.synSaw:
    setColor(9)
  of SynthShape.synTri:
    setColor(12)
  of SynthShape.synNoise, SynthShape.synNoise2:
    setColor(5)
  else:
    discard
  if selectedNote == unsafeAddr note:
    setColor(7)
  let xpos = int(note.position + 10) - int(scrollx)
  rect(xpos+1, ypos+1, xpos+note.length-1, ypos+19)
  let height = int((note.frequency/1000)*18)
  drawShape(note.shape, xpos+1, ypos+10 - int(height/2), note.length-2, height)

proc drawTrack(index: int) =
  setColor(7)
  let track = song.tracks[index]
  let ypos=(index-scrolly)*20
  let xpos = int(scrollx)
  rect(-xpos, ypos, 320, ypos+20)
  printc($(index+1), 6-xpos, ypos+8)
  for note in track.notes:
    drawNote(note, ypos)

proc gameDraw() =
  cls()
  setColor(3)
  
  for i in 0 .. 4:
    let xpos = i*100 - (int(scrollx) mod 100) + 10
    if (int(scrollx) != 0) or i > 0:
      line(xpos, min(200, (16-scrolly)*20), xpos, 0)
  setColor(7)
  line(-int(scrollx) + 10, 0, -int(scrollx) + 10, min(200, (16-scrolly)*20))
  for track in 0 .. 15:
    drawTrack(track)

  
  setColor(8)
  if selectedNote == nil:
    circ(cursorposx, cursorposy, 2)
  
  if popupTimer > 0:
    setColor(0)
    rectfill(0, 199, 319, 180)
    setColor(12)
    rect(0, 199, 319, 180)
    printc(popupText, 160, 185)
  setColor(14)
  line(float(clock) - scrollx + 10, 0, float(clock) - scrollx + 10, 200)


nico.init(orgName, appName)
nico.createWindow(appName, 320, 200, 4, false)
nico.run(gameInit, gameUpdate, gameDraw)