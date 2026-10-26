/*
 * FUN_00422e00 at 00422e00
 * int * __register FUN_00422e00(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00422e00-00422e34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00422e00(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar1 = extraout_DL;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

