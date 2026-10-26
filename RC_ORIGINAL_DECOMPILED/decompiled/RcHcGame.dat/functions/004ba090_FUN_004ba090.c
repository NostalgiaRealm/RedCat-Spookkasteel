/*
 * FUN_004ba090 at 004ba090
 * undefined FUN_004ba090(void)
 * Address ranges: 004ba090-004ba7b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ba090(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float fStack_98;
  int iStack_94;
  float fStack_90;
  undefined1 local_8c [4];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [4];
  undefined4 *puStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 auStack_68 [4];
  undefined4 *puStack_64;
  uint uStack_60;
  uint uStack_58;
  int local_54;
  int local_50;
  int local_30;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f3c9;
  local_c = ExceptionList;
  if ((*param_1 != 0) ||
     (ExceptionList = &local_c, iVar3 = FUN_005ba6d0(param_3,param_1[1]), iVar3 == 0)) {
    ExceptionList = local_c;
    return 1;
  }
  iVar3 = FUN_005c3350(0);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = FUN_005c3350(0);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (local_2c != local_50) {
    uVar6 = 0xffffffff;
    local_88 = 0;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_84 = 0;
    local_80 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_OriginalInfo_Height____AttachInf_006974e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697510,0x8d,local_8c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_88 != 0) {
      cVar2 = *(char *)(local_88 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_88 + -1));
      }
      else {
        *(char *)(local_88 + -1) = cVar2 + -1;
      }
    }
  }
  if (local_30 < local_54) {
    uVar6 = 0xffffffff;
    local_88 = 0;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_84 = 0;
    local_80 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_OriginalInfo_Width_>__AttachInfo_006974bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697510,0x8e,local_8c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_88 != 0) {
      cVar2 = *(char *)(local_88 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_88 + -1));
      }
      else {
        *(char *)(local_88 + -1) = cVar2 + -1;
      }
    }
  }
  fVar1 = param_4 * (float)param_1[7] + (float)param_1[5];
  param_1[5] = (int)fVar1;
  if (6.2831855 < fVar1) {
    param_1[5] = 0;
  }
  fStack_98 = (float)param_1[5];
  iStack_94 = 0;
  fStack_90 = 6.2831855 / (float)param_1[9];
  if (0 < param_1[9]) {
    do {
      fStack_98 = fStack_98 + fStack_90;
      if (fStack_98 <= 3.1415927) {
        if (fStack_98 < 0.0) {
          fStack_98 = -fStack_98;
          goto LAB_004ba2fd;
        }
      }
      else {
        fStack_98 = 3.1415927 - (fStack_98 - 3.1415927);
LAB_004ba2fd:
        fStack_90 = -fStack_90;
      }
      fcos((float10)fStack_98);
      iVar3 = param_1[8];
      iVar8 = iVar3 * iStack_94;
      iVar5 = __ftol();
      iVar3 = FUN_005c3480(0,param_1[3],iVar8,iVar5,iVar3,local_50 - iVar5);
      if (iVar3 != 1) {
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 2;
        pcVar4 = (code *)FUN_005a07f0(s_Result_____1__006974ac,
                                      s_D__Work_RCHorror_AdamSource_Adam_00697510,0xb0,local_8c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (local_88 != 0) {
          cVar2 = *(char *)(local_88 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(local_88 + -1));
          }
          else {
            *(char *)(local_88 + -1) = cVar2 + -1;
          }
        }
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
      }
      iVar3 = FUN_005c3480(local_50 - iVar5,param_1[3],iVar8,0,param_1[8],iVar5);
      if (iVar3 != 1) {
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_78;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)puStack_78 + uVar6) = 0;
          uStack_74 = uVar6;
        }
        local_4 = 3;
        pcVar4 = (code *)FUN_005a07f0(s_Result_____1__006974ac,
                                      s_D__Work_RCHorror_AdamSource_Adam_00697510,0xb2,auStack_7c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_78 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_78 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_78 + -1));
          }
          else {
            *(char *)((int)puStack_78 + -1) = cVar2 + -1;
          }
        }
        puStack_78 = (undefined4 *)0x0;
        uStack_74 = 0;
        uStack_70 = 0;
      }
      iStack_94 = iStack_94 + 1;
    } while (iStack_94 < param_1[9]);
  }
  fVar1 = param_4 * (float)param_1[6] + (float)param_1[4];
  param_1[4] = (int)fVar1;
  if (6.2831855 < fVar1) {
    param_1[4] = 0;
  }
  fStack_98 = (float)param_1[4];
  iStack_94 = 0;
  fStack_90 = 6.2831855 / (float)param_1[9];
  if (0 < param_1[9]) {
    do {
      fStack_98 = fStack_98 + fStack_90;
      if (fStack_98 <= 3.1415927) {
        if (fStack_98 < 0.0) {
          fStack_98 = -fStack_98;
          goto LAB_004ba580;
        }
      }
      else {
        fStack_98 = 3.1415927 - (fStack_98 - 3.1415927);
LAB_004ba580:
        fStack_90 = -fStack_90;
      }
      fcos((float10)fStack_98);
      iVar3 = __ftol();
      iVar8 = param_1[8] * iStack_94;
      iStack_6c = iVar3;
      iVar5 = FUN_005c3480(iVar8,param_1[1],iVar3,iVar8,local_54 - iVar3,param_1[8]);
      if (iVar5 != 1) {
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        uStack_58 = uVar6;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_78;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)puStack_78 + uVar6) = 0;
          iVar3 = iStack_6c;
          uStack_74 = uVar6;
        }
        local_4 = 4;
        pcVar4 = (code *)FUN_005a07f0(s_Result_____1__006974ac,
                                      s_D__Work_RCHorror_AdamSource_Adam_00697510,0xd5,auStack_7c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_78 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_78 + -1);
          if ((cVar2 != '\0') && (cVar2 != -1)) {
            *(char *)((int)puStack_78 + -1) = cVar2 + -1;
            puStack_78 = (undefined4 *)0x0;
            uStack_74 = 0;
            uStack_70 = 0;
            goto LAB_004ba6ac;
          }
          FUN_005fe5f0((char *)((int)puStack_78 + -1));
        }
        puStack_78 = (undefined4 *)0x0;
        uStack_74 = 0;
        uStack_70 = 0;
      }
LAB_004ba6ac:
      iVar3 = FUN_005c3480(iVar8,param_1[1],0,iVar8,iVar3,param_1[8]);
      if (iVar3 != 1) {
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_64;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)puStack_64 + uVar6) = 0;
          uStack_60 = uVar6;
        }
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_Result_____1__006974ac,
                                      s_D__Work_RCHorror_AdamSource_Adam_00697510,0xd7,auStack_68);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iStack_94 = iStack_94 + 1;
    } while (iStack_94 < param_1[9]);
  }
  ExceptionList = local_c;
  return 1;
}

