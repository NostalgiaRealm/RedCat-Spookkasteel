/*
 * FUN_00454b58 at 00454b58
 * int * __register FUN_00454b58(int * param_1, char param_2, int * param_3)
 * Address ranges: 00454b58-00454be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00454b58(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  piVar1 = FUN_0041ede8((int *)&PTR_FUN_0041aa00,'\x01',extraout_ECX_00);
  param_1[0x4a] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00454ef4;
  piVar1[7] = (int)param_1;
  iVar2 = FUN_00403288(param_1,CONCAT22(extraout_var,0xffcd));
  piVar1[6] = iVar2;
  FUN_00431f98(param_1,0x69);
  FUN_00431f78(param_1,0x69);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

