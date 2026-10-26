/*
 * FUN_004b5b0c at 004b5b0c
 * int * __register FUN_004b5b0c(int * param_1, char param_2, int param_3, int param_4, char param_5)
 * Address ranges: 004b5b0c-004b5b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b5b0c(int *param_1,char param_2,int param_3,int param_4,char param_5)

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
  if (param_5 != '\x01') {
    FUN_00403d94("The parameter [aOwnObjects] must be TRUE.");
  }
  FUN_004b138c(param_1,'\0',param_3,param_5);
  param_1[6] = param_4;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

