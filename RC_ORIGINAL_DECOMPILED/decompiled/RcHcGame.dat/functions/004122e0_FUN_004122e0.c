/*
 * FUN_004122e0 at 004122e0
 * undefined FUN_004122e0(void)
 * Address ranges: 004122e0-004126b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004122e0(int *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 **ppuVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *local_a0;
  undefined1 local_89;
  int local_88;
  undefined1 *local_84;
  undefined1 *puStack_80;
  undefined1 local_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00620ee6;
  pvStack_c = ExceptionList;
  local_84 = (undefined1 *)&local_a0;
  local_4 = 0;
  local_a0 = param_2;
  ExceptionList = &pvStack_c;
  if (param_2 != (undefined1 *)0x0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00427ab0();
  local_a0 = (undefined1 *)0x0;
  local_7c[0] = local_89;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar8 = s_transghost_bmp_0068fce8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_a0 = (undefined1 *)(~uVar7 - 1);
  FUN_004040f0(s_transghost_bmp_0068fce8);
  local_4._0_1_ = 1;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    local_a0 = (undefined1 *)0x412371;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    local_a0 = &local_89;
    FUN_00409810(&DAT_006b3f70);
    local_a0 = local_4c;
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 1;
    local_a0 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_a0 = local_7c;
  FUN_0050d980(&local_88);
  local_a0 = (undefined1 *)0x1;
  local_4._0_1_ = 4;
  FUN_004040a0();
  local_a0 = (undefined1 *)0x0;
  auStack_6c[0] = local_89;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar8 = s_transghost_a_bmp_0068fcd4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_a0 = (undefined1 *)(~uVar7 - 1);
  FUN_004040f0(s_transghost_a_bmp_0068fcd4);
  local_4._0_1_ = 5;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    local_a0 = (undefined1 *)0x412437;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    local_a0 = &local_89;
    FUN_00409810(&DAT_006b3f70);
    local_a0 = local_4c;
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 5;
    local_a0 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_a0 = auStack_6c;
  FUN_0050d980(&local_84);
  local_a0 = (undefined1 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0();
  if (local_88 != 0) {
    if (local_84 != (undefined1 *)0x0) {
      puStack_80 = (undefined1 *)&local_a0;
      local_a0 = local_84;
      ppuVar2 = &local_a0;
      if (local_84 != (undefined1 *)0x0) {
        *(int *)(local_84 + 0x14) = *(int *)(local_84 + 0x14) + 1;
        ppuVar2 = (undefined1 **)puStack_80;
      }
      puStack_80 = (undefined1 *)ppuVar2;
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00412de0();
      FUN_0050aea0();
    }
    if (local_88 != 0) goto LAB_00412565;
  }
  local_a0 = (undefined1 *)0x0;
  auStack_5c[0] = local_89;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_a0 = (undefined1 *)(~uVar7 - 1);
  FUN_004040f0(&DAT_006b3f70);
  local_a0 = auStack_5c;
  local_4._0_1_ = 10;
  pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
  (*pcVar4)();
  local_4 = CONCAT31(local_4._1_3_,8);
  local_a0 = (undefined1 *)0x1;
  FUN_004040a0();
LAB_00412565:
  local_a0 = (undefined1 *)0x412573;
  iVar3 = (**(code **)(*param_1 + 0x9c))();
  if (*(int *)(iVar3 + 0x114) == 0) {
    local_a0 = (undefined1 *)0x0;
    local_4c[0] = local_89;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_a0 = (undefined1 *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_a0 = local_4c;
    local_4._0_1_ = 0xb;
    pcVar4 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,0x18d)
    ;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,8);
    local_a0 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_a0 = auStack_3c;
  iVar3 = FUN_00412cb0();
  local_a0 = *(undefined1 **)(iVar3 + 8);
  iVar3 = FUN_00412cb0(auStack_2c);
  uVar10 = *(undefined4 *)(iVar3 + 4);
  puVar5 = (undefined4 *)FUN_00412cb0(auStack_1c);
  uVar9 = *puVar5;
  uVar6 = FUN_0050aa70(uVar9,uVar10);
  FUN_005b5520(uVar6,uVar9,uVar10);
  local_4._0_1_ = 4;
  if (local_84 != (undefined1 *)0x0) {
    local_a0 = (undefined1 *)0x412649;
    FUN_004098d0();
    local_84 = (undefined1 *)0x0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_88 != 0) {
    iVar3 = *(int *)(local_88 + 0x14) + -1;
    *(int *)(local_88 + 0x14) = iVar3;
    if (iVar3 == 0) {
      local_a0 = (undefined1 *)0x0;
      FUN_005abfc0();
    }
    local_88 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_2 != (undefined1 *)0x0) &&
     (iVar3 = *(int *)(param_2 + 0x14), *(int *)(param_2 + 0x14) = iVar3 + -1, iVar3 + -1 == 0)) {
    local_a0 = (undefined1 *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

