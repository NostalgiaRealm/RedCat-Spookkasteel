/*
 * FUN_10004da0 at 10004da0
 * undefined FUN_10004da0(void)
 * Address ranges: 10004da0-10004dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10004da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10014a00(*(int *)(param_1 + 8) * *(int *)(param_1 + 4));
  return iVar1 == 1;
}

