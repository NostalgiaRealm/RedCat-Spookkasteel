/*
 * FUN_004c4da4 at 004c4da4
 * undefined __register FUN_004c4da4(int * param_1, undefined4 * param_2)
 * Address ranges: 004c4da4-004c4ffe;004c5006-004c509b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004c4da4(int *param_1,undefined4 *param_2)

{
  LPCWSTR *ppWVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  VARIANTARG local_184;
  LPCWSTR local_174;
  VARIANTARG local_170;
  undefined4 *local_160;
  LPCSTR local_15c;
  LPCWSTR local_158;
  int local_154;
  undefined4 *local_150;
  undefined1 local_14c;
  int local_148;
  byte local_144 [252];
  undefined4 uStackY_48;
  int local_44;
  LPCWSTR *local_40;
  undefined4 in_stack_ffffffc4;
  undefined4 uStack_30;
  _union_2683 local_2c;
  undefined1 *local_1c;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_14 = 0x2f;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_10 = (int *)0x0;
  local_1c = (undefined1 *)0x4c4dca;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  local_2c._12_4_ = &LAB_004c509c;
  local_2c._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c.n2 + 8;
  local_2c.decVal.Hi32 = 0x4c4de9;
  local_1c = &stack0xfffffffc;
  FUN_00413a08((int *)local_8[0x15],(undefined *)local_c,(int *)&local_1c);
  if (local_1c != (undefined1 *)0x0) {
    local_2c.decVal.Hi32 = 0x4c4e00;
    FUN_00413a08((int *)local_8[0x15],(undefined *)local_c,local_10);
    *in_FS_OFFSET = local_2c._8_4_;
    local_1c = &LAB_004c50a6;
    local_2c._12_4_ = 0x4c501e;
    FUN_00405bcc(&local_184);
    local_2c._12_4_ = 0x4c5029;
    FUN_00404474(&local_174);
    local_2c._12_4_ = 0x4c5034;
    FUN_00405bcc(&local_170);
    local_2c._12_4_ = 0x4c503f;
    FUN_00404474(&local_160);
    local_2c._12_4_ = 0x4c504a;
    FUN_00403db0((int *)&local_15c);
    local_2c._12_4_ = 0x4c5055;
    FUN_00404474(&local_158);
    local_2c._12_4_ = 0x4c5060;
    FUN_00403db0(&local_154);
    local_2c._12_4_ = 0x4c506b;
    FUN_00403db0(&local_148);
    local_2c._12_4_ = 0x4c5078;
    FUN_00403dd4(&local_44,2);
    local_2c._12_4_ = 0x4c508b;
    FUN_00404878((VARIANTARG *)&stack0xffffffc4,&DAT_00401108,2);
    local_2c._12_4_ = 0x4c5093;
    FUN_00403db0((int *)&local_1c);
    local_2c._12_4_ = 0x4c509b;
    FUN_00403db0((int *)&local_c);
    return;
  }
  local_14 = 0;
  local_2c._0_4_ = &LAB_004c4fff;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_2c.decVal.Hi32 = (ULONG)&stack0xfffffffc;
  iVar3 = FUN_004b8640(local_8[0x14]);
  FUN_004054ac((VARIANTARG *)&local_2c,local_c);
  local_14 = FUN_004b83e0(iVar3,(VARIANTARG *)&local_2c);
  iVar3 = 0;
  while( true ) {
    iVar4 = FUN_004b8020(local_14);
    FUN_004053dc((VARIANTARG *)&stack0xffffffc4,iVar3);
    iVar4 = FUN_004bbb74(iVar4,(VARIANTARG *)&stack0xffffffc4);
    sVar2 = FUN_004bb778(iVar4);
    if (sVar2 != 0) break;
    iVar4 = FUN_004b8020(local_14);
    sVar2 = FUN_004b74a4(iVar4);
    uVar5 = (int)sVar2 - 1;
    if (SBORROW4((int)sVar2,1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if ((int)uVar5 <= iVar3) break;
    bVar6 = SCARRY4(iVar3,1);
    iVar3 = iVar3 + 1;
    if (bVar6) {
      thunk_FUN_00402874(uVar5);
    }
  }
  iVar4 = FUN_004b8020(local_14);
  sVar2 = FUN_004b74a4(iVar4);
  uVar5 = (int)sVar2 - 1;
  if (SBORROW4((int)sVar2,1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if ((int)uVar5 < iVar3) {
    FUN_00402fe0(*local_8,local_144);
    FUN_00403fd4(&local_44,local_144);
    local_150 = local_c;
    local_14c = 0xb;
    local_40 = (LPCWSTR *)0x4c4f01;
    FUN_0040a894((byte *)"Primary index not found for table \'%s\'",&local_150,0,&local_148);
    local_40 = (LPCWSTR *)0x4c4f14;
    FUN_004040f0((int *)&local_40,3);
    ppWVar1 = local_40;
    local_40 = (LPCWSTR *)0x4c4f26;
    FUN_00403d94(ppWVar1);
    in_stack_ffffffc4 = local_148;
  }
  local_40 = (LPCWSTR *)0x4c4f39;
  FUN_0040407c((int *)&local_15c,local_c,(undefined4 *)&LAB_004c512c);
  local_40 = (LPCWSTR *)0x4c4f4a;
  FUN_004045b8((BSTR)&local_158,local_15c);
  local_40 = &local_158;
  local_44 = 0x4c4f59;
  local_44 = FUN_004b8020(local_14);
  uStackY_48 = 0x4c4f68;
  FUN_004053dc(&local_170,iVar3);
  iVar4 = local_44;
  local_44 = 0x4c4f74;
  iVar4 = FUN_004bbb74(iVar4,&local_170);
  local_44 = 0x4c4f7f;
  FUN_004bb4a8(iVar4,&local_160);
  ppWVar1 = local_40;
  local_40 = (LPCWSTR *)0x4c4f8b;
  FUN_004045d4((int *)ppWVar1,local_160);
  local_40 = (LPCWSTR *)0x4c4f9c;
  FUN_00403ff8(&local_154,local_158);
  local_40 = (LPCWSTR *)0x4c4fad;
  (**(code **)(*(int *)local_8[0x15] + 0x34))((int *)local_8[0x15],local_154);
  local_40 = (LPCWSTR *)0x4c4fb5;
  local_40 = (LPCWSTR *)FUN_004b8020(local_14);
  local_44 = 0x4c4fc4;
  FUN_004053dc(&local_184,iVar3);
  ppWVar1 = local_40;
  local_40 = (LPCWSTR *)0x4c4fd0;
  iVar3 = FUN_004bbb74((int)ppWVar1,&local_184);
  local_40 = (LPCWSTR *)0x4c4fdb;
  FUN_004bb4a8(iVar3,&local_174);
  local_40 = (LPCWSTR *)0x4c4fe9;
  FUN_00403ff8(local_10,local_174);
  *in_FS_OFFSET = in_stack_ffffffc4;
  FUN_0040e4b4(&local_14);
  return;
}

