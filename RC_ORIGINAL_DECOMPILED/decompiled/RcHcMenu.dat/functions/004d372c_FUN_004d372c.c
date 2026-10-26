/*
 * FUN_004d372c at 004d372c
 * undefined __register FUN_004d372c(int * param_1, int * param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 004d372c-004d385f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d372c(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  byte *pbVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  _union_2683 local_74;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  _union_2683 *local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34 [28];
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_84 = &stack0xfffffffc;
  puStack_90 = &stack0xfffffffc;
  local_74._0_4_ = 0;
  local_74.decVal.Hi32 = 0;
  local_74._8_4_ = 0;
  local_74._12_4_ = 0;
  pbVar3 = local_34;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 4;
  }
  puStack_88 = &LAB_004d387d;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_18 = (int *)0x0;
  puStack_94 = &LAB_004d3860;
  uStack_98 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_004cf3c8(param_1,'\0');
  local_18 = FUN_004cf39c(local_8,extraout_EDX,extraout_ECX);
  iVar2 = FUN_00494858(local_10);
  FUN_004b49b8(local_18,iVar2);
  local_3c = FUN_00494c5c(local_10,local_34);
  local_38 = FUN_004949bc(local_10);
  FUN_004b4bb4(local_18,&local_3c,1);
  local_64 = *(undefined4 *)PTR_DAT_00572470;
  local_60 = 7;
  local_5c = FUN_00494c5c(local_10,local_34);
  local_58 = 7;
  local_54 = *(undefined4 *)PTR_DAT_0057260c;
  local_50 = 7;
  piVar1 = (int *)FUN_004949bc(local_c);
  FUN_00496550(piVar1,(VARIANT *)&local_74.n2);
  local_4c = &local_74;
  local_48 = 0xd;
  local_44 = *(undefined4 *)PTR_DAT_005725b8;
  local_40 = 7;
  FUN_004b4e04((int)local_18,&local_64,4);
  FUN_004b4f0c(local_18,0);
  FUN_004d69fc(local_14,(int)local_18);
  *in_FS_OFFSET = uStack_98;
  puStack_90 = &LAB_004d3867;
  puStack_94 = (undefined1 *)0x4d385f;
  FUN_00403094(local_18);
  return;
}

