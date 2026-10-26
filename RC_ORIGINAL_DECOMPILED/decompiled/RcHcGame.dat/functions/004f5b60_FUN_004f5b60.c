/*
 * FUN_004f5b60 at 004f5b60
 * undefined FUN_004f5b60(void)
 * Address ranges: 004f5b60-004f5ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f5b60(undefined4 ***param_1)

{
  undefined4 **ppuVar1;
  char cVar2;
  code *pcVar3;
  undefined4 ***pppuVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 ***extraout_ECX;
  undefined4 ***extraout_ECX_00;
  char *pcVar8;
  char *pcVar9;
  undefined4 ***pppuStack_44;
  undefined1 ***apppuStack_28 [2];
  undefined1 *puStack_20;
  undefined1 **local_1c;
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634ae8;
  pvStack_c = ExceptionList;
  pppuStack_44 = (undefined4 ***)0x311;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  pppuStack_44 = (undefined4 ***)0x4f5ba6;
  FUN_00568080();
  pppuStack_44 = (undefined4 ***)0x4f5bb3;
  FUN_00568080();
  if (param_1[0x17] != (undefined4 **)0x0) {
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuStack_44 = (undefined4 ***)(~uVar6 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld__0_0069c964,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x31a);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pppuStack_44 = (undefined4 ***)0x1;
    FUN_004040a0();
  }
  pppuStack_44 = (undefined4 ***)0x0;
  pppuVar4 = (undefined4 ***)FUN_005b81a0();
  pppuStack_44 = pppuVar4;
  FUN_004f6300();
  if (pppuVar4 == (undefined4 ***)0x0) {
    pppuStack_44 = pppuVar4;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = s_Cannot_create_empty_world_0069c948;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuStack_44 = (undefined4 ***)(~uVar6 - 1);
    FUN_004040f0(s_Cannot_create_empty_world_0069c948);
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 2;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x321);
    local_4._0_1_ = 0;
    pppuStack_44 = (undefined4 ***)0x1;
    FUN_004040a0();
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = s_No_world_created_0069c934;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuStack_44 = (undefined4 ***)(~uVar6 - 1);
    FUN_004040f0(s_No_world_created_0069c934);
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 3;
    FUN_00567990();
    pppuStack_44 = (undefined4 ***)0x1;
    local_4._0_1_ = 0;
    FUN_004040a0();
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = s_No_world_created_0069c934;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuStack_44 = (undefined4 ***)(~uVar6 - 1);
    FUN_004040f0(s_No_world_created_0069c934);
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 4;
    FUN_00567990();
  }
  else {
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = s_GenesisFrameRate_for_empty_world_0069c910;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuStack_44 = (undefined4 ***)(~uVar6 - 1);
    FUN_004040f0(s_GenesisFrameRate_for_empty_world_0069c910);
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 5;
    FUN_00567990();
    pppuStack_44 = (undefined4 ***)0x1;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pppuStack_44 = (undefined4 ***)0x1;
    pcVar8 = s_Game_FrameRate_for_empty_world_0069c8f0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuVar4 = (undefined4 ***)(~uVar6 - 1);
    cVar2 = FUN_00401940(pppuVar4);
    if (cVar2 != '\0') {
      pcVar8 = s_Game_FrameRate_for_empty_world_0069c8f0;
      pcVar9 = pcStack_18;
      for (uVar6 = (uint)pppuVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = (uint)pppuVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pppuStack_44 = pppuVar4;
      FUN_00404190();
    }
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 6;
    FUN_00567990();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  pppuStack_44 = (undefined4 ***)0x1;
  FUN_004040a0();
  if (DAT_006c8de0 == 0) {
    pppuStack_44 = (undefined4 ***)0x4f5e16;
    FUN_0055b280();
  }
  pppuStack_44 = param_1;
  cVar2 = FUN_0055cec0();
  if (cVar2 != '\0') {
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pppuStack_44 = (undefined4 ***)0x1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    pppuVar4 = (undefined4 ***)(~uVar6 - 1);
    cVar2 = FUN_00401940(pppuVar4);
    if (cVar2 != '\0') {
      pcVar8 = &DAT_006b3f70;
      pcVar9 = pcStack_18;
      for (uVar6 = (uint)pppuVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = (uint)pppuVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pppuStack_44 = pppuVar4;
      FUN_00404190();
    }
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s___engine_HasSubLevel__this___0069c8d0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x32d);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pppuStack_44 = (undefined4 ***)0x1;
    FUN_004040a0();
  }
  apppuStack_28[0] = (undefined1 ***)&pppuStack_44;
  if (param_1 != (undefined4 ***)0x0) {
    param_1[5] = (undefined4 **)((int)param_1[5] + 1);
  }
  local_4 = local_4 & 0xffffff00;
  pppuStack_44 = param_1;
  FUN_00454200();
  FUN_0055cff0();
  pppuStack_44 = apppuStack_28;
  piVar5 = (int *)FUN_004fbe70();
  pppuStack_44 = (undefined4 ***)*piVar5;
  local_4._0_1_ = 9;
  if (pppuStack_44 == (undefined4 ***)0x0) {
    pppuStack_44 = (undefined4 ***)0x0;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pppuStack_44 = (undefined4 ***)0x1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6);
    if (cVar2 != '\0') {
      pcVar8 = &DAT_006b3f70;
      pcVar9 = pcStack_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcStack_18[uVar6] = '\0';
      uStack_14 = uVar6;
    }
    pppuStack_44 = (undefined4 ***)&local_1c;
    local_4._0_1_ = 10;
    pcVar3 = (code *)FUN_005a07f0(s_engine_GetHideFogBitmapHandle____0069c8a4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x331);
    (*pcVar3)();
    local_4._0_1_ = 9;
    pppuStack_44 = (undefined4 ***)0x1;
    FUN_004040a0();
    pppuStack_44 = extraout_ECX;
  }
  pppuVar4 = (undefined4 ***)apppuStack_28[0];
  local_4 = (uint)local_4._1_3_ << 8;
  if ((undefined4 ***)apppuStack_28[0] != (undefined4 ***)0x0) {
    ppuVar1 = (undefined4 **)apppuStack_28[0][5];
    apppuStack_28[0][5] = (undefined1 **)((int)ppuVar1 + -1);
    if ((undefined4 **)((int)ppuVar1 + -1) == (undefined4 **)0x0) {
      pppuStack_44 = (undefined4 ***)0x0;
      FUN_005abfc0();
      pppuVar4 = extraout_ECX_00;
    }
    apppuStack_28[0] = (undefined1 ***)0x0;
    pppuStack_44 = pppuVar4;
  }
  puStack_20 = (undefined1 *)&pppuStack_44;
  FUN_004fbe70(&pppuStack_44);
  FUN_004fb310();
  puStack_20 = (undefined1 *)&pppuStack_44;
  if (param_1 != (undefined4 ***)0x0) {
    param_1[5] = (undefined4 **)((int)param_1[5] + 1);
  }
  pppuStack_44 = param_1;
  FUN_0051a910();
  local_4 = 0xffffffff;
  pppuStack_44 = (undefined4 ***)0x4f5fec;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

