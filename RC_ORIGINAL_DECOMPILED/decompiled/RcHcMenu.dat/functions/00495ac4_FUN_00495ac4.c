/*
 * FUN_00495ac4 at 00495ac4
 * int * __register FUN_00495ac4(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 00495ac4-00495b3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00495ac4(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
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
  FUN_0045f6c0(param_1,'\0',param_3);
  param_1[6] = param_4;
  FUN_00404e28((VARIANT *)(param_1 + 8),(VARIANTARG *)PTR_DAT_00572140);
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x19) & 0x20) == 0)) {
    (**(code **)(*param_1 + 0x68))();
  }
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

