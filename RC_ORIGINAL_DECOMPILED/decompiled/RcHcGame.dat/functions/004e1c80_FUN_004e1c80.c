/*
 * FUN_004e1c80 at 004e1c80
 * undefined FUN_004e1c80(void)
 * Address ranges: 004e1c80-004e1cf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e1c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    fVar1 = (float10)FUN_00409e30(param_3);
    fVar1 = fVar1 * (float10)_DAT_006b9408 + (float10)*(float *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x2c8) = (float)fVar1;
    if ((float10)6.2831855 <= fVar1) {
      *(float *)(param_1 + 0x2c8) = (float)(fVar1 - (float10)6.2831855);
    }
    FUN_004a0e20(*(float *)(param_1 + 0x2c8) * 0.15915494);
    FUN_004a0ac0(param_3);
  }
  return;
}

