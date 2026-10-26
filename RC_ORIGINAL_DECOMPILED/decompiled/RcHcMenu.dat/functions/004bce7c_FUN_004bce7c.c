/*
 * FUN_004bce7c at 004bce7c
 * int * __register FUN_004bce7c(int * param_1, char param_2, int * param_3, undefined1 param_4)
 * Address ranges: 004bce7c-004bceff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004bce7c(int *param_1,char param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  int *extraout_ECX;
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
  FUN_004d4f1c(param_1,'\0',(int)param_3,param_4);
  iVar1 = FUN_00403224(param_3,(int)&PTR_FUN_004bcbdc);
  param_1[0xc] = *(int *)(iVar1 + 0x50);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

