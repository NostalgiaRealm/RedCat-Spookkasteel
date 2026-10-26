/*
 * FUN_0050cee0 at 0050cee0
 * int * __register FUN_0050cee0(int * param_1, char param_2, int * param_3)
 * Address ranges: 0050cee0-0050cfa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050cee0(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_0050a24c(param_1,'\0',param_3);
  piVar1 = FUN_004f1af0((int *)&PTR_FUN_0050be90,'\x01',(int)param_1);
  param_1[0xa0] = (int)piVar1;
  piVar1 = FUN_0045b418((int *)&DAT_004f06c0,'\x01',extraout_ECX_00);
  param_1[0xa1] = (int)piVar1;
  param_1[0x99] = param_1[0xa0];
  param_1[0x98] = (int)&LAB_004f21c0;
  param_1[0x67] = param_1[0xa0];
  param_1[0x66] = (int)&LAB_004f20d0;
  param_1[0x69] = param_1[0xa0];
  param_1[0x68] = (int)&LAB_004f1e4c;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

