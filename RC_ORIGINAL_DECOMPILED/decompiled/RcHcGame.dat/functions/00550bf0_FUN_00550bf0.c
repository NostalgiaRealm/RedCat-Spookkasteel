/*
 * FUN_00550bf0 at 00550bf0
 * undefined FUN_00550bf0(void)
 * Address ranges: 00550bf0-00550f26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00550bf0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_65;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_54 [4];
  char *local_50;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063de57;
  pvStack_c = ExceptionList;
  local_5c = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x316);
  iVar10 = param_2;
  local_64 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_34,s_CAdamSoundDefMgr__AddSoundDefFro_006a1cb0,puVar2);
  local_4._0_1_ = 3;
  FUN_005ab4a0();
  local_4._0_1_ = 4;
  local_10 = timeGetTime();
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940,uVar3);
  FUN_0051c180();
  FUN_00515ff0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    iVar4 = FUN_0049f950();
    puVar2 = *(undefined1 **)(iVar4 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_44,s_CAdamLoadUpdater_>>__s_00695190,puVar2);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar3);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  piVar5 = (int *)FUN_00551de0(&param_2,iVar10);
  local_4._0_1_ = 8;
  if (local_64 != *piVar5) {
    if ((local_64 != 0) &&
       (iVar10 = *(int *)(local_64 + 0x14) + -1, *(int *)(local_64 + 0x14) = iVar10, iVar10 == 0)) {
      FUN_005abfc0(0);
    }
    local_64 = *piVar5;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  if (param_2 != 0) {
    FUN_004098d0();
  }
  if (local_64 != 0) {
    pcVar9 = "";
    if (*(char **)(local_64 + 0x24) != (char *)0x0) {
      pcVar9 = *(char **)(local_64 + 0x24);
    }
    local_54[0] = (char)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_50 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        local_50 = local_50 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_50 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_50 = local_50 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 10;
    if (*(char *)(local_60 + 0x34) != '\0') {
      FUN_00409810(&DAT_006b3f70,&local_65);
      local_4._0_1_ = 0xb;
      pcVar6 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x49,local_44);
      (*pcVar6)();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
    }
    iVar10 = FUN_00553ac0(local_54,&param_2);
    if ((char)param_2 != '\0') {
      FUN_00409810(&DAT_006b3f70,&local_65);
      local_4._0_1_ = 0xc;
      pcVar6 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b
                                    ,local_44);
      (*pcVar6)();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
    }
    FUN_004fdb90(*(int *)(local_60 + 0x20) + iVar10 * 4,&local_64);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  *param_1 = local_64;
  if (local_64 != 0) {
    *(int *)(local_64 + 0x14) = *(int *)(local_64 + 0x14) + 1;
  }
  local_5c = 1;
  local_4._0_1_ = 2;
  FUN_0049fa20();
  local_4._0_1_ = 1;
  if (local_64 != 0) {
    iVar10 = *(int *)(local_64 + 0x14) + -1;
    *(int *)(local_64 + 0x14) = iVar10;
    if (iVar10 == 0) {
      FUN_005abfc0(0);
    }
    local_64 = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

