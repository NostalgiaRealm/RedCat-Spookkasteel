/*
 * FUN_0041ec10 at 0041ec10
 * int * __register FUN_0041ec10(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0041ec10-0041ec8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0041ec10(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  param_1[1] = iVar1;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  FUN_0041ecbc((int)param_1,CONCAT22(extraout_var,3),(int)&PTR_FUN_0041ab68);
  FUN_0041ecbc((int)param_1,CONCAT22(extraout_var_00,0xe),(int)&PTR_FUN_0041ab68);
  FUN_0041ecbc((int)param_1,CONCAT22(extraout_var_01,2),(int)&PTR_FUN_0041acd8);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

