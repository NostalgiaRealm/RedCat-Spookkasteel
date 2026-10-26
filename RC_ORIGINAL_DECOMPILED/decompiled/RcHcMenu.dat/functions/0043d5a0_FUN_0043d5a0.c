/*
 * FUN_0043d5a0 at 0043d5a0
 * int __register FUN_0043d5a0(int param_1)
 * Address ranges: 0043d5a0-0043d5b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043d5a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_004123e0(*(int *)(*(int *)(param_1 + 0x4c) + 0x24),param_1);
    return iVar1;
  }
  return -1;
}

