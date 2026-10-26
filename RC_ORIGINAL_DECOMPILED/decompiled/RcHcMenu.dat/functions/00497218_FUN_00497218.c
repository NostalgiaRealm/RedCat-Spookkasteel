/*
 * FUN_00497218 at 00497218
 * int * __register FUN_00497218(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00497218-00497264
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00497218(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    cVar1 = extraout_DL;
  }
  FUN_0045dac8(param_1,'\0',5);
  *(undefined1 *)(param_1 + 6) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

