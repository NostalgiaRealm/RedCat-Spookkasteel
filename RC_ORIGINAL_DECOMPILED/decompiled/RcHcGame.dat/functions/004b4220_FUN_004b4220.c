/*
 * FUN_004b4220 at 004b4220
 * undefined FUN_004b4220(void)
 * Address ranges: 004b4220-004b4731
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b4220(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int local_4c [4];
  undefined1 uStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  char *pcStack_28;
  undefined1 auStack_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062eb59;
  local_c = ExceptionList;
  piVar10 = (int *)0x0;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &local_c;
  FUN_005ae5f0();
  iVar7 = -1;
  local_4 = 0;
  pcVar11 = (char *)param_1[10];
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  if (iVar7 == -2) {
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = local_c;
    return (int *)0x0;
  }
  iVar7 = -1;
  pcVar11 = (char *)*param_1;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  if (iVar7 == -2) {
    local_2c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar7 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  local_4c[0] = CONCAT31(local_4c[0]._1_3_,param_1._0_1_);
  FUN_004040a0();
  iVar7 = -1;
  pcVar11 = (char *)param_1[0xb];
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  local_4._0_1_ = 2;
  if (iVar7 == -2) {
    FUN_005ae390();
    local_4._0_1_ = 4;
    FUN_0040cc00();
  }
  else {
    FUN_005ae390();
    local_4._0_1_ = 3;
    FUN_0040cc00();
  }
  local_4._0_1_ = 2;
  FUN_004040a0();
  param_1 = operator_new(0x188);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (param_1 != (void *)0x0) {
    pcVar11 = (char *)puVar3[10];
    local_2c[0] = param_1._0_1_;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar13 = pcVar11;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar4 != '\0');
    cVar4 = FUN_00401940();
    if (cVar4 != '\0') {
      for (uVar9 = ~uVar8 - 1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcStack_28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcStack_28 = pcStack_28 + 4;
      }
      for (uVar8 = ~uVar8 - 1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcStack_28 = pcStack_28 + 1;
      }
      FUN_00404190();
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00429a30(local_4c);
    local_4 = 7;
    uVar6 = FUN_005033f0(auStack_1c,*puVar3,s_BitmapScroller_00696eb8);
    bVar2 = true;
    bVar1 = true;
    local_4 = 9;
    piVar10 = (int *)FUN_004b3ef0(uVar6,local_2c);
  }
  local_4 = 10;
  if (bVar1) {
    FUN_004040a0();
  }
  local_4 = 2;
  if (bVar2) {
    FUN_004040a0();
  }
  if (piVar10 == (int *)0x0) {
    uStack_3c = param_1._0_1_;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    param_1 = (undefined4 *)(~uVar8 - 1);
    cVar4 = FUN_00401940();
    if (cVar4 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      puVar14 = puStack_38;
      for (uVar8 = (uint)param_1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar8 = (uint)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0xc;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  pcVar11 = (char *)puVar3[1];
  uStack_3c = param_1._0_1_;
  FUN_004040a0();
  local_4._0_1_ = 0xd;
  if (pcVar11 != (char *)0x0) {
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0();
  }
  FUN_0040cc00();
  local_4._0_1_ = 2;
  FUN_004040a0();
  *(bool *)(piVar10 + 0x28) = puVar3[0xe] != 0;
  piVar10[0x29] = puVar3[9];
  pcVar11 = (char *)*puVar3;
  uStack_3c = param_1._0_1_;
  FUN_004040a0();
  local_4._0_1_ = 0xe;
  if (pcVar11 == (char *)0x0) {
    iVar7 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
  }
  else {
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
  }
  FUN_004040f0();
  FUN_00503ae0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  pcVar11 = (char *)puVar3[1];
  uStack_3c = param_1._0_1_;
  FUN_004040a0();
  local_4._0_1_ = 0xf;
  if (pcVar11 != (char *)0x0) {
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0();
  }
  FUN_0040cc00();
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puStack_38 != (undefined4 *)0x0) {
    cVar4 = *(char *)((int)puStack_38 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)((int)puStack_38 + -1) = cVar4 + -1;
    }
  }
  puStack_38 = (undefined4 *)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  (**(code **)(*piVar10 + 0x4c))();
  FUN_004b9540();
  FUN_00502350();
  if (local_4c[0] != 0) {
    cVar4 = *(char *)(local_4c[0] + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_4c[0] + -1) = cVar4 + -1;
    }
  }
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_10;
  return piVar10;
}

