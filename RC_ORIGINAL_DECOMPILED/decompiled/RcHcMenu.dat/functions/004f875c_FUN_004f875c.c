/*
 * FUN_004f875c at 004f875c
 * int * __register FUN_004f875c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f875c-004f88ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f875c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_004ef330(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xfffffffd;
  (**(code **)(*param_1 + 0xb8))();
  piVar2 = FUN_004f6c9c((int *)&PTR_FUN_004f3dfc,'\x01',param_1);
  param_1[0x80] = (int)piVar2;
  (**(code **)(*(int *)param_1[0x80] + 0x60))((int *)param_1[0x80],param_1);
  (**(code **)(*(int *)param_1[0x82] + 0x60))((int *)param_1[0x82],param_1);
  FUN_00431d2c((int *)param_1[0x82],CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  FUN_00438bb4(param_1[0x82],'\0');
  FUN_0042c8f8(param_1[0x82],'\0');
  *(undefined1 *)(param_1 + 0x81) = 1;
  iVar1 = param_1[0x80];
  *(int **)(iVar1 + 0x22c) = param_1;
  *(undefined4 *)(iVar1 + 0x228) = *(undefined4 *)(*param_1 + 0xbc);
  iVar1 = param_1[0x80];
  *(int **)(iVar1 + 0x23c) = param_1;
  *(undefined4 *)(iVar1 + 0x238) = *(undefined4 *)(*param_1 + 200);
  iVar1 = param_1[0x80];
  *(int **)(iVar1 + 0x234) = param_1;
  *(undefined4 *)(iVar1 + 0x230) = *(undefined4 *)(*param_1 + 0xc4);
  iVar1 = param_1[0x80];
  *(int **)(iVar1 + 0x244) = param_1;
  *(undefined4 *)(iVar1 + 0x240) = *(undefined4 *)(*param_1 + 0xcc);
  FUN_00431f78(param_1,100);
  FUN_00431f98(param_1,100);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

