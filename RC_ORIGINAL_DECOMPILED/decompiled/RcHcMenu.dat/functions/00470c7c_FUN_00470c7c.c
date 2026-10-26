/*
 * FUN_00470c7c at 00470c7c
 * int * __register FUN_00470c7c(int * param_1, char param_2, int * param_3)
 * Address ranges: 00470c7c-00470d65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00470c7c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  piVar1 = FUN_00467d68((int *)&PTR_FUN_00462204,'\x01',param_1);
  param_1[0xb] = (int)piVar1;
  piVar1 = FUN_00468090((int *)&PTR_FUN_004625dc,'\x01',(int)param_1);
  param_1[0xc] = (int)piVar1;
  piVar1 = FUN_0046858c((int *)&DAT_00462844,'\x01',(int)param_1);
  param_1[9] = (int)piVar1;
  piVar1 = FUN_00468090((int *)&PTR_FUN_004626e8,'\x01',(int)param_1);
  param_1[0xd] = (int)piVar1;
  iVar2 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[0xe] = iVar2;
  *(undefined1 *)((int)param_1 + 0x97) = 1;
  piVar1 = FUN_0046efb8((int *)&PTR_FUN_00466180,'\x01',(int)param_1);
  param_1[0x1d] = (int)piVar1;
  iVar2 = FUN_00402fdc(param_1);
  param_1[0x20] = iVar2;
  piVar1 = FUN_0046858c((int *)&DAT_00462844,'\x01',(int)param_1);
  param_1[10] = (int)piVar1;
  *(undefined1 *)(piVar1 + 6) = 0x10;
  param_1[0x22] = 1;
  (**(code **)(*param_1 + 0x90))();
  FUN_0040e2e8();
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

