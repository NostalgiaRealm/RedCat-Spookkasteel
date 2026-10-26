/*
 * FUN_0040ac68 at 0040ac68
 * undefined __register FUN_0040ac68(undefined4 * param_1, undefined4 param_2, undefined4 param_3, ulonglong param_4)
 * Address ranges: 0040ac68-0040ac81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ac68(undefined4 *param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_0056f1c4;
  *param_1 = (int)(param_4 % uVar1);
  param_1[1] = (int)(param_4 / uVar1);
  return;
}

