/*
 * FUN_00584de0 at 00584de0
 * undefined FUN_00584de0(void)
 * Address ranges: 00584de0-00585156
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00584de0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_41;
  int local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642988;
  pvStack_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  if (puVar1[10] == 0) {
    pcVar9 = (char *)puVar1[8];
    local_3c = CONCAT31(local_3c._1_3_,local_41);
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      pcVar10 = local_38;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4 = 3;
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ed80(&local_40,&local_3c,*(undefined1 *)(param_1 + 0x114),0x3f800000,0,0
                                );
    iVar3 = *(int *)(param_1 + 0x110);
    local_4._0_1_ = 5;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x110) = *piVar5;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_40 != 0) {
      FUN_004098d0();
      local_40 = 0;
    }
  }
  else {
    local_3c = *puVar1;
    local_38 = (char *)puVar1[1];
    local_34 = puVar1[2];
    pcVar9 = (char *)puVar1[8];
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar9,~uVar7 - 1);
    local_4 = 0;
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ea50(&local_40,local_1c,&local_3c,*(undefined1 *)(param_1 + 0x114),1,
                                 0x3f800000,0,0);
    iVar3 = *(int *)(param_1 + 0x110);
    local_4._0_1_ = 2;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x110) = *piVar5;
      FUN_005844b0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_40 != 0) {
      FUN_004098d0();
      local_40 = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0x110) != 0) {
    if (*(int *)(param_1 + 0x110) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553610(*(undefined4 *)(param_1 + 0x11c));
  }
  ExceptionList = pvStack_c;
  return;
}

