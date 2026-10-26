/*
 * FUN_004a87e0 at 004a87e0
 * undefined FUN_004a87e0(void)
 * Address ranges: 004a87e0-004a8f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a87e0(int param_1,code *param_2)

{
  double dVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [4];
  char *apcStack_5c [4];
  int local_4c;
  char *pcStack_48;
  undefined1 auStack_40 [4];
  undefined1 local_3c;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  int iStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  undefined4 local_4;
  
  iVar8 = param_1;
  local_4 = 0xffffffff;
  uStack_8 = 0x28;
  uStack_7 = 0x62dd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == (code *)0x0) {
    local_3c = param_2._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  pcVar14 = *(char **)(param_1 + 0x14);
  if (pcVar14 == (char *)0x0) {
LAB_004a8ed5:
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar7 = __ftol();
    uVar7 = __ftol(uVar7);
    uVar7 = __ftol(uVar7);
    uVar7 = FUN_005ae390(auStack_2c,s_Any_actor_at_position___i__i__i__00695df8,uVar7);
    local_4 = 1;
    FUN_004c43e0(uVar7);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = pvStack_c;
    return (int *)0x0;
  }
  iVar11 = -1;
  pcVar13 = pcVar14;
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  if (iVar11 == -2) goto LAB_004a8ed5;
  local_4c = CONCAT31(local_4c._1_3_,param_2._0_1_);
  FUN_004040a0(0);
  uVar10 = 0xffffffff;
  pcVar13 = pcVar14;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10 - 1;
  cVar2 = FUN_00401940(uVar10,1);
  if (cVar2 != '\0') {
    for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcStack_48 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcStack_48 = pcStack_48 + 4;
    }
    for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcStack_48 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcStack_48 = pcStack_48 + 1;
    }
    FUN_00404190(uVar10);
  }
  local_4 = 2;
  FUN_005033f0();
  local_4._0_1_ = 3;
  piVar4 = (int *)(*param_2)();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  pcVar14 = *(char **)(param_1 + 0xc);
  apcStack_5c[0] = (char *)CONCAT31(apcStack_5c[0]._1_3_,param_2._0_1_);
  FUN_004040a0(0);
  local_4._0_1_ = 4;
  if (pcVar14 == (char *)0x0) {
    uVar10 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    pcVar14 = &DAT_006b3f70;
  }
  else {
    uVar10 = 0xffffffff;
    pcVar13 = pcVar14;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
  }
  FUN_004040f0(pcVar14,~uVar10 - 1);
  FUN_00503ae0(apcStack_5c);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  pcVar14 = *(char **)(param_1 + 0x10);
  local_3c = param_2._0_1_;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  if (pcVar14 != (char *)0x0) {
    uVar10 = 0xffffffff;
    pcVar13 = pcVar14;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar14,~uVar10 - 1);
  }
  FUN_0040cc00();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  if (0.0 < *(float *)(param_1 + 0x20)) {
    FUN_0049cca0();
  }
  (**(code **)(*piVar4 + 0x4c))(param_1);
  FUN_0049ccf0(*(float *)(param_1 + 0x24) * 0.017453292);
  FUN_0049cd90(*(float *)(param_1 + 0x28) * 0.017453292);
  FUN_0049ce30(*(float *)(param_1 + 0x2c) * 0.017453292);
  pcVar14 = *(char **)(param_1 + 0x18);
  if (pcVar14 != (char *)0x0) {
    iVar11 = -1;
    pcVar13 = pcVar14;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    if ((iVar11 != -2) && (iVar11 = __strcmpi(pcVar14,s_<null>_00695eac), iVar11 != 0)) {
      pcVar14 = *(char **)(param_1 + 0x18);
      auStack_60[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar13 = pcVar14;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10 - 1;
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        pcVar13 = apcStack_5c[0];
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar13 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_00404190(uVar10);
      }
      uStack_8 = 6;
      FUN_004a06b0(auStack_60);
      uStack_8 = 2;
      FUN_004040a0(1);
      pfVar9 = (float *)(param_1 + 0x1c);
      param_1 = 0x3f800000;
      dVar1 = (double)*pfVar9;
      if ((*pfVar9 < 0.0) || (1000.0 <= *(float *)(iVar8 + 0x1c))) {
        uStack_74 = (undefined4)((ulonglong)dVar1 >> 0x20);
        uVar7 = FUN_005ae390(auStack_40,s_Invalid_MotionSpeed__f_00695e94,SUB84(dVar1,0),uStack_74);
        uStack_8 = 7;
        FUN_005035a0(uVar7);
        uStack_8 = 2;
        FUN_004040a0(1);
      }
      else {
        param_1 = *(int *)(iVar8 + 0x1c);
      }
      FUN_004a0bd0(param_1);
    }
  }
  if (*(int *)(iVar8 + 0x4c) != 0) {
    piVar4[0x90] = *(int *)(iVar8 + 0x4c);
  }
  if (piVar4[0x42] == 0) {
    auStack_40[0] = (undefined1)param_1;
    FUN_004040a0(0);
    iVar11 = -1;
    pcVar14 = &DAT_006b3f70;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    uStack_8 = 8;
    pcVar3 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141,auStack_40);
    (*pcVar3)();
    uStack_8 = 2;
    FUN_004040a0(1);
  }
  if (*(char *)(piVar4[0x42] + 0x56) != '\0') {
    if (piVar4[0x42] == 0) {
      auStack_40[0] = (undefined1)param_1;
      FUN_004040a0(0);
      iVar11 = -1;
      pcVar14 = &DAT_006b3f70;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      uStack_8 = 9;
      pcVar3 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141,auStack_40);
      (*pcVar3)();
      uStack_8 = 2;
      FUN_004040a0(1);
    }
    if (0 < *(int *)(piVar4[0x42] + 100)) {
      iVar5 = FUN_00517f70();
      iVar11 = *(int *)(iVar5 + 100);
      if (iVar11 == -0x80000000) {
        puVar6 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        iVar11 = FUN_0060af10(puVar6);
        *(int *)(iVar5 + 100) = iVar11;
      }
      if (iVar11 != 0) {
        uVar7 = FUN_005ae390(auStack_40,s_Create_destroyable_AnyActor__s_00695e74,
                             *(undefined4 *)(iVar8 + 0xc));
        uStack_8 = 10;
        FUN_005aff00(uVar7);
        uStack_8 = 2;
        FUN_004040a0(1);
      }
      *(undefined1 *)(piVar4 + 0x80) = 1;
      piVar4[0x81] = (int)FUN_004a7940;
      goto LAB_004a8dae;
    }
  }
  iVar5 = FUN_00517f70();
  iVar11 = *(int *)(iVar5 + 100);
  if (iVar11 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar11 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar11;
  }
  if (iVar11 != 0) {
    uVar7 = FUN_005ae390(auStack_40,s_Create_NON_destroyable_AnyActor___00695e50,
                         *(undefined4 *)(iVar8 + 0xc));
    uStack_8 = 0xb;
    FUN_005aff00(uVar7);
    uStack_8 = 2;
    FUN_004040a0(1);
  }
LAB_004a8dae:
  iVar11 = FUN_00517f70();
  iVar8 = *(int *)(iVar11 + 100);
  if (iVar8 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar11 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar6);
    *(int *)(iVar11 + 100) = iVar8;
  }
  if (iVar8 != 0) {
    puVar6 = (undefined1 *)piVar4[0x18];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar8 = (**(code **)(*piVar4 + 0x48))(&stack0xffffff88);
    iVar8 = (**(code **)(*piVar4 + 0x48))(auStack_70,(double)*(float *)(iVar8 + 8));
    pfVar9 = (float *)(**(code **)(*piVar4 + 0x48))(auStack_68,(double)*(float *)(iVar8 + 4));
    uVar7 = FUN_005ae390(auStack_20,s_Create_AnyActor__s_at____f___f____00695e28,puVar6,
                         (double)*pfVar9);
    uStack_8 = 0xc;
    FUN_005aff00(uVar7);
    uStack_8 = 2;
    if (iStack_1c != 0) {
      cVar2 = *(char *)(iStack_1c + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_1c + -1));
      }
      else {
        *(char *)(iStack_1c + -1) = cVar2 + -1;
      }
    }
  }
  FUN_00502350(1);
  if (local_4c != 0) {
    cVar2 = *(char *)(local_4c + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_4c + -1) = cVar2 + -1;
      ExceptionList = pvStack_10;
      return piVar4;
    }
    FUN_005fe5f0(local_4c + -1);
  }
  ExceptionList = pvStack_10;
  return piVar4;
}

