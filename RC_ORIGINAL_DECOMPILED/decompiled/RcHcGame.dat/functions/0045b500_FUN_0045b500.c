/*
 * FUN_0045b500 at 0045b500
 * undefined FUN_0045b500(void)
 * Address ranges: 0045b500-0045bc6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045b500(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  char *pcStack_50;
  uint uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  char *pcStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626ff9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_004042e0(&local_b4);
  local_4 = 0;
  if (*piVar4 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  uVar1 = *(undefined4 *)(*piVar4 + 0x360);
  if (local_b4 != 0) {
    iVar11 = *(int *)(local_b4 + 0x14) + -1;
    *(int *)(local_b4 + 0x14) = iVar11;
    if (iVar11 == 0) {
      FUN_005abfc0(0);
    }
    local_b4 = 0;
  }
  iVar11 = *(int *)(param_1 + 0x168);
  switch(*(undefined4 *)(iVar11 + 0x50)) {
  case 1:
    FUN_00459010(6,*(undefined4 *)(iVar11 + 0x54),*(undefined4 *)(iVar11 + 0x58),
                 *(undefined4 *)(iVar11 + 0x5c));
    break;
  case 2:
    puVar2 = *(undefined4 **)(iVar11 + 0x60);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691e38;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691e38;
        pcVar12 = pcStack_50;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar12 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcStack_50[uVar6] = '\0';
        uStack_4c = uVar6;
      }
      local_4 = 2;
      FUN_005035a0(auStack_54);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      FUN_00458fd0(5);
    }
    else {
      uStack_c0 = *puVar2;
      uStack_bc = puVar2[1];
      uStack_b8 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x168) + 100);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691df4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691df4;
        pcVar12 = pcStack_34;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar12 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcStack_34[uVar6] = '\0';
        uStack_30 = uVar6;
      }
      local_4 = 3;
      FUN_005035a0(auStack_38);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
    }
    else {
      uStack_d8 = *puVar2;
      uStack_d4 = puVar2[1];
      uStack_d0 = puVar2[2];
    }
    FUN_004590b0(7,&uStack_c0,&uStack_d8,*(undefined4 *)(*(int *)(param_1 + 0x168) + 0x70),0);
    break;
  case 3:
    puVar2 = *(undefined4 **)(iVar11 + 0x60);
    if (puVar2 == (undefined4 *)0x0) {
      uVar6 = 0xffffffff;
      iStack_9c = 0;
      pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691e38;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uStack_98 = 0;
      uStack_94 = 0;
      FUN_004040f0(s_CRcCameraTriggerModel__ActivateC_00691e38,~uVar6 - 1);
      local_4 = 4;
      FUN_005035a0(auStack_a0);
      local_4 = 0xffffffff;
      if (iStack_9c != 0) {
        cVar3 = *(char *)(iStack_9c + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)(iStack_9c + -1));
        }
        else {
          *(char *)(iStack_9c + -1) = cVar3 + -1;
        }
      }
      iStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      FUN_00458fd0(5);
    }
    else {
      uStack_cc = *puVar2;
      uStack_c8 = puVar2[1];
      uStack_c4 = puVar2[2];
    }
    FUN_004591b0(8,&uStack_cc,uVar1,*(undefined4 *)(*(int *)(param_1 + 0x168) + 0x70),0);
    break;
  case 4:
    puVar2 = *(undefined4 **)(iVar11 + 0x7c);
    iVar10 = 10;
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = 9;
    }
    else {
      uStack_c0 = *puVar2;
      uStack_bc = puVar2[1];
      uStack_b8 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x80);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_cc = *puVar2;
      uStack_c8 = puVar2[1];
      uStack_c4 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x84);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x88);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_90 = *puVar2;
      uStack_8c = puVar2[1];
      uStack_88 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x8c);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_84 = *puVar2;
      uStack_80 = puVar2[1];
      uStack_7c = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x90);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_60 = *puVar2;
      uStack_5c = puVar2[1];
      uStack_58 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x94);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_44 = *puVar2;
      uStack_40 = puVar2[1];
      uStack_3c = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x98);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_6c = *puVar2;
      uStack_68 = puVar2[1];
      uStack_64 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0x9c);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
    }
    else {
      uStack_d8 = *puVar2;
      uStack_d4 = puVar2[1];
      uStack_d0 = puVar2[2];
    }
    puVar2 = *(undefined4 **)(iVar11 + 0xa0);
    if (puVar2 == (undefined4 *)0x0) {
      iVar10 = iVar10 + -1;
      uVar8 = uStack_24;
      uVar13 = uStack_20;
    }
    else {
      uStack_28 = *puVar2;
      uVar8 = puVar2[1];
      uVar13 = puVar2[2];
    }
    if (0 < iVar10) {
      if (*(int *)(iVar11 + 0x78) < iVar10) {
        iVar10 = *(int *)(iVar11 + 0x78);
      }
      FUN_004592d0(10,uVar1,*(undefined4 *)(iVar11 + 0x70),0);
      FUN_00459340(iVar10,uStack_c0,uStack_bc,uStack_b8,uStack_cc,uStack_c8,uStack_c4,uStack_78,
                   uStack_74,uStack_70,uStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                   uStack_60,uStack_5c,uStack_58,uStack_44,uStack_40,uStack_3c,uStack_6c,uStack_68,
                   uStack_64,uStack_d8,uStack_d4,uStack_d0,uStack_28,uVar8,uVar13);
      ExceptionList = pvStack_c;
      return;
    }
    uVar6 = 0xffffffff;
    iStack_ac = 0;
    pcVar9 = s_CRcCameraTriggerModel__ActivateC_00691da4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    uStack_a8 = 0;
    uStack_a4 = 0;
    FUN_004040f0(s_CRcCameraTriggerModel__ActivateC_00691da4,~uVar6 - 1);
    local_4 = 5;
    FUN_005035a0(auStack_b0);
    local_4 = 0xffffffff;
    if (iStack_ac != 0) {
      cVar3 = *(char *)(iStack_ac + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)(iStack_ac + -1));
      }
      else {
        *(char *)(iStack_ac + -1) = cVar3 + -1;
      }
    }
    iStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
  default:
    FUN_00458fd0(5);
  }
  ExceptionList = pvStack_c;
  return;
}

