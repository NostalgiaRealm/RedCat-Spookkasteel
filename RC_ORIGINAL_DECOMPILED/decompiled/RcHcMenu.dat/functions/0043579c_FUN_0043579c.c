/*
 * FUN_0043579c at 0043579c
 * int __register FUN_0043579c(int param_1)
 * Address ranges: 0043579c-004357ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043579c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 8);
  }
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x180) + 8);
  }
  return iVar1;
}

