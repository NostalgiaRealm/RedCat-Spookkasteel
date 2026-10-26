/*
 * FUN_0053d320 at 0053d320
 * undefined FUN_0053d320(void)
 * Address ranges: 0053d320-0053dbd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053d320(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  undefined1 local_d9;
  undefined1 auStack_d8 [4];
  undefined4 *puStack_d4;
  undefined1 auStack_c8 [4];
  char *pcStack_c4;
  uint uStack_b8;
  undefined1 uStack_b1;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 local_a0 [16];
  undefined1 local_90 [132];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c1ee;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_d9);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_a0);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  puVar4 = (undefined1 *)FUN_0043b0a0(local_90);
  auStack_b0[0] = *puVar4;
  local_4 = 1;
  FUN_004040a0(0);
  FUN_0040cc00(puVar4,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0x3c) == 0) {
    auStack_d8[0] = local_d9;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = s_CAdamInput_006a1274;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CAdamInput_006a1274,~uVar6 - 1);
    local_4._0_1_ = 4;
    uVar5 = FUN_005aa760(auStack_d8,0);
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Mouse_006a126c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Mouse_006a126c,~uVar6 - 1);
  local_4._0_1_ = 5;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Sensitivity_006a1260;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Sensitivity_006a1260,~uVar6 - 1);
  local_4._0_1_ = 6;
  iVar2 = FUN_005a3d10(auStack_d8,auStack_c8,0x42480000,0,0x42c80000,auStack_b0);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d9);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 6;
  *(float *)(param_1 + 0x40) = (float)(fVar11 * (float10)0.01);
  FUN_005a3ce0();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Mouse_006a126c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Mouse_006a126c,~uVar6 - 1);
  local_4._0_1_ = 8;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Inverse_006a1258;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Inverse_006a1258,~uVar6 - 1);
  local_4._0_1_ = 9;
  FUN_005ac9d0(auStack_d8,auStack_c8,0,auStack_b0,0);
  local_4._0_1_ = 10;
  iVar2 = FUN_004337e0();
  *(bool *)(param_1 + 0x44) = iVar2 != 0;
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Mouse_006a126c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Mouse_006a126c,~uVar6 - 1);
  local_4._0_1_ = 0xb;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006a1250;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a1250,~uVar6 - 1);
  local_4._0_1_ = 0xc;
  FUN_005ac9d0(auStack_d8,auStack_c8,1,auStack_b0,0);
  local_4._0_1_ = 0xd;
  iVar2 = FUN_004337e0();
  *(bool *)(param_1 + 0x45) = iVar2 != 0;
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Mouse_006a126c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Mouse_006a126c,~uVar6 - 1);
  local_4._0_1_ = 0xe;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Allowed_006a1248;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Allowed_006a1248,~uVar6 - 1);
  local_4._0_1_ = 0xf;
  FUN_005ac9d0(auStack_d8,auStack_c8,1,auStack_b0,0);
  local_4._0_1_ = 0x10;
  iVar2 = FUN_004337e0();
  *(bool *)(param_1 + 0x46) = iVar2 != 0;
  local_4._0_1_ = 0xf;
  FUN_005acca0();
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&DAT_006a123c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a123c,~uVar6 - 1);
  local_4._0_1_ = 0x11;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_AlwaysRun_006a1230;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AlwaysRun_006a1230,~uVar6 - 1);
  local_4._0_1_ = 0x12;
  FUN_005ac9d0(auStack_d8,auStack_c8,1,auStack_b0,0);
  local_4._0_1_ = 0x13;
  iVar2 = FUN_004337e0();
  *(bool *)(param_1 + 0x50) = iVar2 != 0;
  local_4._0_1_ = 0x12;
  FUN_005acca0();
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&DAT_006a123c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uStack_b8 = uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = (char *)&DAT_006a123c;
    pcVar10 = pcStack_c4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 0x14;
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_XLookSensitivity_006a121c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_XLookSensitivity_006a121c,~uVar6 - 1);
  local_4._0_1_ = 0x15;
  iVar2 = FUN_005a3d10(auStack_d8,auStack_c8,0x41480000,0,0x42c80000,auStack_b0);
  local_4._0_1_ = 0x16;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d9);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 0x15;
  *(float *)(param_1 + 0x48) = (float)(fVar11 * (float10)0.01);
  FUN_005a3ce0();
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  auStack_d8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&DAT_006a123c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uStack_b8 = uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar8 = &DAT_006a123c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puStack_d4 = *puVar8;
      puVar8 = puVar8 + 1;
      puStack_d4 = puStack_d4 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puStack_d4 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puStack_d4 = (undefined4 *)((int)puStack_d4 + 1);
    }
    FUN_00404190(uVar6);
  }
  local_4 = CONCAT31(local_4._1_3_,0x17);
  auStack_c8[0] = local_d9;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_YLookSensitivity_006a1208;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uStack_b8 = uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_YLookSensitivity_006a1208;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_c4 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcStack_c4 = pcStack_c4 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_c4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcStack_c4 = pcStack_c4 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 0x18;
  iVar2 = FUN_005a3d10(auStack_c8,auStack_d8,0x41480000,0,0x42c80000,auStack_b0);
  local_4._0_1_ = 0x19;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&uStack_b1);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 0x18;
  *(float *)(param_1 + 0x4c) = (float)(fVar11 * (float10)0.01);
  FUN_005a3ce0();
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  if (iStack_ac != 0) {
    cVar1 = *(char *)(iStack_ac + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_ac + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_ac + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

