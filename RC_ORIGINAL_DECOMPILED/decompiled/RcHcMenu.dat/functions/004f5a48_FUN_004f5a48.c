/*
 * FUN_004f5a48 at 004f5a48
 * int __register FUN_004f5a48(int param_1)
 * Address ranges: 004f5a48-004f5a62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004f5a48(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar1 = FUN_004123e0(*(int *)(*(int *)(param_1 + 500) + 0x240),param_1);
    return iVar1;
  }
  return -1;
}

