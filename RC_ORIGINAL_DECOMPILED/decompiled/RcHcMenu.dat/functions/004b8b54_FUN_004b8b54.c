/*
 * FUN_004b8b54 at 004b8b54
 * undefined __register FUN_004b8b54(ULONG param_1, VARIANTARG * param_2, undefined4 param_3, VARIANTARG * param_4, VARIANTARG * param_5)
 * Address ranges: 004b8b54-004b8c29;004b8c78-004b8cb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b8b54(ULONG param_1,VARIANTARG *param_2,undefined4 param_3,VARIANTARG *param_4,
                 VARIANTARG *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  ULONG *in_FS_OFFSET;
  ULONG UVar3;
  _union_2683 local_5c;
  _union_2683 local_4c;
  _union_2683 local_3c;
  undefined4 local_2c [3];
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  ULONG local_8;
  
  local_2c[2] = &stack0xfffffffc;
  local_14 = (undefined4 *)0xa;
  do {
    local_c = 0;
    local_14 = (undefined4 *)((int)local_14 + -1);
  } while (local_14 != (undefined4 *)0x0);
  LOCK();
  UNLOCK();
  local_2c[1] = &LAB_004b8cb6;
  local_2c[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)local_2c;
  local_3c._12_4_ = 0x4b8b8d;
  local_8 = param_1;
  FUN_004b73dc(param_2,(VARIANT *)local_2c,&local_c);
  local_3c._12_4_ = 0x4b8b9a;
  FUN_004b73dc((VARIANTARG *)0x0,(VARIANT *)&local_3c.n2,&local_10);
  local_3c._12_4_ = 0x4b8ba8;
  FUN_004b73dc(param_5,(VARIANT *)&local_4c.n2,&local_14);
  local_3c._12_4_ = 0x4b8bb6;
  FUN_004b73dc(param_4,(VARIANT *)&local_5c.n2,(undefined4 *)&stack0xffffffe8);
  local_3c._12_4_ = 0x4b8bbb;
  FUN_004b6e60();
  local_3c._8_4_ = &LAB_004b8c2a;
  local_3c.decVal.Hi32 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_3c.n2.wReserved2;
  local_3c._0_4_ = 0x4b8bd1;
  local_3c._12_4_ = &stack0xfffffffc;
  local_3c._0_4_ = FUN_00406aa0((int *)&stack0xffffffe4);
  local_4c._12_4_ = unaff_EBX[3];
  local_4c._8_4_ = unaff_EBX[2];
  local_4c.decVal.Hi32 = unaff_EBX[1];
  local_4c._0_4_ = *unaff_EBX;
  local_5c._12_4_ = local_14[3];
  local_5c._8_4_ = local_14[2];
  local_5c.decVal.Hi32 = local_14[1];
  local_5c._0_4_ = *local_14;
  piVar1 = *(int **)(local_8 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x68))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = (ULONG)piVar1;
  UVar3 = local_8;
  FUN_004b70d4((int *)&PTR_FUN_004b6dc4,'\x01',unaff_ESI,local_8);
  *in_FS_OFFSET = UVar3;
  FUN_00404878((VARIANTARG *)&local_5c.n2,"\f\nOleVariantp\x11@",4);
  FUN_00406aa0((int *)&stack0xffffffe4);
  return;
}

