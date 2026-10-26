/*
 * FUN_005167c0 at 005167c0
 * int * __register FUN_005167c0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 005167c0-00516802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005167c0(int *param_1,char param_2,undefined4 param_3)

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
  FUN_00516860((int)param_1,(HKEY)0x80000001);
  param_1[6] = 0xf003f;
  *(undefined1 *)(param_1 + 3) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

