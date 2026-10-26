/*
 * FUN_00415850 at 00415850
 * undefined __register FUN_00415850(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 00415850-0041585e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00415850(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00417010(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}

