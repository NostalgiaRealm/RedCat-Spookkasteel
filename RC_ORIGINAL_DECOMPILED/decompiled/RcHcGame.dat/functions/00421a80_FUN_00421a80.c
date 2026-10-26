/*
 * FUN_00421a80 at 00421a80
 * undefined FUN_00421a80(void)
 * Address ranges: 00421a80-00421d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00421a80(int param_1)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622332;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_RCSource_RcButt_0068f6e8,0x1e);
  local_4 = 0;
  if (param_1 == 0) {
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_ButtonModel____0_0068f6d4,
                                  s_D__Work_RCHorror_RCSource_RcButt_0068f6e8,0x1f,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar9 = *(char **)(param_1 + 0xc);
  if (pcVar9 != (char *)0x0) {
    iVar7 = -1;
    pcVar11 = pcVar9;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      uVar5 = 0xffffffff;
      pcVar11 = pcVar9;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar11 = pcStack_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pcStack_28[uVar5] = '\0';
        uStack_24 = uVar5;
      }
      goto LAB_00421bf9;
    }
  }
  uVar5 = 0xffffffff;
  pcVar9 = s_ButtonModel_0068f64c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar9 = s_ButtonModel_0068f64c;
    pcVar11 = pcStack_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_28[uVar5] = '\0';
    uStack_24 = uVar5;
  }
LAB_00421bf9:
  pvVar3 = operator_new(0x184);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_005033a0(local_1c,local_2c);
    local_4 = CONCAT31(local_4._1_3_,4);
    iVar7 = FUN_00421890(uVar4,param_1);
  }
  local_4 = 2;
  if (pvVar3 != (void *)0x0) {
    FUN_004040a0(1);
  }
  if (iVar7 == 0) {
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_1;
    local_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = CONCAT31(local_4._1_3_,6);
    pcVar2 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_RCSource_RcButt_0068f6e8
                                  ,0x2f,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  if (pcStack_28 != (char *)0x0) {
    cVar1 = pcStack_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(pcStack_28 + -1);
    }
    else {
      pcStack_28[-1] = cVar1 + -1;
    }
  }
  pcStack_28 = (char *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar7;
}

