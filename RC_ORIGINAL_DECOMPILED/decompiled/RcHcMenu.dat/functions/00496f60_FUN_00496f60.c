/*
 * FUN_00496f60 at 00496f60
 * int * __register FUN_00496f60(int * param_1, char param_2, int param_3, byte param_4, undefined4 * param_5)
 * Address ranges: 00496f60-0049700f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00496f60(int *param_1,char param_2,int param_3,byte param_4,undefined4 *param_5)

{
  int *piVar1;
  int extraout_ECX;
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
  FUN_0045b418(param_1,'\0',param_3);
  if ((param_4 & 2) == 0) {
    param_4 = param_4 | 4;
  }
  param_1[1] = param_3;
  FUN_00403e04(param_1 + 3,param_5);
  *(byte *)(param_1 + 2) = param_4;
  piVar1 = FUN_0048f5e0((int *)&PTR_FUN_0048e4d4,'\x01',(int)param_1);
  param_1[6] = (int)piVar1;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar1;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_01);
  param_1[5] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

