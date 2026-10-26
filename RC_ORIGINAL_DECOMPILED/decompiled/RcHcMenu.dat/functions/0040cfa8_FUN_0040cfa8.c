/*
 * FUN_0040cfa8 at 0040cfa8
 * int * __register FUN_0040cfa8(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 0040cfa8-0040cfe1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0040cfa8(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
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
  FUN_00406a48(param_3,param_1 + 1);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

