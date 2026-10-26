/*
 * FUN_005e57b0 at 005e57b0
 * undefined FUN_005e57b0(void)
 * Address ranges: 005e57b0-005e57ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005e57b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005febf3();
  *param_1 = uVar1;
  if (*(int *)(DAT_0070fc00 + 4) != -1) {
    *(int *)(DAT_0070fc00 + 4) = *(int *)(DAT_0070fc00 + 4) + 1;
  }
  return param_1;
}

