/*
 * FUN_004175bc at 004175bc
 * int __register FUN_004175bc(int param_1)
 * Address ranges: 004175bc-004175cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004175bc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004147b0(*(int **)(param_1 + 4));
  return iVar1 + *(int *)(param_1 + 0x10);
}

