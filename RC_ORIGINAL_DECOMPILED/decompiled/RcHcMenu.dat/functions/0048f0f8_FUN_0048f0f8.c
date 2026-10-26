/*
 * FUN_0048f0f8 at 0048f0f8
 * int * __register FUN_0048f0f8(int * param_1, char param_2, int param_3)
 * Address ranges: 0048f0f8-0048f158
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048f0f8(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0048ea9c(param_1,'\0',param_3);
  param_1[7] = param_3;
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[8] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

