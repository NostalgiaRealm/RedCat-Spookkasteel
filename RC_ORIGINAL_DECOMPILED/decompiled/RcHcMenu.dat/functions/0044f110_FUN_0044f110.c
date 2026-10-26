/*
 * FUN_0044f110 at 0044f110
 * int __register FUN_0044f110(int param_1)
 * Address ranges: 0044f110-0044f128
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044f110(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_00572210)();
    return iVar1;
  }
  return iVar1;
}

