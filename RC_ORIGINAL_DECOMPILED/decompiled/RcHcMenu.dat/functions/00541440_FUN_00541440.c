/*
 * FUN_00541440 at 00541440
 * int * __register FUN_00541440(int * param_1, char param_2, int * param_3)
 * Address ranges: 00541440-00541553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00541440(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_004efb30(param_1,'\0',param_3);
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  (**(code **)(*param_1 + 0xdc))();
  (**(code **)(*(int *)param_1[0x9f] + 0x60))((int *)param_1[0x9f],param_1);
  FUN_00541df0((int)param_1,'\0',extraout_ECX_00);
  FUN_00541e9c((int)param_1,'\0');
  param_1[0x8d] = 8;
  FUN_00403db0(param_1 + 0x97);
  FUN_00404e28((VARIANT *)(param_1 + 0x98),(VARIANTARG *)PTR_DAT_00572140);
  *(undefined1 *)((int)param_1 + 0x239) = 0;
  FUN_00438ac8(param_1[0xa0],'\x01');
  FUN_00438ac8(param_1[0xa0],'\0');
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0x8f] = 0x800000;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 3;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

