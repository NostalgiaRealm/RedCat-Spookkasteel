/*
 * FUN_00415838 at 00415838
 * int __register FUN_00415838(int param_1)
 * Address ranges: 00415838-0041584c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00415838(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004147b0(*(int **)(param_1 + 4));
  return iVar1 - (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
}

