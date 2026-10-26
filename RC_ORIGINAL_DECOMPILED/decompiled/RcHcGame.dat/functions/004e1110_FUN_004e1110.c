/*
 * FUN_004e1110 at 004e1110
 * undefined FUN_004e1110(void)
 * Address ranges: 004e1110-004e1143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e1110(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0060b0da();
  _DAT_006b9418 = (float)fVar1;
  *(float *)(param_1 + 0x2c8) = (float)((fVar1 / (float10)4.0) * (float10)6.2831855);
  return;
}

