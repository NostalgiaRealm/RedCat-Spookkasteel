/*
 * FUN_0048db10 at 0048db10
 * undefined FUN_0048db10(void)
 * Address ranges: 0048db10-0048eda7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0048db10(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 *puStack_118;
  char *local_114;
  char *local_110;
  float *local_10c;
  float *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  undefined1 local_e5;
  float local_e4;
  undefined4 local_e0;
  char *local_dc;
  int local_d8;
  int local_d4;
  float local_d0;
  char *local_cc;
  float local_c8;
  float local_c0;
  undefined1 *local_bc;
  undefined1 auStack_b8 [16];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  char acStack_98 [4];
  int iStack_94;
  undefined1 local_88 [4];
  int local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b031;
  pvStack_c = ExceptionList;
  local_fc = s__Debriefing_ini_00693780;
  local_100 = (char *)0x48db41;
  ExceptionList = &pvStack_c;
  local_100 = (char *)FUN_005a1d60();
  local_104 = local_88;
  local_108 = (float *)0x48db4c;
  FUN_0040cad0();
  local_fc = (char *)0x0;
  local_4 = 0;
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_100 = (char *)0x48db70;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_fc = (char *)(~uVar5 - 1);
  local_100 = s_General_00690810;
  local_104 = (char *)0x48db87;
  FUN_004040f0();
  local_fc = (char *)0x0;
  local_4._0_1_ = 1;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_100 = (char *)0x48dba1;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_ScoreBar_X_006938f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_fc = (char *)(~uVar5 - 1);
  local_100 = s_ScoreBar_X_006938f4;
  local_104 = (char *)0x48dbbf;
  FUN_004040f0();
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 2;
  local_110 = (char *)0x48dbe4;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 3;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48dc0c;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_a8 = (float)fVar9;
  }
  else {
    local_a8 = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 2;
  local_fc = (char *)0x48dc33;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 1;
  local_100 = (char *)0x48dc46;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 0;
  local_100 = (char *)0x48dc58;
  FUN_004040a0();
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_fc = (char *)0x0;
  local_100 = (char *)0x48dc70;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_fc = (char *)(~uVar5 - 1);
  local_100 = s_General_00690810;
  local_104 = (char *)0x48dc87;
  FUN_004040f0();
  local_fc = (char *)0x0;
  local_4._0_1_ = 4;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_100 = (char *)0x48dca1;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_ScoreBar_Y_006938e8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_fc = (char *)(~uVar5 - 1);
  local_100 = s_ScoreBar_Y_006938e8;
  local_104 = (char *)0x48dcbf;
  FUN_004040f0();
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 5;
  local_110 = (char *)0x48dce4;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 6;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48dd0c;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_a4 = (float)fVar9;
  }
  else {
    local_a4 = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 5;
  local_fc = (char *)0x48dd33;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 4;
  local_100 = (char *)0x48dd46;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_100 = (char *)0x48dd58;
  FUN_004040a0();
  local_fc = (char *)0x0;
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_100 = (char *)0x48dd70;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48dd8e;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar8 = local_dc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48ddb2;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_fc = (char *)0x0;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_4._0_1_ = 7;
  local_100 = (char *)0x48ddcc;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_ScoreBar_Width_006938d8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_fc = (char *)(~uVar5 - 1);
  local_100 = s_ScoreBar_Width_006938d8;
  local_104 = (char *)0x48ddea;
  FUN_004040f0();
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 8;
  local_110 = (char *)0x48de0f;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 9;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48de37;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
  }
  local_4._0_1_ = 8;
  local_fc = (char *)0x48de51;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 7;
  local_100 = (char *)0x48de64;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_100 = (char *)0x48de76;
  FUN_004040a0();
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_fc = (char *)0x0;
  local_100 = (char *)0x48de8e;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48deac;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar8 = local_cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48ded0;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_fc = (char *)0x0;
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_4 = CONCAT31(local_4._1_3_,10);
  local_100 = (char *)0x48deea;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_ScoreBar_Height_006938c8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48df0b;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_ScoreBar_Height_006938c8;
    pcVar8 = local_dc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48df34;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = &local_d0;
  local_104 = (char *)0x0;
  local_10c = (float *)&local_e0;
  local_4._0_1_ = 0xb;
  local_110 = (char *)0x48df59;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 0xc;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48df81;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_9c = (float)fVar9;
  }
  else {
    local_9c = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0xb;
  local_fc = (char *)0x48dfa8;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 10;
  local_100 = (char *)0x48dfbb;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_100 = (char *)0x48dfcd;
  FUN_004040a0();
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_fc = (char *)0x0;
  local_100 = (char *)0x48dfe5;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e003;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar8 = local_dc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48e027;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_fc = (char *)0x0;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  local_100 = (char *)0x48e041;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_ScoreBar_TitleX_006938b8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e062;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_ScoreBar_TitleX_006938b8;
    pcVar8 = local_cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48e08b;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 0xe;
  local_110 = (char *)0x48e0b0;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 0xf;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48e0d8;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_a0 = (float)fVar9;
  }
  else {
    local_a0 = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0xe;
  local_fc = (char *)0x48e0ff;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 0xd;
  local_100 = (char *)0x48e112;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_100 = (char *)0x48e124;
  FUN_004040a0();
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_fc = (char *)0x0;
  local_100 = (char *)0x48e13c;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e15a;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar8 = local_dc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48e17e;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_fc = (char *)0x0;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  local_100 = (char *)0x48e198;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_ScoreBar_ScoreX_006938a8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e1b9;
  local_100 = (char *)uVar5;
  local_e4 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_ScoreBar_ScoreX_006938a8;
    pcVar8 = local_cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48e1e2;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 0x11;
  local_110 = (char *)0x48e207;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 0x12;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48e22f;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_e4 = (float)fVar9;
  }
  else {
    local_e4 = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0x11;
  local_fc = (char *)0x48e256;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 0x10;
  local_100 = (char *)0x48e269;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_100 = (char *)0x48e27b;
  FUN_004040a0();
  local_e0 = CONCAT31(local_e0._1_3_,local_e5);
  local_fc = (char *)0x0;
  local_100 = (char *)0x48e293;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e2b1;
  local_100 = (char *)uVar5;
  local_c0 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar8 = local_dc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_100 = (char *)0x48e2d5;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_fc = (char *)0x0;
  local_d0 = (float)CONCAT31(local_d0._1_3_,local_e5);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  local_100 = (char *)0x48e2ef;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_fc = (char *)0x1;
  pcVar7 = s_ScoreBar_OffsetY_00693894;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_104 = (char *)0x48e310;
  local_100 = (char *)uVar5;
  local_c0 = (float)uVar5;
  cVar2 = FUN_00401940();
  if (cVar2 != '\0') {
    pcVar7 = s_ScoreBar_OffsetY_00693894;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_cc = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_cc = local_cc + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_cc = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_cc = local_cc + 1;
    }
    local_100 = (char *)0x48e339;
    local_fc = (char *)uVar5;
    FUN_00404190();
  }
  local_100 = local_88;
  local_fc = (char *)0x0;
  local_108 = (float *)&local_e0;
  local_104 = (char *)0x0;
  local_10c = &local_d0;
  local_4._0_1_ = 0x14;
  local_110 = (char *)0x48e35e;
  iVar3 = FUN_005ac9d0();
  local_4._0_1_ = 0x15;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    local_fc = &local_e5;
    local_100 = (char *)(iVar3 + 0x14);
    local_104 = (char *)0x48e386;
    fVar9 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x60) = (float)fVar9;
    local_c0 = (float)fVar9;
  }
  else {
    local_c0 = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0x14;
  local_fc = (char *)0x48e3ad;
  FUN_005acca0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 0x13;
  local_100 = (char *)0x48e3c0;
  FUN_004040a0();
  local_fc = (char *)0x1;
  local_4._0_1_ = 0;
  local_100 = (char *)0x48e3d2;
  FUN_004040a0();
  if (DAT_006c8de0 == 0) {
    local_fc = (char *)0x48e3e1;
    FUN_0055b280();
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    local_fc = (char *)0x0;
    local_104 = (char *)(param_1 + 0x180);
    local_100 = (char *)0x437f0000;
    puStack_118 = (undefined1 *)&local_114;
    local_114 = *(char **)(param_1 + 0x170);
    local_110 = *(char **)(param_1 + 0x174);
    local_10c = *(float **)(param_1 + 0x178);
    local_108 = *(float **)(param_1 + 0x17c);
    local_bc = (undefined1 *)&puStack_118;
    FUN_00449760(param_1 + 0x16c);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 400) != 0) {
    local_e0 = *(undefined4 *)(param_1 + 0x1a4);
    local_dc = *(char **)(param_1 + 0x1a8);
    local_d8 = *(int *)(param_1 + 0x1ac);
    local_d4 = *(int *)(param_1 + 0x1b0);
    local_fc = (char *)0x48e476;
    iVar3 = FUN_00529a70();
    iVar3 = iVar3 * (*(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac));
    local_d8 = local_d8 + iVar3;
    local_fc = (char *)0x0;
    local_104 = (char *)&local_e0;
    local_100 = (char *)0x437f0000;
    local_d4 = local_d4 + iVar3;
    puStack_118 = (undefined1 *)&local_114;
    local_114 = *(char **)(param_1 + 0x194);
    local_110 = *(char **)(param_1 + 0x198);
    local_10c = *(float **)(param_1 + 0x19c);
    local_108 = *(float **)(param_1 + 0x1a0);
    local_bc = (undefined1 *)&puStack_118;
    FUN_00449760(param_1 + 400);
    FUN_005614e0();
  }
  local_fc = *(char **)(param_1 + 0x210);
  local_100 = *(char **)(param_1 + 0x20c);
  local_104 = *(char **)(param_1 + 0x208);
  local_108 = (float *)(param_1 + 0x1f8);
  local_10c = (float *)(param_1 + 0x1e8);
  local_110 = (char *)(param_1 + 0x1d8);
  local_114 = (char *)(param_1 + 0x1d4);
  puStack_118 = (undefined1 *)0x0;
  FUN_0048edb0();
  local_fc = *(char **)(param_1 + 0x250);
  local_100 = *(char **)(param_1 + 0x24c);
  local_104 = *(char **)(param_1 + 0x248);
  local_108 = (float *)(param_1 + 0x238);
  local_10c = (float *)(param_1 + 0x228);
  local_110 = (char *)(param_1 + 0x218);
  local_114 = (char *)(param_1 + 0x214);
  puStack_118 = (undefined1 *)0x1;
  FUN_0048edb0();
  local_fc = *(char **)(param_1 + 0x290);
  local_100 = *(char **)(param_1 + 0x28c);
  local_104 = *(char **)(param_1 + 0x288);
  local_108 = (float *)(param_1 + 0x278);
  local_10c = (float *)(param_1 + 0x268);
  local_110 = (char *)(param_1 + 600);
  local_114 = (char *)(param_1 + 0x254);
  puStack_118 = (undefined1 *)0x2;
  FUN_0048edb0();
  local_fc = *(char **)(param_1 + 0x2d0);
  local_100 = *(char **)(param_1 + 0x2cc);
  local_104 = *(char **)(param_1 + 0x2c8);
  local_108 = (float *)(param_1 + 0x2b8);
  local_10c = (float *)(param_1 + 0x2a8);
  local_110 = (char *)(param_1 + 0x298);
  local_114 = (char *)(param_1 + 0x294);
  puStack_118 = (undefined1 *)0x3;
  FUN_0048edb0();
  if (*(int *)(param_1 + 0x108) != 0) {
    local_d0 = local_a8 * 0.0015625;
    local_c8 = (local_9c * 5.0 + local_a4) * 0.0020833334;
    if (*(int *)(param_1 + 0x108) == 0) {
      local_fc = (char *)0x0;
      local_e0 = CONCAT31(local_e0._1_3_,local_e5);
      local_100 = (char *)0x48e60c;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      local_fc = (char *)(~uVar5 - 1);
      local_100 = &DAT_006b3f70;
      local_104 = (char *)0x48e62a;
      FUN_004040f0();
      local_fc = (char *)&local_e0;
      local_4._0_1_ = 0x16;
      local_100 = (char *)0xb6;
      local_104 = s___AdamSource_DaviRC_h_0068d638;
      local_108 = (float *)s_m_Pointer_0068d62c;
      local_10c = (float *)0x48e64b;
      pcVar4 = (code *)FUN_005a07f0();
      local_10c = (float *)0x48e64d;
      (*pcVar4)();
      local_4._0_1_ = 0;
      local_fc = (char *)0x1;
      local_100 = (char *)0x48e662;
      FUN_004040a0();
    }
    local_10c = (float *)(local_c8 + 0.0020833334);
    local_108 = (float *)0x437f0000;
    local_104 = (char *)0x437f0000;
    local_100 = (char *)0x437f0000;
    local_fc = (char *)0x437f0000;
    local_114 = (char *)(param_1 + 0x11c);
    local_110 = (char *)(local_a0 * 0.0015625 + local_d0);
    puStack_118 = (undefined1 *)0x48e6b8;
    FUN_004b1150();
    local_fc = *(char **)(param_1 + 0x2e0);
    local_104 = acStack_98;
    local_100 = &DAT_00690818;
    local_108 = (float *)0x48e6ce;
    FUN_005ae390();
    local_4._0_1_ = 0x17;
    if (*(int *)(param_1 + 0x108) == 0) {
      local_fc = (char *)0x0;
      local_e0 = CONCAT31(local_e0._1_3_,local_e5);
      local_100 = (char *)0x48e6f5;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      local_fc = (char *)(~uVar5 - 1);
      local_100 = &DAT_006b3f70;
      local_104 = (char *)0x48e713;
      FUN_004040f0();
      local_fc = (char *)&local_e0;
      local_4._0_1_ = 0x18;
      local_100 = (char *)0xb6;
      local_104 = s___AdamSource_DaviRC_h_0068d638;
      local_108 = (float *)s_m_Pointer_0068d62c;
      local_10c = (float *)0x48e734;
      pcVar4 = (code *)FUN_005a07f0();
      local_10c = (float *)0x48e736;
      (*pcVar4)();
      local_4._0_1_ = 0x17;
      local_fc = (char *)0x1;
      local_100 = (char *)0x48e74c;
      FUN_004040a0();
    }
    if (*(int *)(param_1 + 0x108) == 0) {
      local_fc = (char *)0x0;
      auStack_b8[0] = local_e5;
      local_100 = (char *)0x48e76a;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      local_fc = (char *)(~uVar5 - 1);
      local_100 = &DAT_006b3f70;
      local_104 = (char *)0x48e788;
      FUN_004040f0();
      local_fc = auStack_b8;
      local_4._0_1_ = 0x19;
      local_100 = (char *)0xb6;
      local_104 = s___AdamSource_DaviRC_h_0068d638;
      local_108 = (float *)s_m_Pointer_0068d62c;
      local_10c = (float *)0x48e7a9;
      pcVar4 = (code *)FUN_005a07f0();
      local_10c = (float *)0x48e7ab;
      (*pcVar4)();
      local_4._0_1_ = 0x17;
      local_fc = (char *)0x1;
      local_100 = (char *)0x48e7c1;
      FUN_004040a0();
    }
    local_10c = (float *)(local_c0 * 0.0020833334 + local_c8);
    local_108 = (float *)0x437f0000;
    local_104 = (char *)0x437f0000;
    local_100 = (char *)0x437f0000;
    local_fc = (char *)0x437f0000;
    local_110 = acStack_98;
    local_bc = (undefined1 *)(local_e4 * 0.0015625 + local_d0);
    local_114 = (char *)0x48e81f;
    fVar9 = (float10)FUN_004b21b0();
    local_114 = acStack_98;
    local_110 = (char *)(float)((float10)(float)local_bc - fVar9);
    puStack_118 = (undefined1 *)0x48e833;
    FUN_004b1150();
    local_fc = (char *)0x1;
    local_4._0_1_ = 0;
    local_100 = (char *)0x48e845;
    FUN_004040a0();
    if (*(int *)(param_1 + 0x108) != 0) {
      local_d0 = local_a8 * 0.0015625;
      local_c8 = (local_9c * 6.0 + local_a4) * 0.0020833334;
      if (*(int *)(param_1 + 0x108) == 0) {
        local_fc = (char *)0x0;
        auStack_b8[0] = local_e5;
        local_100 = (char *)0x48e88f;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        local_fc = (char *)(~uVar5 - 1);
        local_100 = &DAT_006b3f70;
        local_104 = (char *)0x48e8ad;
        FUN_004040f0();
        local_fc = auStack_b8;
        local_4._0_1_ = 0x1a;
        local_100 = (char *)0xb6;
        local_104 = s___AdamSource_DaviRC_h_0068d638;
        local_108 = (float *)s_m_Pointer_0068d62c;
        local_10c = (float *)0x48e8ce;
        pcVar4 = (code *)FUN_005a07f0();
        local_10c = (float *)0x48e8d0;
        (*pcVar4)();
        local_4._0_1_ = 0;
        local_fc = (char *)0x1;
        local_100 = (char *)0x48e8e5;
        FUN_004040a0();
      }
      local_10c = (float *)(local_c0 * 0.0020833334 + local_c8);
      local_108 = (float *)0x437f0000;
      local_104 = (char *)0x437f0000;
      local_100 = (char *)0x437f0000;
      local_fc = (char *)0x437f0000;
      local_114 = (char *)(param_1 + 300);
      local_110 = (char *)(local_a0 * 0.0015625 + local_d0);
      puStack_118 = (undefined1 *)0x48e93f;
      FUN_004b1150();
      local_fc = (char *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d4));
      local_104 = acStack_98;
      local_100 = &DAT_00690818;
      local_108 = (float *)0x48e95d;
      FUN_005ae390();
      local_4._0_1_ = 0x1b;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x1b;
      if (*(int *)(param_1 + 0x108) == 0) {
        local_fc = (char *)0x0;
        auStack_b8[0] = local_e5;
        local_100 = (char *)0x48e984;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        local_fc = (char *)(~uVar5 - 1);
        local_100 = &DAT_006b3f70;
        local_104 = (char *)0x48e9a2;
        FUN_004040f0();
        local_fc = auStack_b8;
        local_4._0_1_ = 0x1c;
        local_100 = (char *)0xb6;
        local_104 = s___AdamSource_DaviRC_h_0068d638;
        local_108 = (float *)s_m_Pointer_0068d62c;
        local_10c = (float *)0x48e9c3;
        pcVar4 = (code *)FUN_005a07f0();
        local_10c = (float *)0x48e9c5;
        (*pcVar4)();
        local_4._0_1_ = 0x1b;
        local_fc = (char *)0x1;
        local_100 = (char *)0x48e9db;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      if (*(int *)(param_1 + 0x108) == 0) {
        local_fc = (char *)0x0;
        local_e0 = CONCAT31(local_e0._1_3_,local_e5);
        local_100 = (char *)0x48e9f9;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        local_fc = (char *)(~uVar5 - 1);
        local_100 = &DAT_006b3f70;
        local_104 = (char *)0x48ea17;
        FUN_004040f0();
        local_fc = (char *)&local_e0;
        local_4._0_1_ = 0x1d;
        local_100 = (char *)0xb6;
        local_104 = s___AdamSource_DaviRC_h_0068d638;
        local_108 = (float *)s_m_Pointer_0068d62c;
        local_10c = (float *)0x48ea38;
        pcVar4 = (code *)FUN_005a07f0();
        local_10c = (float *)0x48ea3a;
        (*pcVar4)();
        local_4._0_1_ = 0x1b;
        local_fc = (char *)0x1;
        local_100 = (char *)0x48ea50;
        FUN_004040a0();
      }
      local_10c = (float *)(local_c0 * 0.0020833334 + local_c8);
      local_108 = (float *)0x437f0000;
      local_104 = (char *)0x437f0000;
      local_100 = (char *)0x437f0000;
      local_fc = (char *)0x437f0000;
      local_110 = acStack_98;
      local_bc = (undefined1 *)(local_e4 * 0.0015625 + local_d0);
      local_114 = (char *)0x48eaae;
      fVar9 = (float10)FUN_004b21b0();
      local_114 = acStack_98;
      local_110 = (char *)(float)((float10)(float)local_bc - fVar9);
      puStack_118 = (undefined1 *)0x48eac2;
      FUN_004b1150();
      local_fc = (char *)0x1;
      local_4._0_1_ = 0;
      local_100 = (char *)0x48ead4;
      FUN_004040a0();
      if (*(int *)(param_1 + 0x108) != 0) {
        local_d0 = local_a8 * 0.0015625;
        local_c8 = (local_9c * 7.0 + local_a4) * 0.0020833334;
        if (*(int *)(param_1 + 0x108) == 0) {
          local_fc = (char *)0x0;
          auStack_b8[0] = local_e5;
          local_100 = (char *)0x48eb1e;
          FUN_004040a0();
          uVar5 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          local_fc = (char *)(~uVar5 - 1);
          local_100 = &DAT_006b3f70;
          local_104 = (char *)0x48eb3c;
          FUN_004040f0();
          local_fc = auStack_b8;
          local_4._0_1_ = 0x1e;
          local_100 = (char *)0xb6;
          local_104 = s___AdamSource_DaviRC_h_0068d638;
          local_108 = (float *)s_m_Pointer_0068d62c;
          local_10c = (float *)0x48eb5d;
          pcVar4 = (code *)FUN_005a07f0();
          local_10c = (float *)0x48eb5f;
          (*pcVar4)();
          local_4._0_1_ = 0;
          local_fc = (char *)0x1;
          local_100 = (char *)0x48eb74;
          FUN_004040a0();
        }
        local_10c = (float *)(local_c8 + 0.0020833334);
        local_108 = (float *)0x437f0000;
        local_104 = (char *)0x437f0000;
        local_100 = (char *)0x437f0000;
        local_fc = (char *)0x437f0000;
        local_114 = (char *)(param_1 + 0x14c);
        local_110 = (char *)(local_a0 * 0.0015625 + local_d0);
        puStack_118 = (undefined1 *)0x48ebca;
        FUN_004b1150();
        local_fc = *(char **)(param_1 + 0x2dc);
        local_104 = acStack_98;
        local_100 = &DAT_00690818;
        local_108 = (float *)0x48ebe0;
        FUN_005ae390();
        local_4._0_1_ = 0x1f;
        if (*(int *)(param_1 + 0x108) == 0) {
          local_fc = (char *)0x0;
          auStack_b8[0] = local_e5;
          local_100 = (char *)0x48ec07;
          FUN_004040a0();
          uVar5 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          local_fc = (char *)(~uVar5 - 1);
          local_100 = &DAT_006b3f70;
          local_104 = (char *)0x48ec25;
          FUN_004040f0();
          local_fc = auStack_b8;
          local_4._0_1_ = 0x20;
          local_100 = (char *)0xb6;
          local_104 = s___AdamSource_DaviRC_h_0068d638;
          local_108 = (float *)s_m_Pointer_0068d62c;
          local_10c = (float *)0x48ec46;
          pcVar4 = (code *)FUN_005a07f0();
          local_10c = (float *)0x48ec48;
          (*pcVar4)();
          local_4._0_1_ = 0x1f;
          local_fc = (char *)0x1;
          local_100 = (char *)0x48ec5e;
          FUN_004040a0();
        }
        if (*(int *)(param_1 + 0x108) == 0) {
          local_fc = (char *)0x0;
          local_e0 = CONCAT31(local_e0._1_3_,local_e5);
          local_100 = (char *)0x48ec7c;
          FUN_004040a0();
          uVar5 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          local_fc = (char *)(~uVar5 - 1);
          local_100 = &DAT_006b3f70;
          local_104 = (char *)0x48ec9a;
          FUN_004040f0();
          local_fc = (char *)&local_e0;
          local_4._0_1_ = 0x21;
          local_100 = (char *)0xb6;
          local_104 = s___AdamSource_DaviRC_h_0068d638;
          local_108 = (float *)s_m_Pointer_0068d62c;
          local_10c = (float *)0x48ecbb;
          pcVar4 = (code *)FUN_005a07f0();
          local_10c = (float *)0x48ecbd;
          (*pcVar4)();
          local_4._0_1_ = 0x1f;
          local_fc = (char *)0x1;
          local_100 = (char *)0x48ecd3;
          FUN_004040a0();
        }
        local_10c = (float *)(local_c0 * 0.0020833334 + local_c8);
        local_108 = (float *)0x437f0000;
        local_104 = (char *)0x437f0000;
        local_100 = (char *)0x437f0000;
        local_fc = (char *)0x437f0000;
        local_110 = acStack_98;
        local_bc = (undefined1 *)(local_e4 * 0.0015625 + local_d0);
        local_114 = (char *)0x48ed31;
        fVar9 = (float10)FUN_004b21b0();
        local_114 = acStack_98;
        local_110 = (char *)(float)((float10)(float)local_bc - fVar9);
        puStack_118 = (undefined1 *)0x48ed45;
        FUN_004b1150();
        if (iStack_94 != 0) {
          cVar2 = *(char *)(iStack_94 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            local_fc = (char *)(iStack_94 + -1);
            local_100 = (char *)0x48ed66;
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_94 + -1) = cVar2 + -1;
          }
        }
      }
    }
  }
  if (local_84 != 0) {
    cVar2 = *(char *)(local_84 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      local_fc = (char *)(local_84 + -1);
      local_100 = (char *)0x48ed8a;
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_84 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

