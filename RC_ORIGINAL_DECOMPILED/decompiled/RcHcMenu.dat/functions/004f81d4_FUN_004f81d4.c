/*
 * FUN_004f81d4 at 004f81d4
 * int * __register FUN_004f81d4(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f81d4-004f826f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f81d4(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  FUN_0042c4e4(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 2;
  FUN_0042c8c8((int)param_1,'\x01');
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  FUN_00431f78(param_1,100);
  FUN_00431f98(param_1,100);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

