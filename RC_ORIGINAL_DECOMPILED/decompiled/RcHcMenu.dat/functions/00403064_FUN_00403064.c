/*
 * FUN_00403064 at 00403064
 * undefined __register FUN_00403064(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00403064-00403083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403064(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    cVar1 = extraout_DL;
  }
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}

