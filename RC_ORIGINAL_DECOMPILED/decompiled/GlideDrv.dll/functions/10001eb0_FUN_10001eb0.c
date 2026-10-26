/*
 * FUN_10001eb0 at 10001eb0
 * undefined4 __thiscall FUN_10001eb0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001eb0-10001f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10001eb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  _DAT_101f5540 = param_1;
  _DAT_101f553c = param_2;
  _DAT_101f5538 = param_3;
  DAT_1000e338 = this;
  if (this != (void *)0x0) {
    _grFogMode_4(2);
    lVar1 = __ftol();
    lVar2 = __ftol();
    lVar3 = __ftol();
    _grFogColorValue_4(((int)lVar1 << 8 | (uint)lVar2) << 8 | (uint)lVar3);
    _guFogGenerateLinear_12(&DAT_100118a0,param_2,param_3);
    _grFogTable_4(&DAT_100118a0);
    return 1;
  }
  _grFogMode_4(0);
  return 1;
}

