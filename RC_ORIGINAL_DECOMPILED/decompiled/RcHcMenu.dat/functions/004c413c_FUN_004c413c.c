/*
 * FUN_004c413c at 004c413c
 * undefined __register FUN_004c413c(undefined4 param_1)
 * Address ranges: 004c413c-004c41d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c413c(undefined4 param_1)

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
  _union_2683 local_24;
  int local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_24._0_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._8_4_ = 0;
  local_24._12_4_ = 0;
  puStack_2c = &LAB_004c41f1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4c4166;
  local_8 = param_1;
  local_14 = FUN_004bcdbc();
  local_10 = (int *)0x0;
  puStack_38 = &LAB_004c41d4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  iVar2 = FUN_004b7790(local_14);
  sVar1 = FUN_004b74a4(iVar2);
  iVar2 = sVar1 + -1;
  if (SBORROW4((int)sVar1,1)) {
    thunk_FUN_00402874(CONCAT22(extraout_var,sVar1));
    iVar2 = extraout_EDX;
  }
  FUN_004053dc((VARIANTARG *)&local_24.n2,iVar2);
  iVar2 = FUN_004b7790(local_14);
  local_10 = (int *)FUN_004b7ce0(iVar2,(VARIANTARG *)&local_24.n2);
  local_c = FUN_004b7b68((int)local_10);
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004c41db;
  puStack_38 = (undefined1 *)0x4c41d3;
  FUN_00403094(local_10);
  return;
}

