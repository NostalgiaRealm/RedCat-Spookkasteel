/*
 * FUN_0057a5b0 at 0057a5b0
 * undefined FUN_0057a5b0(void)
 * Address ranges: 0057a5b0-0057ab5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0057a5b0(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  float local_8c;
  undefined1 local_88 [4];
  undefined4 *puStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [4];
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641c5f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_68 = param_1;
  piVar3 = (int *)FUN_004042e0(&local_8c);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_78);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar8 = *piVar3;
  if (*(int *)(iVar8 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_88);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_64 = *(undefined4 *)(iVar8 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_8c != 0.0) &&
     (iVar8 = *(int *)((int)local_8c + 0x14) + -1, *(int *)((int)local_8c + 0x14) = iVar8,
     iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&local_8c);
  local_4 = 3;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_78);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  uStack_60 = FUN_00556570();
  local_4 = 0xffffffff;
  if ((local_8c != 0.0) &&
     (iVar8 = *(int *)((int)local_8c + 0x14) + -1, *(int *)((int)local_8c + 0x14) = iVar8,
     iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  iVar8 = *(int *)(param_1 + 0xfc);
  FUN_005b2e20(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10)
              );
  iVar8 = FUN_005b9be0(uStack_64,auStack_50,*(int *)(param_1 + 0xfc) + 4);
  if (iVar8 != 1) {
    uVar5 = 0xffffffff;
    puStack_84 = (undefined4 *)0x0;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uStack_80 = 0;
    uStack_7c = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 5;
    pcVar4 = (code *)FUN_005a07f0(s_Result_____1__006974ac,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a5050,0x7f,local_88);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (puStack_84 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_84 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_84 + -1));
      }
      else {
        *(char *)((int)puStack_84 + -1) = cVar2 + -1;
      }
    }
  }
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_84;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)puStack_84 + uVar5) = 0;
      uStack_80 = uVar5;
    }
    local_4 = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_Corona____0_006a5094,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a5050,0x82,local_88);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    param_1 = local_68;
  }
  iVar8 = FUN_005b9c10(uStack_64,*(undefined4 *)(*(int *)(param_1 + 0xfc) + 4));
  if (iVar8 != 0) {
    iVar8 = FUN_005c9470();
    if (iVar8 == 0) {
      uVar5 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      iStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 7;
      pcVar4 = (code *)FUN_005a07f0(s_CameraXf____0_006a5084,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a5050,0x8f,local_78);
      (*pcVar4)();
      if (iStack_74 != 0) {
        cVar2 = *(char *)(iStack_74 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iStack_74 + -1));
        }
        else {
          *(char *)(iStack_74 + -1) = cVar2 + -1;
        }
      }
    }
    FUN_005b2fe0(auStack_5c);
    fVar12 = (float10)FUN_005b2fd0();
    local_8c = (float)fVar12;
    FUN_005b2fe0(auStack_5c);
    FUN_005b2f20();
    FUN_005b3670();
    fVar12 = (float10)FUN_005b2e40();
    param_1 = local_68;
    if (((float10)0.0 <= fVar12) &&
       (iVar8 = FUN_005b7d80(uStack_64,0,0,iVar8 + 0x24,auStack_50,1,2,0,0,0,auStack_38),
       param_1 = local_68, iVar8 != 1)) {
      pfVar7 = *(float **)(local_68 + 0xfc);
      if (local_8c < pfVar7[0xe]) {
        if (pfVar7[0xf] < local_8c) {
          fVar1 = (local_8c - pfVar7[0xf]) *
                  ((pfVar7[0xd] - pfVar7[0xc]) / (pfVar7[0xe] - pfVar7[0xf])) + pfVar7[0xc];
        }
        else {
          fVar1 = pfVar7[0xc];
        }
      }
      else {
        fVar1 = pfVar7[0xd];
      }
      if (0.0 < pfVar7[0xb]) {
        *pfVar7 = (param_2 * pfVar7[0xd]) / pfVar7[0xb] + *pfVar7;
        pfVar7 = *(float **)(local_68 + 0xfc);
        if (*pfVar7 <= fVar1) {
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      *pfVar7 = fVar1;
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  pfVar7 = *(float **)(param_1 + 0xfc);
  if (0.0 < *pfVar7) {
    if (0.0 < pfVar7[0xb]) {
      *pfVar7 = *pfVar7 - (param_2 * pfVar7[0xd]) / pfVar7[0xb];
      pfVar7 = *(float **)(param_1 + 0xfc);
      if (0.0 <= *pfVar7) {
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    *pfVar7 = 0.0;
  }
  ExceptionList = pvStack_c;
  return 1;
}

