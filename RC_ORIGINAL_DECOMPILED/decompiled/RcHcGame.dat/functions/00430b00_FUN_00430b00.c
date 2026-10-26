/*
 * FUN_00430b00 at 00430b00
 * undefined FUN_00430b00(void)
 * Address ranges: 00430b00-00430ff0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00430b00(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  undefined1 auStack_c0 [4];
  char *pcStack_bc;
  uint uStack_b8;
  void *pvStack_b0;
  undefined1 auStack_ac [4];
  char *pcStack_a8;
  undefined1 auStack_9c [16];
  undefined4 *local_8c;
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623822;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  local_8c = param_1;
  FUN_004d57b0();
  local_4 = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  FUN_0047f010(param_1);
  local_4._0_1_ = 1;
  FUN_00491860();
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 1;
  param_1[0xd1] = 1;
  param_1[0xd3] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)((int)param_1 + 0x372) = 0;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *param_1 = &PTR_FUN_0064c430;
  iVar5 = FUN_00431050();
  fVar14 = (float10)FUN_00431000();
  param_1[0xdd] = (float)(fVar14 * (float10)*(float *)(iVar5 + 0x818));
  iVar5 = FUN_00431050();
  fVar14 = (float10)FUN_00431000();
  param_1[0xde] = (float)(fVar14 * (float10)*(float *)(iVar5 + 0x81c));
  iVar5 = FUN_00431050();
  param_1[0xdf] = *(undefined4 *)(iVar5 + 0x820);
  iVar5 = FUN_00431050();
  param_1[0xe0] = *(undefined4 *)(iVar5 + 0x824);
  iVar5 = FUN_00431050();
  param_1[0xe1] = *(undefined4 *)(iVar5 + 0x828);
  iVar5 = FUN_00431050();
  uVar7 = *(undefined4 *)(iVar5 + 0x82c);
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0xe2] = uVar7;
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  iVar5 = FUN_0060a6f2(iVar5,0,&CAdamApplication::RTTI_Type_Descriptor,
                       &CRCApplication::RTTI_Type_Descriptor,1);
  if (*(int *)(iVar5 + 0x3a4) == 0) {
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_9c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar10 = 0xffffffff;
  pcVar12 = s_Player_006902e0;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar4 != '\0');
  uVar10 = ~uVar10 - 1;
  cVar4 = FUN_00401940(uVar10,1);
  if (cVar4 != '\0') {
    pcVar12 = s_Player_006902e0;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcStack_a8 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcStack_a8 = pcStack_a8 + 4;
    }
    for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcStack_a8 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcStack_a8 = pcStack_a8 + 1;
    }
    FUN_00404190(uVar10);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004040a0(0);
  uVar10 = 0xffffffff;
  pcVar12 = s_ControlMode_006902d4;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar4 != '\0');
  uVar10 = ~uVar10 - 1;
  cVar4 = FUN_00401940(uVar10,1);
  if (cVar4 != '\0') {
    pcVar12 = s_ControlMode_006902d4;
    pcVar13 = pcStack_bc;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00404190(uVar10);
  }
  local_4._0_1_ = 6;
  uVar7 = FUN_00436f90(auStack_88);
  local_4 = CONCAT31(local_4._1_3_,7);
  iVar8 = FUN_005ac9d0(auStack_c0,auStack_ac,0,uVar7,0);
  iVar5 = *(int *)(iVar8 + 100);
  if (iVar5 == -0x80000000) {
    puVar9 = *(undefined1 **)(iVar8 + 0x18);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar9);
    *(int *)(iVar8 + 100) = iVar5;
  }
  param_1[0xcf] = iVar5;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  FUN_00431260();
  pvStack_b0 = operator_new(0x388);
  local_4._0_1_ = 8;
  if (pvStack_b0 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_targetcursor_006902c4;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_targetcursor_006902c4;
      pcVar13 = pcStack_bc;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      pcStack_bc[uVar10] = '\0';
      uStack_b8 = uVar10;
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    uVar7 = FUN_005033a0(auStack_88,auStack_c0);
    bVar3 = true;
    bVar2 = true;
    local_4 = 10;
    iVar5 = FUN_0046fe10(uVar7);
  }
  piVar1 = param_1 + 0xcd;
  local_4 = 0xb;
  *piVar1 = iVar5;
  if (bVar2) {
    FUN_004040a0(1);
  }
  local_4 = 3;
  if ((bVar3) && (pcStack_bc != (char *)0x0)) {
    cVar4 = pcStack_bc[-1];
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0(pcStack_bc + -1);
    }
    else {
      pcStack_bc[-1] = cVar4 + -1;
    }
  }
  if (*piVar1 != 0) {
    FUN_00509a90(*piVar1,piVar1);
  }
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  iVar8 = *(int *)(iVar5 + 0x4e8);
  if (iVar8 == -0x80000000) {
    puVar9 = *(undefined1 **)(iVar5 + 0x49c);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar9);
    *(int *)(iVar5 + 0x4e8) = iVar8;
  }
  if (iVar8 == 0) {
    FUN_00431dc0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

