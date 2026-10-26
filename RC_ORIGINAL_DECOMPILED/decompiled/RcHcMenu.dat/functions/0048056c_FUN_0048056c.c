/*
 * FUN_0048056c at 0048056c
 * int * __register FUN_0048056c(int * param_1, char param_2, int * param_3)
 * Address ranges: 0048056c-004805ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048056c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  FUN_00482660(param_1,(int)param_3,'\0');
  FUN_00418f00(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[10] = iVar1;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_01);
  param_1[0xb] = iVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x42) = 1;
  FUN_00480388(DAT_0057394c,(int)param_1);
  param_1[0x18] = 0;
  param_1[9] = 0;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

