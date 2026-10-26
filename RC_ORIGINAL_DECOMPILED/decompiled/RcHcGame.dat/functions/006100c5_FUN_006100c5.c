/*
 * FUN_006100c5 at 006100c5
 * undefined FUN_006100c5(void)
 * Address ranges: 006100c5-006100e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_006100c5(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}

