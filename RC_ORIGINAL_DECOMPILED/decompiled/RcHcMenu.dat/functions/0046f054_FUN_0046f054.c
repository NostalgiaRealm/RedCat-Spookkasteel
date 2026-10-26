/*
 * FUN_0046f054 at 0046f054
 * int * __register FUN_0046f054(int * param_1, char param_2, int param_3)
 * Address ranges: 0046f054-0046f091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046f054(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  param_1[6] = param_3;
  FUN_00412dfc(param_1,'\0',(int)&PTR_FUN_0046627c);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

