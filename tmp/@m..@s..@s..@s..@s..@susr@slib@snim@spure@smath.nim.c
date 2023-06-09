/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3   -I/usr/lib/nim -I/home/manea/Documents/Connect4x4/src -o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@smath.nim.c.o /home/manea/Documents/Connect4x4/tmp/@m..@s..@s..@s..@s..@susr@slib@snim@spure@smath.nim.c */
#define NIM_INTBITS 32

#include "nimbase.h"
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
#define nimfr_(x, y)
#define nimln_(x, y)
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_191)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, floorMod__OOZOOZOOZOnimbleZpkgsZnico4548O52O57ZnicoZbackendsZsdl50_1124)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = (NI)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (((NI) 0) < result);
		if (!(T4_)) goto LA5_;
		T4_ = (y < ((NI) 0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (result < ((NI) 0));
		if (!(T7_)) goto LA8_;
		T7_ = (((NI) 0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result += y;
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__pureZtimes_281)(NI64 x, NI64 y) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x / y);
	r = (NI64)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI) 1);
	}
	LA9_: ;
	return result;
}
