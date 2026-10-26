/*
 * FUN_0046efb8 at 0046efb8
 * int * __register FUN_0046efb8(int * param_1, char param_2, int param_3)
 * Address ranges: 0046efb8-0046eff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046efb8(int *param_1,char param_2,int param_3)

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
  FUN_00412dfc(param_1,'\0',(int)&PTR_FUN_00466014);
  param_1[6] = param_3;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

