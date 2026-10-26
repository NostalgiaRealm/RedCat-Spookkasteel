/*
 * FUN_004e2964 at 004e2964
 * int * __register FUN_004e2964(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 004e2964-004e29de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004e2964(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  if (param_3 == 0) {
    FUN_00403d94("Assertion failure");
  }
  FUN_004e2430(param_1,'\0',param_4);
  param_1[7] = param_3;
  param_1[8] = *(int *)(param_1[7] + 4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

