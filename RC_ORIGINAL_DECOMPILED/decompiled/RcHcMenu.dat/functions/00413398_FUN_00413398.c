/*
 * FUN_00413398 at 00413398
 * int * __register FUN_00413398(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 00413398-004133d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00413398(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[6] = param_3;
  FUN_00412dfc(param_1,'\0',param_4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

