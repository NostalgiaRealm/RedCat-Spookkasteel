/*
 * FUN_00412ca4 at 00412ca4
 * int __register FUN_00412ca4(int param_1)
 * Address ranges: 00412ca4-00412cb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00412ca4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_004123e0(*(int *)(*(int *)(param_1 + 4) + 8),param_1);
    return iVar1;
  }
  return -1;
}

