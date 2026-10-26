/*
 * FUN_0060aafa at 0060aafa
 * undefined FUN_0060aafa(void)
 * Address ranges: 0060aafa-0060ab1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060aafa(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    iVar2 = iVar1 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]);
  }
  return *param_2 + iVar2;
}

