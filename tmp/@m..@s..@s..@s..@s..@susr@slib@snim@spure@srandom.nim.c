/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3   -I/usr/lib/nim -I/home/manea/Documents/Connect4x4/src -o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@srandom.nim.c.o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@srandom.nim.c */
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
  typedef struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A;
struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A {
NU64 a0;
NU64 a1;
};
typedef NU64 tyArray__NzKR9bw29cLPrd712Xt6Liiw[2];
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_98)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max);
N_LIB_PRIVATE N_NIMCALL(NU64, rand__pureZrandom_102)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NU64 max);
N_LIB_PRIVATE N_NIMCALL(NU64, next__pureZrandom_47)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r);
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__pureZrandom_35)(NU64 x, NU64 k);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_4411)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_225)(NI64 seed);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, skipRandomNumbers__pureZrandom_56)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE NIM_CONST tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A DefaultRandSeed__pureZrandom_13 = {7616934476015405061ULL, 15122295919272093642ULL}
;
N_LIB_PRIVATE NIM_CONST tyArray__NzKR9bw29cLPrd712Xt6Liiw helper__pureZrandom_58 = {13739361407582206667ULL,
15594563132006766882ULL}
;
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A state__pureZrandom_14;
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A baseState__pureZrandom_253;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern TFrame* framePtr__system_3889;
extern NIM_BOOL nimInErrorMode__system_4240;
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
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__pureZrandom_35)(NU64 x, NU64 k) {
	NU64 result;
	nimfr_("rotl", "/usr/lib/nim/pure/random.nim");
	result = (NU64)0;
	nimln_(132, "/usr/lib/nim/pure/random.nim");
	result = (NU64)((NU64)((NU64)(x) << (NU64)(k)) | (NU64)((NU64)(x) >> (NU64)((NU64)((NU64)(64ULL) - (NU64)(k)))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4240);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, next__pureZrandom_47)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r) {
	NU64 result;
	NU64 s0;
	NU64 s1;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
	nimfr_("next", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	result = (NU64)0;
	nimln_(150, "/usr/lib/nim/pure/random.nim");
	s0 = (*r).a0;
	nimln_(151, "/usr/lib/nim/pure/random.nim");
	s1 = (*r).a1;
	nimln_(152, "/usr/lib/nim/pure/random.nim");
	result = (NU64)((NU64)(s0) + (NU64)(s1));
	nimln_(153, "/usr/lib/nim/pure/random.nim");
	s1 = (NU64)(s1 ^ s0);
	nimln_(154, "/usr/lib/nim/pure/random.nim");
	T1_ = (NU64)0;
	T1_ = rotl__pureZrandom_35(s0, 55ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*r).a0 = (NU64)((NU64)(T1_ ^ s1) ^ (NU64)((NU64)(s1) << (NU64)(((NI) 14))));
	nimln_(155, "/usr/lib/nim/pure/random.nim");
	T2_ = (NU64)0;
	T2_ = rotl__pureZrandom_35(s1, 36ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*r).a1 = T2_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, rand__pureZrandom_102)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NU64 max) {
	NU64 result;
NIM_BOOL* nimErr_;
	nimfr_("rand", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	result = (NU64)0;
	nimln_(218, "/usr/lib/nim/pure/random.nim");
	{
		if (!(max == 0ULL)) goto LA3_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NU64 max_2;
		nimln_(220, "/usr/lib/nim/pure/random.nim");
		max_2 = max;
		nimln_(222, "/usr/lib/nim/pure/random.nim");
		{
			if (!(max_2 == 18446744073709551615ULL)) goto LA8_;
			result = next__pureZrandom_47(r);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA8_: ;
		{
			nimln_(223, "/usr/lib/nim/pure/random.nim");
			while (1) {
				NU64 x;
				nimln_(224, "/usr/lib/nim/pure/random.nim");
				x = next__pureZrandom_47(r);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimln_(226, "/usr/lib/nim/pure/random.nim");
				{
					if (!((NU64)(x) <= (NU64)((NU64)((NU64)(18446744073709551615ULL) - (NU64)((NU64)((NU64)(18446744073709551615ULL) % (NU64)(max_2))))))) goto LA14_;
					nimln_(227, "/usr/lib/nim/pure/random.nim");
					result = (NU64)((NU64)(x) % (NU64)((NU64)((NU64)(max_2) + (NU64)(1ULL))));
					goto BeforeRet_;
				}
				LA14_: ;
			}
		}
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_98)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max) {
	NI result;
	NU64 T1_;
NIM_BOOL* nimErr_;
	nimfr_("rand", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimln_(230, "/usr/lib/nim/pure/random.nim");
	nimln_(243, "/usr/lib/nim/pure/random.nim");
	T1_ = (NU64)0;
	T1_ = rand__pureZrandom_102(r, ((NU64) (max)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T1_));
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_121)(NI max) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("rand", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimln_(247, "/usr/lib/nim/pure/random.nim");
	nimln_(265, "/usr/lib/nim/pure/random.nim");
	if ((max) < ((NI) 0) || (max) > ((NI) 2147483647)){ raiseRangeErrorI(max, ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;
}
	result = rand__pureZrandom_98((&state__pureZrandom_14), ((NI) (max)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, skipRandomNumbers__pureZrandom_56)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* s) {
	NU64 s0;
	NU64 s1;
NIM_BOOL* nimErr_;
	nimfr_("skipRandomNumbers", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	nimln_(205, "/usr/lib/nim/pure/random.nim");
	s0 = 0ULL;
	nimln_(206, "/usr/lib/nim/pure/random.nim");
	s1 = 0ULL;
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(90, "/usr/lib/nim/system/iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(91, "/usr/lib/nim/system/iterators_1.nim");
			while (1) {
				NI TM__AIKkgex03Z1j45JceakCTA_3;
				if (!(res <= ((NI) 1))) goto LA3;
				nimln_(207, "/usr/lib/nim/pure/random.nim");
				i = res;
				{
					NI b;
					NI i_2;
					b = (NI)0;
					nimln_(119, "/usr/lib/nim/system/iterators_1.nim");
					i_2 = ((NI) 0);
					{
						nimln_(120, "/usr/lib/nim/system/iterators_1.nim");
						while (1) {
							NU64 T11_;
							NI TM__AIKkgex03Z1j45JceakCTA_2;
							if (!(i_2 < ((NI) 64))) goto LA6;
							nimln_(208, "/usr/lib/nim/pure/random.nim");
							b = i_2;
							{
								nimln_(209, "/usr/lib/nim/pure/random.nim");
								if ((NU)(i) > (NU)(1)){ raiseIndexError2(i, 1); goto BeforeRet_;
}
								if (!!(((NU64)(helper__pureZrandom_58[(i)- 0] & (NU64)((NU64)(1ULL) << (NU64)(((NU64) (b))))) == 0ULL))) goto LA9_;
								nimln_(210, "/usr/lib/nim/pure/random.nim");
								s0 = (NU64)(s0 ^ (*s).a0);
								nimln_(211, "/usr/lib/nim/pure/random.nim");
								s1 = (NU64)(s1 ^ (*s).a1);
							}
							LA9_: ;
							nimln_(208, "/usr/lib/nim/pure/random.nim");
							nimln_(212, "/usr/lib/nim/pure/random.nim");
							T11_ = (NU64)0;
							T11_ = next__pureZrandom_47(s);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							(void)(T11_);
							nimln_(122, "/usr/lib/nim/system/iterators_1.nim");
							if (nimAddInt(i_2, ((NI) 1), &TM__AIKkgex03Z1j45JceakCTA_2)) { raiseOverflow(); goto BeforeRet_;
};
							i_2 = (NI)(TM__AIKkgex03Z1j45JceakCTA_2);
						} LA6: ;
					}
				}
				nimln_(93, "/usr/lib/nim/system/iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__AIKkgex03Z1j45JceakCTA_3)) { raiseOverflow(); goto BeforeRet_;
};
				res = (NI)(TM__AIKkgex03Z1j45JceakCTA_3);
			} LA3: ;
		}
	}
	nimln_(213, "/usr/lib/nim/pure/random.nim");
	(*s).a0 = s0;
	nimln_(214, "/usr/lib/nim/pure/random.nim");
	(*s).a1 = s1;
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_225)(NI64 seed) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A result;
	NI64 colontmpD_;
	NI64 colontmpD__2;
	NI64 seed_2;
	NU64 T6_;
NIM_BOOL* nimErr_;
	nimfr_("initRand", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	colontmpD_ = (NI64)0;
	colontmpD__2 = (NI64)0;
	nimln_(564, "/usr/lib/nim/pure/random.nim");
	{
		if (!!((seed == IL64(0)))) goto LA3_;
		colontmpD_ = seed;
		seed_2 = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = IL64(2147483647);
		seed_2 = colontmpD__2;
	}
	LA1_: ;
	nimln_(565, "/usr/lib/nim/pure/random.nim");
	result.a0 = ((NU64) ((NI64)((NI64)(seed_2) >> (NU64)(((NI) 16)))));
	nimln_(566, "/usr/lib/nim/pure/random.nim");
	result.a1 = ((NU64) ((NI64)(seed_2 & IL64(65535))));
	nimln_(570, "/usr/lib/nim/pure/random.nim");
	skipRandomNumbers__pureZrandom_56((&result));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(571, "/usr/lib/nim/pure/random.nim");
	T6_ = (NU64)0;
	T6_ = next__pureZrandom_47((&result));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(void)(T6_);
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, randomize__pureZrandom_238)(NI64 seed) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A T1_;
NIM_BOOL* nimErr_;
	nimfr_("randomize", "/usr/lib/nim/pure/random.nim");
{nimErr_ = nimErrorFlag();
	nimln_(592, "/usr/lib/nim/pure/random.nim");
	nimZeroMem((void*)(&T1_), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	T1_ = initRand__pureZrandom_225(seed);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	state__pureZrandom_14 = T1_;
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsusratslibatsnimatspureatsrandomdotnim_Init000)(void) {
{
	nimfr_("random", "/usr/lib/nim/pure/random.nim");
	nimln_(116, "/usr/lib/nim/pure/random.nim");
	state__pureZrandom_14 = DefaultRandSeed__pureZrandom_13;
	popFrame();
}
}

