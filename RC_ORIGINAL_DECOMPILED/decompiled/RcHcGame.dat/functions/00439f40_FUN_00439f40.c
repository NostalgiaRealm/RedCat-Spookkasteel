/*
 * FUN_00439f40 at 00439f40
 * undefined FUN_00439f40(void)
 * Address ranges: 00439f40-0043ac12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00439f40(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  undefined1 local_1a9;
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [124];
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062436b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
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
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevel_IsNotNull___00690830,
                                  s_D__Work_RCHorror_RCSource_RcPlay_00690848,0x2f1,local_1a8);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_0043b0a0();
  local_4._0_1_ = 2;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_1a8[0] = local_1a9;
  local_4._0_1_ = 3;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_MaxHealth_00690634;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MaxHealth_00690634,~uVar7 - 1);
  local_4._0_1_ = 4;
  iVar4 = FUN_005ac8b0(local_1a8,auStack_198,DAT_006b58b4,local_188,0);
  local_4._0_1_ = 5;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_1a9);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x60);
  }
  *(float *)(param_1 + 0x40) = (float)fVar10;
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 3;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 6;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Health_0068fb70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Health_0068fb70,~uVar7 - 1);
  local_4._0_1_ = 7;
  iVar4 = FUN_005ac8b0(auStack_198,local_1a8,DAT_006b58b0,local_188,0);
  local_4._0_1_ = 8;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_1a9);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x60);
  }
  *(float *)(param_1 + 0x3c) = (float)fVar10;
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 9;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = (char *)&DAT_00690790;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_00690790,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,10);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b58ac,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x44) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 9;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0xb;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Score_00690768;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Score_00690768,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b58a4,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x48) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0xd;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_MagicPotion_00690784;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MagicPotion_00690784,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b5894,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x58) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0xd;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0xf;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_MirrorPart_00690778;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MirrorPart_00690778,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b588c,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x60) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0xf;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x11;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_MaxMirrorPart_00690820;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MaxMirrorPart_00690820,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b5888,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 100) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x11;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x13;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Skill_00690770;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Skill_00690770,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,0,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x68) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x13;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_1a8[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  auStack_198[0] = local_1a9;
  local_4._0_1_ = 0x15;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_TotalScore_0069075c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TotalScore_0069075c,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,DAT_006b58a4,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x15;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0();
  fVar1 = *(float *)(param_1 + 0x40);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_0069081c,(double)fVar1);
  FUN_005acdb0();
  uVar6 = __ftol();
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,CONCAT44(uVar6,&DAT_00690818));
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,uVar6);
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,uVar6);
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x60);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,CONCAT44(uVar6,&DAT_00690818));
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x68);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,uVar6);
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,uVar6);
  FUN_005acdb0();
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  puVar8 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,CONCAT44(uVar6,&DAT_00690818));
  FUN_005acdb0();
  local_1a8[0] = local_1a9;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_General_00690810,~uVar7 - 1);
  local_4._0_1_ = 0x17;
  auStack_198[0] = local_1a9;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00690804;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_00690804,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x18);
  iVar5 = FUN_005ac9d0(auStack_198,local_1a8,0,local_188,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar4;
  }
  FUN_005acca0();
  local_4._0_1_ = 0x17;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  if (iVar4 != 0) {
    if (param_2 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_1a9);
      local_4._0_1_ = 0x19;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_198);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    uVar6 = FUN_004f3d80(0,&CAdamSubLevelSettings::RTTI_Type_Descriptor,
                         &CRcSubLevelSettings::RTTI_Type_Descriptor,0);
    FUN_0060a6f2(uVar6);
    FUN_0049aef0();
    FUN_0051c500();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0();
  local_4 = 0xffffffff;
  if (param_2 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return;
}

