/*
 * FUN_004f9030 at 004f9030
 * undefined FUN_004f9030(void)
 * Address ranges: 004f9030-004f95ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_004f9030(int param_1,char param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  DWORD DVar7;
  undefined1 *puVar8;
  char *pcVar9;
  float10 fVar10;
  char local_61;
  int *piStack_5c;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635098;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  FUN_005ae390(local_34,s_CAdamSubLevel__CreateWorld____s__0069cff4);
  local_4._0_1_ = 1;
  FUN_005ab4a0();
  local_4._0_1_ = 2;
  local_10 = timeGetTime();
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940);
  FUN_0051c180();
  FUN_00515ff0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    FUN_0049f950();
    uVar5 = FUN_005ae390(local_44,s_CAdamLoadUpdater_>>__s_00695190);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_61 = FUN_004f9d60();
  if (local_61 == '\0') {
    FUN_005ae390(local_44);
    local_4._0_1_ = 6;
    pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,
                                  0x57f);
    (*pcVar6)();
    local_4._0_1_ = 5;
    FUN_004040a0();
  }
  if (param_2 != '\0') {
    iVar4 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar4 = FUN_004bc480();
    }
    if (*(int *)(iVar4 + 0x3a4) == 0) {
      FUN_004040a0();
      iVar4 = -1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4._0_1_ = 7;
      pcVar6 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130);
      (*pcVar6)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    FUN_00523d50();
    cVar3 = FUN_004f80f0();
    if (cVar3 == '\0') {
      FUN_005ae390(local_44);
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,
                                    0x588);
      (*pcVar6)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    cVar3 = FUN_004f95b0();
    if (cVar3 == '\0') {
      FUN_005ae390(local_44);
      local_4._0_1_ = 9;
      pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,
                                    0x58d);
      (*pcVar6)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    local_61 = FUN_004f7790();
    if (local_61 == '\0') {
      FUN_005ae390(local_44);
      local_4._0_1_ = 10;
      pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,
                                    0x590);
      (*pcVar6)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    FUN_004f86b0();
    FUN_004f8920();
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_004e5680();
  FUN_004f4940();
  local_4._0_1_ = 0xb;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 0xb;
  if (piStack_5c == (int *)0x0) {
    FUN_004040a0();
    iVar4 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 0xc;
    pcVar6 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51);
    (*pcVar6)();
    local_4._0_1_ = 0xb;
    FUN_004040a0();
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  piVar1 = (int *)*piStack_5c;
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    while (iVar4 != 0) {
      FUN_005027c0();
      if (piStack_5c == (int *)0x0) {
        FUN_004040a0();
        iVar4 = -1;
        pcVar9 = &DAT_006b3f70;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 0xd;
        pcVar6 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x5f);
        (*pcVar6)();
        local_4._0_1_ = 0xb;
        FUN_004040a0();
      }
      if (piVar1 == (int *)0x0) {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 0xe;
        pcVar6 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x60);
        (*pcVar6)();
        local_4._0_1_ = 0xb;
        FUN_004040a0();
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) break;
      iVar4 = *piVar1;
    }
  }
  local_24 = &PTR_FUN_0064e854;
  local_4._0_1_ = 0xf;
  FUN_00515ff0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    DVar7 = timeGetTime();
    iVar4 = FUN_0049f950();
    puVar8 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar4 + 4) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(iVar4 + 4);
    }
    uVar5 = FUN_00484d70(DVar7);
    fVar10 = (float10)FUN_00409e30(uVar5);
    uVar5 = FUN_005ae390(local_34,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar8,(double)fVar10)
    ;
    local_4._0_1_ = 0x10;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 0xf;
    FUN_004040a0();
  }
  FUN_004c4540();
  FUN_0051c180();
  FUN_00515ff0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    FUN_0049f950();
    uVar5 = FUN_005ae390(local_34,s_CAdamLoadUpdater_<<__s_006951e4);
    local_4._0_1_ = 0x11;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 0xf;
    FUN_004040a0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return local_61;
}

