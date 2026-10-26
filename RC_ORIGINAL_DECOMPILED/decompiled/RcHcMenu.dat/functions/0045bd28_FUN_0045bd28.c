/*
 * FUN_0045bd28 at 0045bd28
 * int * __register FUN_0045bd28(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0045bd28-0045bd8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0045bd28(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0045b418(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[2] = (int)piVar1;
  FUN_00403db0(param_1 + 3);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

