/*
 * FUN_004fefb0 at 004fefb0
 * undefined FUN_004fefb0(void)
 * Address ranges: 004fefb0-004ff002
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004fefb0(int param_1)

{
  float10 fVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*(float *)(param_1 + 0x1c8) == 0.0) {
    fVar1 = (float10)FUN_005ad390(param_1 + 0x17c,(int)&uStack_4 + 3);
    *(float *)(param_1 + 0x1c8) = (float)fVar1;
    __ftol();
    return;
  }
  __ftol();
  return;
}

