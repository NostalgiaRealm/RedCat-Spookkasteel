/*
 * FUN_005461b8 at 005461b8
 * bool __register FUN_005461b8(int * param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 005461b8-005461ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005461b8(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00494814(param_2,param_1,*(uint *)(*(int *)(param_4 + -4) + 0x3c),1);
  return iVar1 == 0;
}

