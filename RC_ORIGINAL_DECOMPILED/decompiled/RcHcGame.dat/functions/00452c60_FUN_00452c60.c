/*
 * FUN_00452c60 at 00452c60
 * undefined FUN_00452c60(void)
 * Address ranges: 00452c60-00452f9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00452c60(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626450;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_0050d730(&local_34,&DAT_006b7058);
  iVar6 = *(int *)(param_1 + 0x5c);
  local_4 = 1;
  if (iVar6 != *piVar4) {
    if ((iVar6 != 0) &&
       (iVar5 = *(int *)(iVar6 + 0x14) + -1, *(int *)(iVar6 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x5c) = *piVar4;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    FUN_004098d0();
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puStack_28 = *puVar9;
        puVar9 = puVar9 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_HUDFadeToWhiteBitmapHandle_IsN_00691b60,
                                  s_D__Work_RCHorror_RCSource_RCHud__00691b8c,0x82,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    param_1 = local_30;
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_0050d730(&local_30,&DAT_006b7020);
  iVar2 = *(int *)(param_1 + 0x60);
  local_4 = 4;
  if (iVar2 != *piVar4) {
    if ((iVar2 != 0) &&
       (iVar6 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar6, iVar6 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x60) = *piVar4;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  if (local_30 != 0) {
    FUN_004098d0();
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puStack_18 = *puVar9;
        puVar9 = puVar9 + 1;
        puStack_18 = puStack_18 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puStack_18 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puStack_18 = (undefined4 *)((int)puStack_18 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_HUDFadeToBlackBitmapHandle_IsN_00691b34,
                                  s_D__Work_RCHorror_RCSource_RCHud__00691b8c,0x87,auStack_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return;
}

