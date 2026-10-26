/*
 * FUN_004b8740 at 004b8740
 * undefined FUN_004b8740(void)
 * Address ranges: 004b8740-004b8c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b8740(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 unaff_retaddr;
  void *pvStack_60;
  char *pcStack_5c;
  char *pcStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  undefined4 *puStack_48;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f16f;
  local_c = ExceptionList;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006971b0,0x8a);
  local_4 = 0;
  FUN_00519ef0();
  iVar7 = FUN_004337e0();
  if (iVar7 != 0) {
    FUN_005181b0();
    iVar7 = FUN_004337e0();
    if (iVar7 != 0) {
      FUN_005afe30(s_CAdamTextureTextScrollAnimator___00697228);
    }
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = local_c;
    return (int *)0x0;
  }
  iVar7 = -1;
  pcVar14 = (char *)param_1[10];
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar6 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar6 != '\0');
  if (iVar7 == -2) {
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = local_c;
    return (int *)0x0;
  }
  iVar7 = -1;
  pcVar14 = (char *)*param_1;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar6 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar6 != '\0');
  if (iVar7 == -2) {
    local_4c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar6 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
    local_4._0_1_ = 1;
    pcVar8 = (code *)FUN_005a07f0(s_strlen_a_Entity_>DaviName__>_0_00696ee0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006971b0,0x99,local_4c);
    (*pcVar8)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  pvStack_60 = operator_new(0x18c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvStack_60 == (void *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    pcVar14 = (char *)param_1[0xb];
    pcStack_5c = (char *)CONCAT31(pcStack_5c._1_3_,param_1._0_1_);
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar12 = pcVar14;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar6 != '\0');
    param_1 = (undefined4 *)(~uVar11 - 1);
    cVar6 = FUN_00401940(param_1,1);
    if (cVar6 != '\0') {
      pcVar12 = pcStack_58;
      for (uVar11 = (uint)param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = (uint)param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404190(param_1);
    }
    pcVar14 = (char *)puVar5[0xc];
    local_4 = CONCAT31(local_4._1_3_,3);
    auStack_2c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar12 = pcVar14;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar6 != '\0');
    FUN_004040f0(pcVar14,~uVar11 - 1);
    pcVar14 = (char *)puVar5[10];
    local_4 = 4;
    auStack_3c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar12 = pcVar14;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar6 != '\0');
    FUN_004040f0(pcVar14,~uVar11 - 1);
    local_4 = 5;
    uVar9 = FUN_005033f0(auStack_1c,*puVar5,s_TextScroller_00697218);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    local_4 = 6;
    piVar10 = (int *)FUN_004b7f90(uVar9,auStack_3c,auStack_2c,&pcStack_5c,puVar5[7],puVar5[8],
                                  puVar5[5],puVar5[6]);
  }
  local_4 = 9;
  if (bVar1) {
    FUN_004040a0(1);
  }
  local_4 = 8;
  if (bVar2) {
    FUN_004040a0(1);
  }
  local_4 = 7;
  if (bVar3) {
    FUN_004040a0(1);
  }
  local_4 = 0;
  if (bVar4) {
    FUN_004040a0(1);
  }
  if (piVar10 == (int *)0x0) {
    local_4c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar6 != '\0');
    param_1 = (undefined4 *)(~uVar11 - 1);
    cVar6 = FUN_00401940(param_1,1);
    if (cVar6 != '\0') {
      puVar13 = (undefined4 *)&DAT_006b3f70;
      for (uVar11 = (uint)param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puStack_48 = *puVar13;
        puVar13 = puVar13 + 1;
        puStack_48 = puStack_48 + 1;
      }
      for (uVar11 = (uint)param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puStack_48 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puStack_48 = (undefined4 *)((int)puStack_48 + 1);
      }
      FUN_00404190(param_1);
    }
    local_4._0_1_ = 0xb;
    pcVar8 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_AdamSource_Adam_006971b0
                                  ,0xa5,local_4c);
    (*pcVar8)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  pcVar14 = (char *)puVar5[1];
  local_4c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4._0_1_ = 0xc;
  if (pcVar14 != (char *)0x0) {
    uVar11 = 0xffffffff;
    pcVar12 = pcVar14;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar6 != '\0');
    FUN_004040f0(pcVar14,~uVar11 - 1);
  }
  FUN_0040cc00(local_4c,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  *(bool *)(piVar10 + 0x28) = puVar5[0xf] != 0;
  piVar10[0x29] = puVar5[9];
  (**(code **)(*piVar10 + 0x4c))(puVar5 + 2);
  FUN_004b9540(1);
  FUN_00502350(puVar5[0xe] != 0);
  pcVar14 = (char *)*puVar5;
  pvStack_60 = (void *)CONCAT31(pvStack_60._1_3_,unaff_retaddr);
  FUN_004040a0(0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
  if (pcVar14 == (char *)0x0) {
    uVar11 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar6 != '\0');
    pcVar12 = (char *)(~uVar11 - 1);
    cVar6 = FUN_00401940(pcVar12,1);
    if (cVar6 == '\0') goto LAB_004b8c16;
    pcVar14 = &DAT_006b3f70;
  }
  else {
    uVar11 = 0xffffffff;
    pcVar12 = pcVar14;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar6 != '\0');
    pcVar12 = (char *)(~uVar11 - 1);
    cVar6 = FUN_00401940(pcVar12,1);
    if (cVar6 == '\0') goto LAB_004b8c16;
  }
  pcVar15 = pcStack_5c;
  for (uVar11 = (uint)pcVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar11 = (uint)pcVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar15 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcStack_5c[(int)pcVar12] = '\0';
  pcStack_58 = pcVar12;
LAB_004b8c16:
  FUN_00503ae0(&pvStack_60);
  if (pcStack_5c != (char *)0x0) {
    cVar6 = pcStack_5c[-1];
    if ((cVar6 == '\0') || (cVar6 == -1)) {
      FUN_005fe5f0(pcStack_5c + -1);
    }
    else {
      pcStack_5c[-1] = cVar6 + -1;
    }
  }
  pcStack_5c = (char *)0x0;
  pcStack_58 = (char *)0x0;
  uStack_54 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_10;
  return piVar10;
}

