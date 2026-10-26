/*
 * FUN_0056bd7c at 0056bd7c
 * int * __register FUN_0056bd7c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0056bd7c-0056bdd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0056bd7c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  FUN_00449cd0(param_1,'\0',param_3);
  FUN_0054d628(param_1);
  (**(code **)(*param_1 + 0xe0))();
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

