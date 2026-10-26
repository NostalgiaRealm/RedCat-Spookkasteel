/*
 * FUN_0053c4dc at 0053c4dc
 * bool __register FUN_0053c4dc(int * param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 0053c4dc-0053c50e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0053c4dc(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00494814(param_2,param_1,*(uint *)(*(int *)(param_4 + -4) + 0x3c),1);
  return iVar1 == 0;
}

