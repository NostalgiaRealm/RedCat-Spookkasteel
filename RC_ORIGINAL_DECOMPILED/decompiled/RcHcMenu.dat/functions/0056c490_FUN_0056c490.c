/*
 * FUN_0056c490 at 0056c490
 * undefined __register FUN_0056c490(undefined4 param_1, uint * param_2, int param_3, char param_4)
 * Address ranges: 0056c490-0056c68d;0056c69f-0056c6c2;0056c6d2-0056c6e7;0056c6ef-0056c730
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c490(undefined4 param_1,uint *param_2,int param_3,char param_4)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_7c;
  undefined *puStackY_78;
  uint **ppuVar2;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  byte *local_4c;
  uint *local_48;
  byte *local_44;
  uint *local_40;
  uint *local_3c;
  undefined1 local_38;
  byte *local_34;
  uint *local_30;
  uint *local_2c;
  undefined1 local_28;
  uint *local_24;
  undefined1 local_20;
  byte *local_1c;
  uint *local_18;
  int *local_14;
  int local_10;
  uint *local_c;
  undefined4 local_8;
  
  local_48 = (uint *)0x0;
  local_4c = (byte *)0x0;
  local_40 = (uint *)0x0;
  local_44 = (byte *)0x0;
  local_30 = (uint *)0x0;
  local_34 = (byte *)0x0;
  local_18 = (uint *)0x0;
  local_1c = (byte *)0x0;
  puStack_5c = (undefined1 *)0x56c4c4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_5c = (undefined1 *)0x56c4cc;
  FUN_004041e4(local_10);
  puStack_60 = &LAB_0056c731;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_68 = (undefined1 *)0x56c4e6;
  puStack_5c = &stack0xfffffffc;
  FUN_004511e0(*(int *)PTR_DAT_005723fc,extraout_EDX,extraout_ECX);
  if (*(char *)(*(int *)PTR_DAT_005723fc + 0x8c) != '\0') {
    *in_FS_OFFSET = uStack_64;
    puStack_5c = &LAB_0056c738;
    puStack_60 = (undefined1 *)0x56c709;
    FUN_00403dd4((int *)&local_4c,4);
    puStack_60 = (undefined1 *)0x56c716;
    FUN_00403dd4((int *)&local_34,2);
    puStack_60 = (undefined1 *)0x56c723;
    FUN_00403dd4((int *)&local_1c,2);
    puStack_60 = (undefined1 *)0x56c730;
    FUN_00403dd4(&local_10,2);
    return;
  }
  puStack_68 = (undefined1 *)0x56c510;
  local_14 = (int *)FUN_00449cd0((int *)&PTR_FUN_0056c01c,'\x01',
                                 *(undefined4 *)(*(int *)PTR_DAT_005723fc + 0x38));
  puStack_6c = &LAB_0056c6e8;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_68 = &stack0xfffffffc;
  FUN_00432744((int)local_14,local_c);
  ppuVar2 = &local_18;
  puStackY_78 = (undefined *)0x56c53d;
  FUN_00406a48(&PTR_DAT_0056c2b8,(int *)&local_1c);
  local_2c = local_c;
  local_28 = 0xb;
  local_24 = local_c;
  local_20 = 0xb;
  puStackY_78 = (undefined *)0x56c563;
  FUN_0040a894(local_1c,&local_2c,1,(int *)ppuVar2);
  FUN_00432744(local_14[0xb4],local_18);
  (**(code **)(**(int **)(local_14[0xb9] + 0x208) + 0x34))
            (*(int **)(local_14[0xb9] + 0x208),local_10);
  ppuVar2 = &local_30;
  puStackY_78 = (undefined *)0x56c59c;
  FUN_00406a48(&PTR_DAT_0056c2c0,(int *)&local_34);
  local_3c = local_c;
  local_38 = 0xb;
  puStackY_78 = (undefined *)0x56c5b5;
  FUN_0040a894(local_34,&local_3c,0,(int *)ppuVar2);
  FUN_00432744(local_14[0xbb],local_30);
  ppuVar2 = &local_40;
  puStackY_78 = (undefined *)0x56c5d7;
  FUN_00406a48(&PTR_DAT_0056c2c8,(int *)&local_44);
  local_3c = local_c;
  local_38 = 0xb;
  puStackY_78 = (undefined *)0x56c5f0;
  FUN_0040a894(local_44,&local_3c,0,(int *)ppuVar2);
  FUN_00432744(local_14[0xbc],local_40);
  ppuVar2 = &local_48;
  puStackY_78 = (undefined *)0x56c612;
  FUN_00406a48(&PTR_DAT_0056c2d0,(int *)&local_4c);
  local_3c = local_c;
  local_38 = 0xb;
  puStackY_78 = (undefined *)0x56c62b;
  FUN_0040a894(local_4c,&local_3c,0,(int *)ppuVar2);
  FUN_00432744(local_14[0xbd],local_48);
  if (param_4 == '\x01') {
    FUN_00432bec((int *)local_14[0xbd],extraout_EDX_00,extraout_ECX_00);
  }
  iVar1 = (**(code **)(*local_14 + 0xd8))();
  if (iVar1 == 6) {
    puStackY_78 = &DAT_0056c68e;
    uStackY_7c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_7c;
    FUN_0056c2e0();
    FUN_00451440();
    *in_FS_OFFSET = uStackY_7c;
  }
  else if (iVar1 == 7) {
    puStackY_78 = &DAT_0056c6c3;
    uStackY_7c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_7c;
    FUN_00451440();
    *in_FS_OFFSET = uStackY_7c;
  }
  *in_FS_OFFSET = uStack_70;
  puStack_68 = (undefined1 *)0x56c6ef;
  puStack_6c = (undefined1 *)0x56c6e7;
  FUN_00403094(local_14);
  return;
}

