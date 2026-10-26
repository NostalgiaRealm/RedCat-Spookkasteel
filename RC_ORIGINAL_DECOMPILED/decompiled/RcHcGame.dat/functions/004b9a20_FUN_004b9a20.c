/*
 * FUN_004b9a20 at 004b9a20
 * undefined FUN_004b9a20(void)
 * Address ranges: 004b9a20-004b9dd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b9a20(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_50 [4];
  undefined4 *puStack_4c;
  undefined1 local_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f348;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != 0) {
    ExceptionList = &pvStack_c;
    uVar2 = FUN_005ae390(local_40,s_Backup_failed__Already_have_a_ba_00697420);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_TextureBackup__NULL_00697408,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697304,0x28,uVar2);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  puVar5 = &DAT_0064a3b4;
  if ((undefined1 *)param_1[3] != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)param_1[3];
  }
  if (param_2 == 0) {
    local_50[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_50);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  if (*(int *)(param_2 + 0x5c) == 0) {
    local_40[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_40);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar4 = FUN_005ba610(*(undefined4 *)(param_2 + 0x5c),puVar5);
  param_1[1] = iVar4;
  if (iVar4 == 0) {
    puVar5 = (undefined1 *)param_1[3];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005ae390(local_40,s_Could_not_get_Texture___s__006973ec,puVar5);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_TextureBitmap_006972f4,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697304,0x2d,uVar2);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_005c3100();
  iVar4 = FUN_005c3880(1,0xff,0);
  if (iVar4 == 0) {
    local_50[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puStack_4c = *puVar8;
        puVar8 = puVar8 + 1;
        puStack_4c = puStack_4c + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puStack_4c = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puStack_4c = (undefined4 *)((int)puStack_4c + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00697304,0x38
                                  ,local_50);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar4 = FUN_005c3350(0);
  if (iVar4 == 0) {
    uVar2 = FUN_005ae390(local_40,s_Could_not_get_bitmap_info__006973d0);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00697304,0x3c
                                  ,uVar2);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar4 = FUN_005c0240();
  *param_1 = iVar4;
  if (iVar4 == 0) {
    uVar2 = FUN_005ae390(local_40,s_Could_not_create_the_backup_bitm_006973ac);
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_m_TextureBackup_0069739c,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697304,0x40,uVar2);
    (*pcVar3)();
    local_4._0_1_ = 0;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
  }
  iVar4 = FUN_005c34b0();
  if (iVar4 == 0) {
    uVar2 = FUN_005ae390(local_40,s_Could_not_make_backup_copy_of_te_0069736c);
    local_4 = CONCAT31(local_4._1_3_,8);
    pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00697304,0x44
                                  ,uVar2);
    (*pcVar3)();
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

