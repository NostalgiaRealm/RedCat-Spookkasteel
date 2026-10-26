/*
 * FUN_004493c8 at 004493c8
 * int * __register FUN_004493c8(int * param_1, char param_2, int * param_3)
 * Address ranges: 004493c8-0044942f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004493c8(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_004348a0(param_1,'\0',param_3);
  piVar1 = FUN_00448844((int *)&PTR_FUN_00445c10,'\x01',(int)param_1,0);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_00448844((int *)&PTR_FUN_00445c10,'\x01',(int)param_1,1);
  param_1[0x7d] = (int)piVar1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

