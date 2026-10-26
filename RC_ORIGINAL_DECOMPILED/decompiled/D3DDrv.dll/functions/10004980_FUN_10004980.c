/*
 * FUN_10004980 at 10004980
 * undefined __cdecl FUN_10004980(int param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10004980-100049d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004980(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10004880(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    return;
  }
  FUN_100048f0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

