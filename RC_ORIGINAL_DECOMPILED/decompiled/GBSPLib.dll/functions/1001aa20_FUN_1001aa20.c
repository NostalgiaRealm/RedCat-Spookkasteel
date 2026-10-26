/*
 * FUN_1001aa20 at 1001aa20
 * undefined FUN_1001aa20(void)
 * Address ranges: 1001aa20-1001aa36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001aa20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}

