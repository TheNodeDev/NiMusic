/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3   -I/usr/lib/nim -I/home/manea/Documents/Connect4x4/src -o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@spathnorm.nim.c.o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@spathnorm.nim.c */
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
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringV2 x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_4411)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_66)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_62)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7460)(NimStringV2 s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_3263)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_58)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___system_3269)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_74)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__DfU0iuayCGwHDN1Exp9cbKg_22 = { 1 | NIM_STRLIT_FLAG, "." };
static const NimStringV2 TM__DfU0iuayCGwHDN1Exp9cbKg_23 = {1, (NimStrPayload*)&TM__DfU0iuayCGwHDN1Exp9cbKg_22};
extern NIM_BOOL nimInErrorMode__system_4240;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4240);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringV2 x) {
	NIM_BOOL result;
	nimfr_("hasNext", "/usr/lib/nim/pure/pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(25, "/usr/lib/nim/pure/pathnorm.nim");
	result = (it.i < x.len);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringV2 x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
NIM_BOOL* nimErr_;
	nimfr_("next", "/usr/lib/nim/pure/pathnorm.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	nimln_(28, "/usr/lib/nim/pure/pathnorm.nim");
	(*it).prev = (*it).i;
	nimln_(29, "/usr/lib/nim/pure/pathnorm.nim");
	{
		NIM_BOOL T3_;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_3;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		if ((*it).i < 0 || (*it).i >= x.len){ raiseIndexError2((*it).i,x.len-1); goto BeforeRet_;
}
		T3_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(31, "/usr/lib/nim/pure/pathnorm.nim");
		if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_3)) { raiseOverflow(); goto BeforeRet_;
};
		(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_3);
	}
	goto LA1_;
	LA5_: ;
	{
		{
			nimln_(37, "/usr/lib/nim/pure/pathnorm.nim");
			while (1) {
				NIM_BOOL T10_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_4;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it).i < x.len);
				if (!(T10_)) goto LA11_;
				if ((*it).i < 0 || (*it).i >= x.len){ raiseIndexError2((*it).i,x.len-1); goto BeforeRet_;
}
				T10_ = !((((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47))));
				LA11_: ;
				if (!T10_) goto LA9;
				if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_4)) { raiseOverflow(); goto BeforeRet_;
};
				(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_4);
			} LA9: ;
		}
	}
	LA1_: ;
	nimln_(38, "/usr/lib/nim/pure/pathnorm.nim");
	{
		NI colontmp_;
		NI colontmp__2;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_5;
		if (!((*it).prev < (*it).i)) goto LA14_;
		nimln_(39, "/usr/lib/nim/pure/pathnorm.nim");
		colontmp_ = (*it).prev;
		if (nimSubInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_5)) { raiseOverflow(); goto BeforeRet_;
};
		colontmp__2 = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5);
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA12_;
	LA14_: ;
	{
		NIM_BOOL T17_;
		nimln_(40, "/usr/lib/nim/pure/pathnorm.nim");
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext__pureZpathnorm_6((*it), x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T17_) goto LA18_;
		nimln_(41, "/usr/lib/nim/pure/pathnorm.nim");
		result = next__pureZpathnorm_10(it, x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA12_;
	LA18_: ;
	LA12_: ;
	{
		nimln_(43, "/usr/lib/nim/pure/pathnorm.nim");
		while (1) {
			NIM_BOOL T22_;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_6;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it).i < x.len);
			if (!(T22_)) goto LA23_;
			if ((*it).i < 0 || (*it).i >= x.len){ raiseIndexError2((*it).i,x.len-1); goto BeforeRet_;
}
			T22_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
			LA23_: ;
			if (!T22_) goto LA21;
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_6)) { raiseOverflow(); goto BeforeRet_;
};
			(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_6);
		} LA21: ;
	}
	nimln_(44, "/usr/lib/nim/pure/pathnorm.nim");
	(*it).notFirst = NIM_TRUE;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_66)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isSlash", "/usr/lib/nim/pure/pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimln_(57, "/usr/lib/nim/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds.Field0 < 0 || bounds.Field0 >= x.len){ raiseIndexError2(bounds.Field0,x.len-1); goto BeforeRet_;
}
	T1_ = (((NU8)(x.p->data[bounds.Field0])) == ((NU8)(47)) || ((NU8)(x.p->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_8;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_9;
{	prepareAdd(s, ((NI) 1));
	(*(*s).p).data[(*s).len] = c;
	if (nimAddInt((*s).len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_8)) { raiseOverflow(); goto BeforeRet_;
};
	(*(*s).p).data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_8)] = 0;
	if (nimAddInt((*s).len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_9)) { raiseOverflow(); goto BeforeRet_;
};
	(*s).len = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_62)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_10;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_11;
	nimfr_("isDotDot", "/usr/lib/nim/pure/pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimln_(54, "/usr/lib/nim/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_10)) { raiseOverflow(); goto BeforeRet_;
};
	T2_ = (bounds.Field1 == (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10));
	if (!(T2_)) goto LA3_;
	if (bounds.Field0 < 0 || bounds.Field0 >= x.len){ raiseIndexError2(bounds.Field0,x.len-1); goto BeforeRet_;
}
	T2_ = ((NU8)(x.p->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_11)) { raiseOverflow(); goto BeforeRet_;
};
	if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11) >= x.len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11),x.len-1); goto BeforeRet_;
}
	T1_ = ((NU8)(x.p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11)]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	}BeforeRet_: ;
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
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_18;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_19;
		if (!(((NI) 0) < src.len)) goto LA3_;
		if (nimAddInt(src.len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_18)) { raiseOverflow(); goto BeforeRet_;
};
		if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)) < ((NI) 0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
		copyMem__system_1709(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI) 0)]))), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18))));
		if (nimAddInt((*dest).len, src.len, &TM__DfU0iuayCGwHDN1Exp9cbKg_19)) { raiseOverflow(); goto BeforeRet_;
};
		(*dest).len = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19);
	}
	LA3_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_58)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isDot", "/usr/lib/nim/pure/pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimln_(51, "/usr/lib/nim/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds.Field0 < 0 || bounds.Field0 >= x.len){ raiseIndexError2(bounds.Field0,x.len-1); goto BeforeRet_;
}
	T1_ = ((NU8)(x.p->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_74)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
NIM_BOOL* nimErr_;
	nimfr_("addNormalizePath", "/usr/lib/nim/pure/pathnorm.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	nimln_(66, "/usr/lib/nim/pure/pathnorm.nim");
	it.notFirst = (((NI) 0) < (NI)((NI32)((*state)) >> (NU32)(((NI) 1))));
	nimln_(67, "/usr/lib/nim/pure/pathnorm.nim");
	{
		if (!it.notFirst) goto LA3_;
		{
			nimln_(68, "/usr/lib/nim/pure/pathnorm.nim");
			while (1) {
				NIM_BOOL T7_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_2;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < x.len);
				if (!(T7_)) goto LA8_;
				if (it.i < 0 || it.i >= x.len){ raiseIndexError2(it.i,x.len-1); goto BeforeRet_;
}
				T7_ = (((NU8)(x.p->data[it.i])) == ((NU8)(47)) || ((NU8)(x.p->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6;
				if (nimAddInt(it.i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_2)) { raiseOverflow(); goto BeforeRet_;
};
				it.i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_2);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		nimln_(69, "/usr/lib/nim/pure/pathnorm.nim");
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__pureZpathnorm_6(it, x);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T11_) goto LA10;
			nimln_(70, "/usr/lib/nim/pure/pathnorm.nim");
			b = next__pureZpathnorm_10((&it), x);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(71, "/usr/lib/nim/pure/pathnorm.nim");
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI32)((*state)) >> (NU32)(((NI) 1))) == ((NI) 0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__pureZpathnorm_66(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				LA15_: ;
				if (!T14_) goto LA16_;
				nimln_(72, "/usr/lib/nim/pure/pathnorm.nim");
				{
					NIM_BOOL T20_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_7;
					T20_ = (NIM_BOOL)0;
					T20_ = ((*result).len == ((NI) 0));
					if (T20_) goto LA21_;
					if (nimSubInt((*result).len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_7)) { raiseOverflow(); goto BeforeRet_;
};
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7) >= (*result).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7),(*result).len-1); goto BeforeRet_;
}
					T20_ = !((((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)])) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA22_;
					nimln_(73, "/usr/lib/nim/pure/pathnorm.nim");
					nimAddCharV1((&(*result)), dirSep);
				}
				LA22_: ;
				nimln_(74, "/usr/lib/nim/pure/pathnorm.nim");
				(*state) = (NI)((*state) | ((NI) 1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T25_;
				nimln_(75, "/usr/lib/nim/pure/pathnorm.nim");
				T25_ = (NIM_BOOL)0;
				T25_ = isDotDot__pureZpathnorm_62(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T25_) goto LA26_;
				nimln_(76, "/usr/lib/nim/pure/pathnorm.nim");
				{
					NI d;
					if (!(((NI) 1) <= (NI)((NI32)((*state)) >> (NU32)(((NI) 1))))) goto LA30_;
					nimln_(77, "/usr/lib/nim/pure/pathnorm.nim");
					d = (*result).len;
					{
						nimln_(84, "/usr/lib/nim/pure/pathnorm.nim");
						while (1) {
							NIM_BOOL T34_;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_12;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_13;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_14;
							T34_ = (NIM_BOOL)0;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_12)) { raiseOverflow(); goto BeforeRet_;
};
							T34_ = ((NI)((*state) & ((NI) 1)) < (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12));
							if (!(T34_)) goto LA35_;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_13)) { raiseOverflow(); goto BeforeRet_;
};
							if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13) >= (*result).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13),(*result).len-1); goto BeforeRet_;
}
							T34_ = !((((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)])) == ((NU8)(47))));
							LA35_: ;
							if (!T34_) goto LA33;
							nimln_(85, "/usr/lib/nim/pure/pathnorm.nim");
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_14)) { raiseOverflow(); goto BeforeRet_;
};
							d = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14);
						} LA33: ;
					}
					nimln_(86, "/usr/lib/nim/pure/pathnorm.nim");
					{
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_15;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_16;
						if (!(((NI) 0) < d)) goto LA38_;
						nimln_(87, "/usr/lib/nim/pure/pathnorm.nim");
						if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_15)) { raiseOverflow(); goto BeforeRet_;
};
						if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15)) < ((NI) 0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
						setLengthStrV2((&(*result)), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15))));
						nimln_(88, "/usr/lib/nim/pure/pathnorm.nim");
						if (nimSubInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_16)) { raiseOverflow(); goto BeforeRet_;
};
						(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16);
					}
					LA38_: ;
				}
				goto LA28_;
				LA30_: ;
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimln_(90, "/usr/lib/nim/pure/pathnorm.nim");
					{
						NIM_BOOL T43_;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_17;
						T43_ = (NIM_BOOL)0;
						T43_ = (((NI) 0) < (*result).len);
						if (!(T43_)) goto LA44_;
						if (nimSubInt((*result).len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_17)) { raiseOverflow(); goto BeforeRet_;
};
						if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17) >= (*result).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17),(*result).len-1); goto BeforeRet_;
}
						T43_ = !((((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17)])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17)])) == ((NU8)(47))));
						LA44_: ;
						if (!T43_) goto LA45_;
						nimln_(91, "/usr/lib/nim/pure/pathnorm.nim");
						nimAddCharV1((&(*result)), dirSep);
					}
					LA45_: ;
					nimln_(92, "/usr/lib/nim/pure/pathnorm.nim");
					colontmpD_ = substr__system_7460(x, b.Field0, b.Field1);
					prepareAdd((&(*result)), colontmpD_.len + 0);
appendString((&(*result)), colontmpD_);
					nimln_(54, "/usr/lib/nim/system/fatal.nim");
					eqdestroy___system_3263((&colontmpD_));
				}
				LA28_: ;
			}
			goto LA12_;
			LA26_: ;
			{
				NIM_BOOL T48_;
				nimln_(93, "/usr/lib/nim/pure/pathnorm.nim");
				T48_ = (NIM_BOOL)0;
				T48_ = isDot__pureZpathnorm_58(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T48_) goto LA49_;
			}
			goto LA12_;
			LA49_: ;
			{
				NimStringV2 colontmpD__2;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_21;
				nimln_(95, "/usr/lib/nim/pure/pathnorm.nim");
				if (!(b.Field0 <= b.Field1)) goto LA52_;
				colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
				nimln_(96, "/usr/lib/nim/pure/pathnorm.nim");
				{
					NIM_BOOL T56_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_20;
					T56_ = (NIM_BOOL)0;
					T56_ = (((NI) 0) < (*result).len);
					if (!(T56_)) goto LA57_;
					if (nimSubInt((*result).len, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_20)) { raiseOverflow(); goto BeforeRet_;
};
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20) >= (*result).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20),(*result).len-1); goto BeforeRet_;
}
					T56_ = !((((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20)])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20)])) == ((NU8)(47))));
					LA57_: ;
					if (!T56_) goto LA58_;
					nimln_(97, "/usr/lib/nim/pure/pathnorm.nim");
					nimAddCharV1((&(*result)), dirSep);
				}
				LA58_: ;
				nimln_(98, "/usr/lib/nim/pure/pathnorm.nim");
				colontmpD__2 = substr__system_7460(x, b.Field0, b.Field1);
				prepareAdd((&(*result)), colontmpD__2.len + 0);
appendString((&(*result)), colontmpD__2);
				nimln_(99, "/usr/lib/nim/pure/pathnorm.nim");
				if (nimAddInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_21)) { raiseOverflow(); goto BeforeRet_;
};
				(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_21);
				nimln_(54, "/usr/lib/nim/system/fatal.nim");
				eqdestroy___system_3263((&colontmpD__2));
			}
			goto LA12_;
			LA52_: ;
			LA12_: ;
		} LA10: ;
	}
	nimln_(100, "/usr/lib/nim/pure/pathnorm.nim");
	{
		NIM_BOOL T62_;
		T62_ = (NIM_BOOL)0;
		T62_ = ((*result).len == 0);
		if (!(T62_)) goto LA63_;
		T62_ = !((x.len == 0));
		LA63_: ;
		if (!T62_) goto LA64_;
		nimln_(54, "/usr/lib/nim/system/fatal.nim");
		eqsink___system_3269((&(*result)), TM__DfU0iuayCGwHDN1Exp9cbKg_23);
	}
	LA64_: ;
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, normalizePath__pureZpathnorm_130)(NimStringV2 path, NIM_CHAR dirSep) {
	NimStringV2 result;
	NI state;
NIM_BOOL* nimErr_;
	nimfr_("normalizePath", "/usr/lib/nim/pure/pathnorm.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimln_(110, "/usr/lib/nim/pure/pathnorm.nim");
	if ((path.len) < ((NI) 0) || (path.len) > ((NI) 2147483647)){ raiseRangeErrorI(path.len, ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
	result = rawNewString(((NI) (path.len)));
	nimln_(111, "/usr/lib/nim/pure/pathnorm.nim");
	state = ((NI) 0);
	nimln_(112, "/usr/lib/nim/pure/pathnorm.nim");
	addNormalizePath__pureZpathnorm_74(path, (&result), (&state), dirSep);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
