/*
 * FUN_004f6978 at 004f6978
 * int * __register FUN_004f6978(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f6978-004f69d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f6978(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[4] = 0x32;
  param_1[6] = 10000;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  param_1[8] = -1;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  FUN_00412c18(param_1,'\0',param_3);
  FUN_004f6a78(param_1,extraout_EDX,extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

