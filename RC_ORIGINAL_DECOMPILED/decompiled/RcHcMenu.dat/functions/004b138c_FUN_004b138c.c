/*
 * FUN_004b138c at 004b138c
 * int * __register FUN_004b138c(int * param_1, char param_2, int param_3, undefined1 param_4)
 * Address ranges: 004b138c-004b140e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b138c(int *param_1,char param_2,int param_3,undefined1 param_4)

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
  FUN_0045b418(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 5) = param_4;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[1] = 0;
  if (param_1[3] < 1) {
    param_1[3] = 10;
  }
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

