/*
 * FUN_005deca0 at 005deca0
 * undefined FUN_005deca0(void)
 * Address ranges: 005deca0-005decb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005deca0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}

