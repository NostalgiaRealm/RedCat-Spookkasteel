/*
 * FUN_10005490 at 10005490
 * undefined __cdecl FUN_10005490(int param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10005490-100054e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005490(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_10005390(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    return;
  }
  FUN_10005400(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

