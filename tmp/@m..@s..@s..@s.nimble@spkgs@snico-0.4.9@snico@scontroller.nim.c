/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3   -I/usr/lib/nim -I/home/manea/Documents/Connect4x4/src -o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s.nimble@spkgs@snico-0.4.9@snico@scontroller.nim.c.o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s.nimble@spkgs@snico-0.4.9@snico@scontroller.nim.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__Wf8pb9aU0WdM83selH6Zpuw tyTuple__Wf8pb9aU0WdM83selH6Zpuw;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TNimTypeV2 {
void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* typeInfoV1;
NI flags;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw;
struct tyTuple__Wf8pb9aU0WdM83selH6Zpuw {
NF Field0;
NF Field1;
NI Field2;
};
typedef tyTuple__Wf8pb9aU0WdM83selH6Zpuw tyArray__j8AJM9aPisJ0hGSxXOwZGKg[6];
typedef NI tyArray__GKP2XFIassAwePJPdOQJXw[16];
struct tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ {
tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw kind;
NimStringV2 name;
void* sdlController;
NI id;
tyArray__j8AJM9aPisJ0hGSxXOwZGKg axes;
tyArray__GKP2XFIassAwePJPdOQJXw buttons;
NF deadzone;
NIM_BOOL invertX;
NIM_BOOL invertY;
NIM_BOOL useRightStick;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
typedef NimStringV2 tyArray__yt5VDPNtUGx9cBkOVakHwdQ[6];
typedef NU8 tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg;
typedef NU8 tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_3263)(NimStringV2* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_4411)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3164)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ*, new__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_56)(void);
N_CDECL(void*, SDL_GameControllerOpen)(int joystick_index);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___system_3269)(NimStringV2* dest, NimStringV2 src);
N_CDECL(NCSTRING, SDL_GameControllerName)(void* gamecontroller);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_5)(tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw e);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringV2* args, NI argsLen_0);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(NF, axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self, tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA axis);
N_LIB_PRIVATE TNimTypeV2 NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_;
extern TNimTypeV2 NTIv2__XEycrCsme5C8CVWAYEcdBQ_;
static const struct {
  NI cap; NIM_CHAR data[31+1];
} TM__MRtAw1n0oukYMfechIasDg_3 = { 31 | NIM_STRLIT_FLAG, "error opening game controller: " };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_4 = {31, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_3};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__MRtAw1n0oukYMfechIasDg_7 = { 8 | NIM_STRLIT_FLAG, "KEYBOARD" };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_8 = {8, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_7};
static const struct {
  NI cap; NIM_CHAR data[23+1];
} TM__MRtAw1n0oukYMfechIasDg_9 = { 23 | NIM_STRLIT_FLAG, "added game controller: " };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_10 = {23, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_9};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__MRtAw1n0oukYMfechIasDg_11 = { 2 | NIM_STRLIT_FLAG, ": " };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_12 = {2, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_11};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__MRtAw1n0oukYMfechIasDg_13 = { 8 | NIM_STRLIT_FLAG, "Keyboard" };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_14 = {8, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_13};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__MRtAw1n0oukYMfechIasDg_15 = { 7 | NIM_STRLIT_FLAG, "Gamepad" };
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_16 = {7, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_15};
static const NimStringV2 TM__MRtAw1n0oukYMfechIasDg_17 = {2, (NimStrPayload*)&TM__MRtAw1n0oukYMfechIasDg_11};
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern NIM_BOOL nimInErrorMode__system_4240;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* dest) {
	eqdestroy___system_3263((&(*dest).name));
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__system_3889 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_3889).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_3889;
	framePtr__system_3889 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_4411();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_3889 = (*framePtr__system_3889).prev;
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	nimfr_("-%", "/usr/lib/nim/system/arithmetics.nim");
	result = (NI)0;
	nimln_(414, "/usr/lib/nim/system/arithmetics.nim");
	nimln_(418, "/usr/lib/nim/system/arithmetics.nim");
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4240);
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("nimDecRefIsLastCyclicStatic", "/usr/lib/nim/system/orc.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimln_(486, "/usr/lib/nim/system/orc.nim");
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		nimln_(487, "/usr/lib/nim/system/orc.nim");
		nimln_(63, "/usr/lib/nim/system/arc.nim");
		T5_ = (NI)0;
		T5_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		nimln_(488, "/usr/lib/nim/system/orc.nim");
		{
			if (!((NI)((*cell).rc & ((NI) -16)) == ((NI) 0))) goto LA8_;
			nimln_(489, "/usr/lib/nim/system/orc.nim");
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			NI TM__MRtAw1n0oukYMfechIasDg_2;
			nimln_(492, "/usr/lib/nim/system/orc.nim");
			if (nimSubInt((*cell).rc, ((NI) 16), &TM__MRtAw1n0oukYMfechIasDg_2)) { raiseOverflow(); goto BeforeRet_;
};
			(*cell).rc = (NI)(TM__MRtAw1n0oukYMfechIasDg_2);
		}
		LA6_: ;
		nimln_(494, "/usr/lib/nim/system/orc.nim");
		rememberCycle__system_3164(result, cell, desc);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_72)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ** dest, tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* src) {
	tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* colontmp_;
	colontmp_ = (*dest);
	(*dest) = src;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_));
		if (!T3_) goto LA4_;
		eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78(colontmp_);
		nimRawDispose(colontmp_, ((NI) 8));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_65)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest), (&NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_));
		if (!T3_) goto LA4_;
		eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78((*dest));
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
{	{
		NI TM__MRtAw1n0oukYMfechIasDg_5;
		NI TM__MRtAw1n0oukYMfechIasDg_6;
		if (!(((NI) 0) < src.len)) goto LA3_;
		if (nimAddInt(src.len, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_5)) { raiseOverflow(); goto BeforeRet_;
};
		if (((NI)(TM__MRtAw1n0oukYMfechIasDg_5)) < ((NI) 0) || ((NI)(TM__MRtAw1n0oukYMfechIasDg_5)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__MRtAw1n0oukYMfechIasDg_5), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
		copyMem__system_1709(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI) 0)]))), ((NI) ((NI)(TM__MRtAw1n0oukYMfechIasDg_5))));
		if (nimAddInt((*dest).len, src.len, &TM__MRtAw1n0oukYMfechIasDg_6)) { raiseOverflow(); goto BeforeRet_;
};
		(*dest).len = (NI)(TM__MRtAw1n0oukYMfechIasDg_6);
	}
	LA3_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_5)(tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw e) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e) {
	case ((tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw) 0):
	{
		result = TM__MRtAw1n0oukYMfechIasDg_14;
	}
	break;
	case ((tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw) 1):
	{
		result = TM__MRtAw1n0oukYMfechIasDg_16;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ*, newNicoController__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_53)(int id) {
	tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* result;
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
	tyArray__yt5VDPNtUGx9cBkOVakHwdQ T18_;
NIM_BOOL* nimErr_;
	nimfr_("newNicoController", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	nimln_(47, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	result = new__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_56();
	nimln_(48, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	(*result).id = ((NI) (id));
	nimln_(49, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		NCSTRING T15_;
		NimStringV2 T16_;
		if (!(((NI32) -1) < id)) goto LA4_;
		nimln_(51, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*result).sdlController = SDL_GameControllerOpen(id);
		nimln_(52, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		{
			NimStringV2 colontmpD__3;
			Exception* T11_;
			NimStringV2 T12_;
			if (!((*result).sdlController == NIM_NIL)) goto LA8_;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			T11_ = NIM_NIL;
			T11_ = (Exception*) nimNewObj(sizeof(Exception), NIM_ALIGNOF(Exception));
			(*T11_).Sup.m_type = (&NTIv2__XEycrCsme5C8CVWAYEcdBQ_);
			(*T11_).name = "Exception";
			nimln_(53, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
			T12_.len = 0; T12_.p = NIM_NIL;
			colontmpD__3 = dollar___systemZdollars_3(((NI) (id)));
			if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
			T12_ = rawNewString(colontmpD__3.len + 31);
appendString((&T12_), TM__MRtAw1n0oukYMfechIasDg_4);
appendString((&T12_), colontmpD__3);
			(*T11_).message = T12_;
			(*T11_).parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T11_, "Exception", "newNicoController", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim", 53);
			goto LA10_;
			{
				LA10_:;
			}
			{
				nimln_(54, "/usr/lib/nim/system/fatal.nim");
				eqdestroy___system_3263((&colontmpD__3));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		}
		LA8_: ;
		nimln_(54, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		T15_ = (NCSTRING)0;
		T15_ = SDL_GameControllerName((*result).sdlController);
		T16_.len = 0; T16_.p = NIM_NIL;
		T16_ = cstrToNimstr(T15_);
		nimln_(54, "/usr/lib/nim/system/fatal.nim");
		eqsink___system_3269((&(*result).name), T16_);
		nimln_(55, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*result).kind = ((tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw) 1);
		nimln_(56, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*result).deadzone = 0.5;
	}
	goto LA2_;
	LA4_: ;
	{
		nimln_(58, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*result).kind = ((tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw) 0);
		nimln_(54, "/usr/lib/nim/system/fatal.nim");
		eqsink___system_3269((&(*result).name), TM__MRtAw1n0oukYMfechIasDg_8);
	}
	LA2_: ;
	nimln_(60, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	T18_[0] = TM__MRtAw1n0oukYMfechIasDg_10;
	colontmpD_ = dollar___systemZdollars_3(((NI) (id)));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T18_[1] = colontmpD_;
	T18_[2] = TM__MRtAw1n0oukYMfechIasDg_12;
	colontmpD__2 = dollar___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_5((*result).kind);
	T18_[3] = colontmpD__2;
	T18_[4] = TM__MRtAw1n0oukYMfechIasDg_17;
	T18_[5] = (*result).name;
	echoBinSafe(T18_, 6);
	{
		LA1_:;
	}
	{
		nimln_(54, "/usr/lib/nim/system/fatal.nim");
		eqdestroy___system_3263((&colontmpD__2));
		eqdestroy___system_3263((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	NI TM__MRtAw1n0oukYMfechIasDg_18;
	nimfr_("nimIncRefCyclic", "/usr/lib/nim/system/orc.nim");
{	nimln_(45, "/usr/lib/nim/system/orc.nim");
	nimln_(63, "/usr/lib/nim/system/arc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 8));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	nimln_(46, "/usr/lib/nim/system/orc.nim");
	if (nimAddInt((*h).rc, ((NI) 16), &TM__MRtAw1n0oukYMfechIasDg_18)) { raiseOverflow(); goto BeforeRet_;
};
	(*h).rc = (NI)(TM__MRtAw1n0oukYMfechIasDg_18);
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_68)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ** dest, tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* src, NIM_BOOL cyclic) {
	tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* colontmp_;
	colontmp_ = (*dest);
	{
		if (!src) goto LA3_;
		nimIncRefCyclic(src, cyclic);
	}
	LA3_: ;
	(*dest) = src;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_));
		if (!T7_) goto LA8_;
		eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78(colontmp_);
		nimRawDispose(colontmp_, ((NI) 8));
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, setButtonState__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_367)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self, tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg button, NIM_BOOL down) {
	NI colontmpD_;
	NI colontmpD__2;
	nimfr_("setButtonState", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	nimln_(165, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		if (!(((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 15) < button)) goto LA3_;
		nimln_(166, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		goto BeforeRet_;
	}
	LA3_: ;
	nimln_(167, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		if (!down) goto LA7_;
		colontmpD_ = ((NI) 1);
		(*self).buttons[(button)- 0] = colontmpD_;
	}
	goto LA5_;
	LA7_: ;
	{
		colontmpD__2 = ((NI) -2);
		(*self).buttons[(button)- 0] = colontmpD__2;
	}
	LA5_: ;
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, setAxisValue__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_379)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self, tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA axis, NF value) {
	nimfr_("setAxisValue", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{	nimln_(170, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		if (!(((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5) < axis)) goto LA3_;
		nimln_(171, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		goto BeforeRet_;
	}
	LA3_: ;
	nimln_(172, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		NIM_BOOL T7_;
		NIM_BOOL T8_;
		NIM_BOOL T11_;
		T7_ = (NIM_BOOL)0;
		T8_ = (NIM_BOOL)0;
		T8_ = (axis == ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0));
		if (!(T8_)) goto LA9_;
		T8_ = (*self).invertX;
		LA9_: ;
		T7_ = T8_;
		if (T7_) goto LA10_;
		T11_ = (NIM_BOOL)0;
		T11_ = (axis == ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 1));
		if (!(T11_)) goto LA12_;
		T11_ = (*self).invertY;
		LA12_: ;
		T7_ = T11_;
		LA10_: ;
		if (!T7_) goto LA13_;
		nimln_(173, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*self).axes[(axis)- 0].Field0 = -(value);
	}
	goto LA5_;
	LA13_: ;
	{
		nimln_(175, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		(*self).axes[(axis)- 0].Field0 = value;
	}
	LA5_: ;
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, update__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_145)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self) {
	nimfr_("update", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{	{
		tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg i;
		NI res;
		i = (tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg)0;
		nimln_(90, "/usr/lib/nim/system/iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(91, "/usr/lib/nim/system/iterators_1.nim");
			while (1) {
				NI TM__MRtAw1n0oukYMfechIasDg_22;
				if (!(res <= ((NI) 15))) goto LA3;
				nimln_(63, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
				if ((res) < ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 0) || (res) > ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 15)){ raiseRangeErrorI(res, ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 0), ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 15)); goto BeforeRet_;
}
				i = ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) (res));
				{
					nimln_(64, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (!((*self).kind == ((tyEnum_NicoControllerKind__ix59cQVRlfn769bsRVIgbNCw) 1))) goto LA6_;
					nimln_(65, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					{
						if (!(i == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 9))) goto LA10_;
						nimln_(66, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
						{
							NI TM__MRtAw1n0oukYMfechIasDg_19;
							if (!((*self).deadzone < (*self).axes[(((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 4))- 0].Field0)) goto LA14_;
							nimln_(67, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
							if (nimAddInt((*self).buttons[(i)- 0], ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_19)) { raiseOverflow(); goto BeforeRet_;
};
							(*self).buttons[(i)- 0] = (NI)(TM__MRtAw1n0oukYMfechIasDg_19);
						}
						goto LA12_;
						LA14_: ;
						{
							nimln_(69, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
							(*self).buttons[(i)- 0] = ((NI) 0);
						}
						LA12_: ;
					}
					goto LA8_;
					LA10_: ;
					{
						nimln_(70, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
						if (!(i == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 12))) goto LA18_;
						nimln_(71, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
						{
							NI TM__MRtAw1n0oukYMfechIasDg_20;
							if (!((*self).deadzone < (*self).axes[(((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5))- 0].Field0)) goto LA22_;
							nimln_(72, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
							if (nimAddInt((*self).buttons[(i)- 0], ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_20)) { raiseOverflow(); goto BeforeRet_;
};
							(*self).buttons[(i)- 0] = (NI)(TM__MRtAw1n0oukYMfechIasDg_20);
						}
						goto LA20_;
						LA22_: ;
						{
							nimln_(74, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
							(*self).buttons[(i)- 0] = ((NI) 0);
						}
						LA20_: ;
					}
					goto LA8_;
					LA18_: ;
					LA8_: ;
				}
				LA6_: ;
				nimln_(63, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
				{
					nimln_(76, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (!((*self).buttons[(i)- 0] == ((NI) -1))) goto LA27_;
					nimln_(77, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					(*self).buttons[(i)- 0] = ((NI) 0);
				}
				goto LA25_;
				LA27_: ;
				{
					nimln_(79, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (!((*self).buttons[(i)- 0] == ((NI) -2))) goto LA30_;
					nimln_(80, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					(*self).buttons[(i)- 0] = ((NI) -1);
				}
				goto LA25_;
				LA30_: ;
				LA25_: ;
				nimln_(63, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
				{
					NI TM__MRtAw1n0oukYMfechIasDg_21;
					nimln_(82, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (!(((NI) 1) <= (*self).buttons[(i)- 0])) goto LA34_;
					nimln_(83, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (nimAddInt((*self).buttons[(i)- 0], ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_21)) { raiseOverflow(); goto BeforeRet_;
};
					(*self).buttons[(i)- 0] = (NI)(TM__MRtAw1n0oukYMfechIasDg_21);
				}
				LA34_: ;
				nimln_(93, "/usr/lib/nim/system/iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_22)) { raiseOverflow(); goto BeforeRet_;
};
				res = (NI)(TM__MRtAw1n0oukYMfechIasDg_22);
			} LA3: ;
		}
	}
	{
		tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA i_2;
		NI res_2;
		i_2 = (tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA)0;
		nimln_(90, "/usr/lib/nim/system/iterators_1.nim");
		res_2 = ((NI) 0);
		{
			nimln_(91, "/usr/lib/nim/system/iterators_1.nim");
			while (1) {
				NI TM__MRtAw1n0oukYMfechIasDg_25;
				if (!(res_2 <= ((NI) 5))) goto LA38;
				nimln_(85, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
				if ((res_2) < ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0) || (res_2) > ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5)){ raiseRangeErrorI(res_2, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0), ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5)); goto BeforeRet_;
}
				i_2 = ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) (res_2));
				{
					NIM_BOOL T41_;
					NI TM__MRtAw1n0oukYMfechIasDg_23;
					nimln_(86, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					T41_ = (NIM_BOOL)0;
					T41_ = ((*self).axes[(i_2)- 0].Field1 < -((*self).deadzone));
					if (!(T41_)) goto LA42_;
					T41_ = ((*self).axes[(i_2)- 0].Field0 < -((*self).deadzone));
					LA42_: ;
					if (!T41_) goto LA43_;
					nimln_(87, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (nimAddInt((*self).axes[(i_2)- 0].Field2, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_23)) { raiseOverflow(); goto BeforeRet_;
};
					(*self).axes[(i_2)- 0].Field2 = (NI)(TM__MRtAw1n0oukYMfechIasDg_23);
				}
				goto LA39_;
				LA43_: ;
				{
					NIM_BOOL T46_;
					NI TM__MRtAw1n0oukYMfechIasDg_24;
					nimln_(88, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					T46_ = (NIM_BOOL)0;
					T46_ = ((*self).deadzone < (*self).axes[(i_2)- 0].Field1);
					if (!(T46_)) goto LA47_;
					T46_ = ((*self).deadzone < (*self).axes[(i_2)- 0].Field0);
					LA47_: ;
					if (!T46_) goto LA48_;
					nimln_(89, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					if (nimAddInt((*self).axes[(i_2)- 0].Field2, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_24)) { raiseOverflow(); goto BeforeRet_;
};
					(*self).axes[(i_2)- 0].Field2 = (NI)(TM__MRtAw1n0oukYMfechIasDg_24);
				}
				goto LA39_;
				LA48_: ;
				{
					nimln_(91, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
					(*self).axes[(i_2)- 0].Field2 = ((NI) 0);
				}
				LA39_: ;
				nimln_(93, "/usr/lib/nim/system/iterators_1.nim");
				if (nimAddInt(res_2, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_25)) { raiseOverflow(); goto BeforeRet_;
};
				res_2 = (NI)(TM__MRtAw1n0oukYMfechIasDg_25);
			} LA38: ;
		}
	}
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, postUpdate__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_243)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self) {
	nimfr_("postUpdate", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{	{
		tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA i;
		NI res;
		i = (tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA)0;
		nimln_(90, "/usr/lib/nim/system/iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(91, "/usr/lib/nim/system/iterators_1.nim");
			while (1) {
				NI TM__MRtAw1n0oukYMfechIasDg_26;
				if (!(res <= ((NI) 5))) goto LA3;
				nimln_(94, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
				if ((res) < ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0) || (res) > ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5)){ raiseRangeErrorI(res, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0), ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 5)); goto BeforeRet_;
}
				i = ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) (res));
				(*self).axes[(i)- 0].Field1 = (*self).axes[(i)- 0].Field0;
				nimln_(93, "/usr/lib/nim/system/iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__MRtAw1n0oukYMfechIasDg_26)) { raiseOverflow(); goto BeforeRet_;
};
				res = (NI)(TM__MRtAw1n0oukYMfechIasDg_26);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NF, axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self, tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA axis) {
	NF result;
	nimfr_("axis", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{	result = (NF)0;
	nimln_(98, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	result = (*self).axes[(axis)- 0].Field0;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, btn__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_273)(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ* self, tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg button) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("btn", "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimln_(109, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	{
		NIM_BOOL T5_;
		NF T7_;
		if (!(button == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 0))) goto LA3_;
		nimln_(110, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		T5_ = (NIM_BOOL)0;
		T5_ = (((NI) 0) < (*self).buttons[(button)- 0]);
		if (T5_) goto LA6_;
		T7_ = (NF)0;
		T7_ = axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258(self, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T5_ = (T7_ < -((*self).deadzone));
		LA6_: ;
		result = T5_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T11_;
		NF T13_;
		nimln_(111, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		if (!(button == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 1))) goto LA9_;
		nimln_(112, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		T11_ = (NIM_BOOL)0;
		T11_ = (((NI) 0) < (*self).buttons[(button)- 0]);
		if (T11_) goto LA12_;
		T13_ = (NF)0;
		T13_ = axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258(self, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T11_ = ((*self).deadzone < T13_);
		LA12_: ;
		result = T11_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA9_: ;
	{
		NIM_BOOL T17_;
		NF T19_;
		nimln_(113, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		if (!(button == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 2))) goto LA15_;
		nimln_(114, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		T17_ = (NIM_BOOL)0;
		T17_ = (((NI) 0) < (*self).buttons[(button)- 0]);
		if (T17_) goto LA18_;
		T19_ = (NF)0;
		T19_ = axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258(self, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T17_ = (T19_ < -((*self).deadzone));
		LA18_: ;
		result = T17_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA15_: ;
	{
		NIM_BOOL T23_;
		NF T25_;
		nimln_(115, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		if (!(button == ((tyEnum_NicoButton__uhwLFGrWiWLeGBuK2zmKfg) 3))) goto LA21_;
		nimln_(116, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
		T23_ = (NIM_BOOL)0;
		T23_ = (((NI) 0) < (*self).buttons[(button)- 0]);
		if (T23_) goto LA24_;
		T25_ = (NF)0;
		T25_ = axis__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_258(self, ((tyEnum_NicoAxis__vjLPOolGyMllOE5Q6cUERA) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T23_ = ((*self).deadzone < T25_);
		LA24_: ;
		result = T23_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA21_: ;
	LA1_: ;
	nimln_(117, "/home/manea/.nimble/pkgs/nico-0.4.9/nico/controller.nim");
	result = (((NI) 0) < (*self).buttons[(button)- 0]);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotnimbleatspkgsatsnicominus0dot4dot9atsnicoatscontrollerdotnim_DatInit000)(void) {
NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.destructor = (void*)eqdestroy___OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZcontroller_78; NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.size = sizeof(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ); NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.align = NIM_ALIGNOF(tyObject_NicoControllercolonObjectType___KhzrHn1wfPdYSFPNFSFvIQ); NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.name = "|nico.controller.NicoController:ObjectType|";
; NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.traceImpl = (void*)NIM_NIL; NTIv2__KhzrHn1wfPdYSFPNFSFvIQ_.flags = 0;}

