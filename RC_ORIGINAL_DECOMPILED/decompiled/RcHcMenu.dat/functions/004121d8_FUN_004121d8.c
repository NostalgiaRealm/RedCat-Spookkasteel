/*
 * FUN_004121d8 at 004121d8
 * int __register FUN_004121d8(int * param_1, int param_2)
 * Address ranges: 004121d8-0041220a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004121d8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == param_1[3]) {
    (**(code **)*param_1)();
  }
  *(int *)(param_1[1] + iVar1 * 4) = param_2;
  param_1[2] = param_1[2] + 1;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  return iVar1;
}

