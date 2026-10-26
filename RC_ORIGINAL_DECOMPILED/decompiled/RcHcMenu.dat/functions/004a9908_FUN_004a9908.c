/*
 * FUN_004a9908 at 004a9908
 * int * __register FUN_004a9908(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a9908-004a9948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a9908(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  FUN_004a9b20(DAT_00571978,(int)param_1);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

