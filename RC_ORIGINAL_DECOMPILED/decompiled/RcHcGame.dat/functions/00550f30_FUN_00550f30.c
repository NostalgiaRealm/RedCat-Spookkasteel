/*
 * FUN_00550f30 at 00550f30
 * undefined FUN_00550f30(void)
 * Address ranges: 00550f30-00551294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00550f30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_64 [4];
  char *local_60;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ded7;
  pvStack_c = ExceptionList;
  local_6c = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x32d);
  uVar2 = param_3;
  uVar1 = param_2;
  local_4 = 1;
  iVar4 = FUN_005a3150(local_34,param_3);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 2;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar6 = FUN_005ae390(local_44,s_CAdamSoundDefMgr__AddSoundDefFro_006a1cdc,puVar5);
  local_4._0_1_ = 3;
  FUN_005ab4a0();
  local_4._0_1_ = 4;
  local_10 = timeGetTime();
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940,uVar6);
  FUN_0051c180();
  FUN_00515ff0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    iVar4 = FUN_0049f950();
    puVar5 = *(undefined1 **)(iVar4 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(local_54,s_CAdamLoadUpdater_>>__s_00695190,puVar5);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar6);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  FUN_00552310(&local_74,uVar1,uVar2);
  local_4._0_1_ = 9;
  if (local_74 != 0) {
    pcVar10 = "";
    if (*(char **)(local_74 + 0x24) != (char *)0x0) {
      pcVar10 = *(char **)(local_74 + 0x24);
    }
    local_64[0] = (char)param_3;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)local_60 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        local_60 = local_60 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *local_60 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        local_60 = local_60 + 1;
      }
      FUN_00404190(uVar8);
    }
    local_4._0_1_ = 0xb;
    if (*(char *)(local_70 + 0x34) != '\0') {
      local_54[0] = (char)param_3;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 0xc;
      pcVar7 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x49,local_54);
      (*pcVar7)();
      local_4._0_1_ = 0xb;
      FUN_004040a0(1);
    }
    iVar4 = FUN_00553ac0(local_64,&param_3);
    if ((char)param_3 != '\0') {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xd;
      pcVar7 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b
                                    ,local_54);
      (*pcVar7)();
      local_4._0_1_ = 0xb;
      FUN_004040a0(1);
    }
    FUN_004fdb90(*(int *)(local_70 + 0x20) + iVar4 * 4,&local_74);
    local_4._0_1_ = 9;
    FUN_004040a0(1);
  }
  *param_1 = local_74;
  if (local_74 != 0) {
    *(int *)(local_74 + 0x14) = *(int *)(local_74 + 0x14) + 1;
  }
  local_6c = 1;
  local_4._0_1_ = 7;
  if (local_74 != 0) {
    iVar4 = *(int *)(local_74 + 0x14) + -1;
    *(int *)(local_74 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    local_74 = 0;
  }
  local_4._0_1_ = 1;
  FUN_0049fa20();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

