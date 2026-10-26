/*
 * FUN_00468090 at 00468090
 * int * __register FUN_00468090(int * param_1, char param_2, int param_3)
 * Address ranges: 00468090-004680d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00468090(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  param_1[0xc] = param_3;
  FUN_00403064(param_1,'\0',param_3);
  param_1[0xb] = (int)param_1;
  param_1[10] = (int)&LAB_004681a8;
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

