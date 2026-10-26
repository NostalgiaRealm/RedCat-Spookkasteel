/*
 * FUN_004a72c0 at 004a72c0
 * undefined FUN_004a72c0(void)
 * Address ranges: 004a72c0-004a72f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_004a72c0(int param_1)

{
  float10 fVar1;
  undefined4 uStack_4;
  
  if (*(float *)(param_1 + 0x60) == 0.0) {
    uStack_4 = param_1;
    fVar1 = (float10)FUN_005ad390(param_1 + 0x14,(int)&uStack_4 + 3);
    *(float *)(param_1 + 0x60) = (float)fVar1;
    return fVar1;
  }
  return (float10)*(float *)(param_1 + 0x60);
}

