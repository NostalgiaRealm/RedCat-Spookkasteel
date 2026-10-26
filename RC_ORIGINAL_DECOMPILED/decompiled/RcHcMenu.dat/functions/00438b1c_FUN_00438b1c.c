/*
 * FUN_00438b1c at 00438b1c
 * int __register FUN_00438b1c(int param_1)
 * Address ranges: 00438b1c-00438b3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00438b1c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_004123e0(*(int *)(*(int *)(param_1 + 0x24) + 0x16c),param_1);
    return iVar1;
  }
  return -1;
}

