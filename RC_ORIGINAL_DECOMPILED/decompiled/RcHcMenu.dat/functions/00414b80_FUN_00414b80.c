/*
 * FUN_00414b80 at 00414b80
 * undefined __register FUN_00414b80(int * param_1, int param_2)
 * Address ranges: 00414b80-00414ba4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414b80(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8);
  FUN_00414ad8((int)param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}

