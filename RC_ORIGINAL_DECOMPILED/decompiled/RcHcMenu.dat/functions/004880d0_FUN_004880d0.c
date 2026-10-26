/*
 * FUN_004880d0 at 004880d0
 * int * __register FUN_004880d0(int * param_1, char param_2, int param_3)
 * Address ranges: 004880d0-0048810b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004880d0(int *param_1,char param_2,int param_3)

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
  FUN_0046e724(param_1,'\0',param_3);
  param_1[7] = param_3;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

