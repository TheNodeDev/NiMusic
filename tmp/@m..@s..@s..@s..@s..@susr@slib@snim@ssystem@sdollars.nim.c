/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3   -I/usr/lib/nim -I/home/manea/Documents/Connect4x4/src -o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@ssystem@sdollars.nim.c.o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@ssystem@sdollars.nim.c */
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
  typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A {
NIM_CHAR r;
NIM_CHAR g;
NIM_CHAR b;
NIM_CHAR a;
};
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_174)(NimStringV2* result, NI64 x);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_196)(NimStringV2* result, NI x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_4411)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8898)(NimStringV2* s, NIM_CHAR x);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_2 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_3 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_4 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_5 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_8 = { 1 | NIM_STRLIT_FLAG, "r" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_9 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_8};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_10 = { 2 | NIM_STRLIT_FLAG, ": " };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_11 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_10};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_12 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_13 = { 1 | NIM_STRLIT_FLAG, "g" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_14 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_13};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_15 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_10};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_16 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_17 = { 1 | NIM_STRLIT_FLAG, "b" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_18 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_17};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_19 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_10};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_20 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_21 = { 1 | NIM_STRLIT_FLAG, "a" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_22 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_21};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_23 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_10};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_24 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_25 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_24};
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
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
static N_INLINE(void, addInt__stdZprivateZdigitsutils_196)(NimStringV2* result, NI x) {
	nimfr_("addInt", "/usr/lib/nim/std/private/digitsutils.nim");
	nimln_(117, "/usr/lib/nim/std/private/digitsutils.nim");
	addInt__stdZprivateZdigitsutils_174(result, ((NI64) (x)));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x) {
	NimStringV2 result;
	nimfr_("$", "/usr/lib/nim/system/dollars.nim");
	result.len = 0; result.p = NIM_NIL;
	nimln_(12, "/usr/lib/nim/system/dollars.nim");
	addInt__stdZprivateZdigitsutils_196((&result), x);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_6)(NI64 x) {
	NimStringV2 result;
	nimfr_("$", "/usr/lib/nim/system/dollars.nim");
	result.len = 0; result.p = NIM_NIL;
	nimln_(16, "/usr/lib/nim/system/dollars.nim");
	addInt__stdZprivateZdigitsutils_174((&result), x);
	popFrame();
	return result;
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
		NI TM__n49a9aYp5BrbXv9a6OCpJYm0g_6;
		NI TM__n49a9aYp5BrbXv9a6OCpJYm0g_7;
		if (!(((NI) 0) < src.len)) goto LA3_;
		if (nimAddInt(src.len, ((NI) 1), &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6)) { raiseOverflow(); goto BeforeRet_;
};
		if (((NI)(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6)) < ((NI) 0) || ((NI)(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
		copyMem__system_1709(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI) 0)]))), ((NI) ((NI)(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6))));
		if (nimAddInt((*dest).len, src.len, &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7)) { raiseOverflow(); goto BeforeRet_;
};
		(*dest).len = (NI)(TM__n49a9aYp5BrbXv9a6OCpJYm0g_7);
	}
	LA3_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8878)(tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A x) {
	NimStringV2 result;
	NI count;
	nimfr_("$", "/usr/lib/nim/system/dollars.nim");
	result.len = 0; result.p = NIM_NIL;
	nimln_(97, "/usr/lib/nim/system/dollars.nim");
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_3;
	nimln_(99, "/usr/lib/nim/system/dollars.nim");
	count = ((NI) 0);
	nimln_(101, "/usr/lib/nim/system/dollars.nim");
	{
		if (!(((NI) 0) < count)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_5);
	}
	LA3_: ;
	nimln_(103, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_9);
	nimln_(104, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_11);
	nimln_(105, "/usr/lib/nim/system/dollars.nim");
	count += ((NI) 1);
	nimln_(111, "/usr/lib/nim/system/dollars.nim");
	addQuoted__OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8898((&result), x.r);
	nimln_(101, "/usr/lib/nim/system/dollars.nim");
	{
		if (!(((NI) 0) < count)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_12);
	}
	LA7_: ;
	nimln_(103, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_14);
	nimln_(104, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_15);
	nimln_(105, "/usr/lib/nim/system/dollars.nim");
	count += ((NI) 1);
	nimln_(111, "/usr/lib/nim/system/dollars.nim");
	addQuoted__OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8898((&result), x.g);
	nimln_(101, "/usr/lib/nim/system/dollars.nim");
	{
		if (!(((NI) 0) < count)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_16);
	}
	LA11_: ;
	nimln_(103, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_18);
	nimln_(104, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_19);
	nimln_(105, "/usr/lib/nim/system/dollars.nim");
	count += ((NI) 1);
	nimln_(111, "/usr/lib/nim/system/dollars.nim");
	addQuoted__OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8898((&result), x.b);
	nimln_(101, "/usr/lib/nim/system/dollars.nim");
	{
		if (!(((NI) 0) < count)) goto LA15_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_20);
	}
	LA15_: ;
	nimln_(103, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_22);
	nimln_(104, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_23);
	nimln_(105, "/usr/lib/nim/system/dollars.nim");
	count += ((NI) 1);
	nimln_(111, "/usr/lib/nim/system/dollars.nim");
	addQuoted__OOZOOZOOZOnimbleZpkgsZnim8078714548O51O50Znim807871_8898((&result), x.a);
	nimln_(117, "/usr/lib/nim/system/dollars.nim");
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_25);
	popFrame();
	return result;
}
