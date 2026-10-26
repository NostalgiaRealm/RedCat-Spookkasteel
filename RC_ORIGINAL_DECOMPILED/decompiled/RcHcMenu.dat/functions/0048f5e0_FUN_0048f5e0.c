/*
 * FUN_0048f5e0 at 0048f5e0
 * int * __register FUN_0048f5e0(int * param_1, char param_2, int param_3)
 * Address ranges: 0048f5e0-0048f632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048f5e0(int *param_1,char param_2,int param_3)

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
  FUN_0048f0f8(param_1,'\0',(int)&PTR_FUN_0048e468);
  param_1[9] = param_3;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

