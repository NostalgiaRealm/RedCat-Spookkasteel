/*
 * FUN_004c4cbc at 004c4cbc
 * undefined __register FUN_004c4cbc(undefined4 param_1, int * param_2)
 * Address ranges: 004c4cbc-004c4d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c4cbc(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined2 extraout_var;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  LPCWSTR local_24;
  _union_2683 local_20;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_20._12_4_ = 0;
  local_20._8_4_ = 0;
  local_20.decVal.Hi32 = 0;
  local_20._0_4_ = 0;
  local_24 = (LPCWSTR)0x0;
  puStack_2c = &LAB_004c4d98;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = (int *)0x0;
  puStack_34 = (undefined1 *)0x4c4cea;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  puStack_38 = &LAB_004c4d73;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  iVar2 = FUN_004bcdbc();
  iVar2 = FUN_004b7790(iVar2);
  sVar1 = FUN_004b74a4(iVar2);
  if (0 < sVar1) {
    iVar2 = FUN_004bcdbc();
    iVar2 = FUN_004b7790(iVar2);
    sVar1 = FUN_004b74a4(iVar2);
    iVar2 = sVar1 + -1;
    if (SBORROW4((int)sVar1,1)) {
      thunk_FUN_00402874(CONCAT22(extraout_var,sVar1));
      iVar2 = extraout_EDX;
    }
    FUN_004053dc((VARIANTARG *)&local_20.n2,iVar2);
    iVar2 = FUN_004bcdbc();
    iVar2 = FUN_004b7790(iVar2);
    local_10 = (int *)FUN_004b7ce0(iVar2,(VARIANTARG *)&local_20.n2);
    FUN_004b7c24((int)local_10,&local_24);
    FUN_00403ff8(local_c,local_24);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004c4d7a;
  puStack_38 = (undefined1 *)0x4c4d72;
  FUN_00403094(local_10);
  return;
}

