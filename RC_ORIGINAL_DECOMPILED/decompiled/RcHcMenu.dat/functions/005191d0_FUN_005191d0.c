/*
 * FUN_005191d0 at 005191d0
 * int * __register FUN_005191d0(int * param_1, char param_2, int * param_3)
 * Address ranges: 005191d0-0051920b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005191d0(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_0042c4e4(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x239) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

