/*
 * FUN_00454854 at 00454854
 * int * __register FUN_00454854(int * param_1, char param_2, int * param_3)
 * Address ranges: 00454854-004548f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00454854(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  FUN_00431f78(param_1,0x41);
  FUN_00431f98(param_1,0x41);
  piVar1 = FUN_0041bea0((int *)&PTR_FUN_0041a5d0,'\x01',extraout_ECX_00);
  param_1[0x4a] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00454a54;
  piVar1 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX_01);
  param_1[0x4b] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00454a54;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

