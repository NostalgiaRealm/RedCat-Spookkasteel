/*
 * FUN_00544750 at 00544750
 * undefined __register FUN_00544750(int * param_1, int param_2, int param_3, undefined1 param_4, int * param_5)
 * Address ranges: 00544750-00544924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00544750(int *param_1,int param_2,int param_3,undefined1 param_4,int *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  _union_2683 local_6c;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  _union_2683 *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34 [7];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar5 = 0;
  puStack_7c = &stack0xfffffffc;
  local_6c._0_4_ = 0;
  local_6c.decVal.Hi32 = 0;
  local_6c._8_4_ = 0;
  local_6c._12_4_ = 0;
  piVar2 = local_34;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = *param_5;
    param_5 = param_5 + 1;
    piVar2 = piVar2 + 1;
  }
  puStack_80 = &LAB_00544942;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_88 = (undefined1 *)0x5447a0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404e28((VARIANT *)(param_1 + 0xce),(VARIANTARG *)PTR_DAT_00572140);
  local_8[0xc2] = local_c;
  piVar2 = local_34;
  piVar4 = local_8 + 0xc5;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar2;
    piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  local_8[0xd2] = local_10;
  *(undefined1 *)(local_8 + 0xc3) = param_4;
  local_14 = local_8[0xcb];
  puStack_88 = (undefined1 *)0x5447f1;
  iVar3 = FUN_00494858((int *)local_8[0xd2]);
  puStack_88 = (undefined1 *)0x5447fc;
  local_18 = (int *)FUN_00490354(*(int **)(iVar3 + 8),local_14);
  local_8[0xcc] = 0;
  local_8[0xc4] = 0;
  puStack_8c = &LAB_00544925;
  uStack_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_90;
  puStack_88 = &stack0xfffffffc;
  iVar3 = FUN_0049206c(local_18);
  local_8[0xcc] = iVar3;
  iVar3 = local_8[0xc2];
  uVar1 = FUN_0049278c(local_18);
  piVar2 = FUN_00547230((int *)&LAB_0053b55c,'\x01',uVar1,iVar3);
  local_8[0xc4] = (int)piVar2;
  local_5c = *(undefined4 *)PTR_DAT_00572470;
  local_58 = 7;
  local_54 = FUN_00494c5c((int *)local_8[0xcc],(byte *)(local_8 + 0xc5));
  local_50 = 7;
  local_4c = *(undefined4 *)PTR_DAT_0057260c;
  local_48 = 7;
  piVar2 = (int *)FUN_004949bc((int *)local_8[0xd2]);
  FUN_00496550(piVar2,(VARIANT *)&local_6c.n2);
  local_44 = &local_6c;
  local_40 = 0xd;
  local_3c = *(undefined4 *)PTR_DAT_005725b8;
  local_38 = 7;
  puVar6 = &local_5c;
  piVar2 = (int *)FUN_00549bb8(local_8[0xc4]);
  FUN_004b5ce8(piVar2,puVar6,4);
  FUN_00528810((int *)local_8[0xc1],(int *)local_8[0xc4]);
  FUN_00549a28((int *)local_8[0xc4]);
  FUN_00545100(local_8);
  FUN_005445a4((int)local_8);
  *in_FS_OFFSET = uStack_90;
  return;
}

