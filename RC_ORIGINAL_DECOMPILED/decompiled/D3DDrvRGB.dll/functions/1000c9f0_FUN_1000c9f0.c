/*
 * FUN_1000c9f0 at 1000c9f0
 * int __cdecl FUN_1000c9f0(int param_1, int * param_2)
 * Address ranges: 1000c9f0-1000ca12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000c9f0(int param_1,int *param_2)

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

