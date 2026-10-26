/*
 * FUN_0052ec30 at 0052ec30
 * undefined FUN_0052ec30(void)
 * Address ranges: 0052ec30-005333d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0052edb8) */

void __fastcall FUN_0052ec30(int param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined2 uVar15;
  char *pcVar16;
  char *pcVar17;
  int **ppiVar18;
  undefined1 uStack_145;
  void *local_144;
  uint local_140;
  uint local_13c;
  undefined1 auStack_138 [4];
  char *pcStack_134;
  char *pcStack_130;
  undefined4 uStack_12c;
  void *pvStack_128;
  undefined1 local_124 [4];
  char *pcStack_120;
  uint uStack_11c;
  int *piStack_114;
  undefined1 auStack_110 [4];
  char *pcStack_10c;
  char *pcStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [4];
  char *pcStack_f8;
  char *pcStack_f4;
  undefined4 uStack_f0;
  void *pvStack_ec;
  undefined4 *puStack_e8;
  uint local_e4;
  undefined1 local_dd;
  int *local_dc;
  undefined1 auStack_d8 [16];
  int local_c8;
  undefined1 local_c4 [16];
  undefined1 local_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b46a;
  local_c = ExceptionList;
  uVar14 = 0;
  local_144 = (void *)0x0;
  local_140 = 0;
  local_13c = 0;
  local_e4 = 0;
  ExceptionList = &local_c;
  local_c8 = param_1;
  FUN_00519ef0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x6a5);
    local_4 = 0;
    local_124[0] = local_dd;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = s_CAdamGame__DisplayMenu____no_fon_006a0a08;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamGame__DisplayMenu____no_fon_006a0a08,~uVar14 - 1);
    local_4._0_1_ = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x6a6,local_124);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    FUN_0052c270();
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    FUN_004c4440(1);
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x98) != 3) {
    local_124[0] = local_dd;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = s_CAdamGame__DisplayMenu____menu_c_006a09c4;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamGame__DisplayMenu____menu_c_006a09c4,~uVar14 - 1);
    local_4 = 2;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x6b0,local_124);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0xc) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_b4);
    local_4 = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_b0);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x24) != 3) {
    FUN_00409810(&DAT_006b3f70,&uStack_145);
    local_4 = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f7,local_124);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x3c);
  if ((iVar3 == 1) || (iVar3 == 3)) {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = s_CAdamGame__DisplayMenu____menu_c_006a0980;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamGame__DisplayMenu____menu_c_006a0980,~uVar14 - 1);
    local_4 = 6;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x6b8,local_124);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return;
  }
  local_dc = (int *)FUN_0060a6f2(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x14),0,
                                 &CAdamGameState::RTTI_Type_Descriptor,
                                 &CAdamGameState_GS_MENU::RTTI_Type_Descriptor,0);
  FUN_0053a050();
  local_4 = 7;
  puStack_e8 = operator_new(0x60);
  local_4._0_1_ = 8;
  if (puStack_e8 == (void *)0x0) {
    puStack_e8 = (undefined4 *)0x0;
  }
  else {
    local_c4[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar14 - 1);
    local_144 = (void *)0x1;
    local_4 = CONCAT31(local_4._1_3_,9);
    local_b0[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = s_Hoofdmenu_006a0974;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Hoofdmenu_006a0974,~uVar14 - 1);
    local_144 = (void *)0x3;
    local_4 = 10;
    uVar5 = FUN_0052eab0(auStack_90,0x4a,0);
    uVar14 = 7;
    local_144 = (void *)0x7;
    local_4 = 0xb;
    puStack_e8 = (undefined4 *)FUN_00538230(local_b0,local_c4,uVar5,1);
  }
  local_4 = 0xd;
  if ((uVar14 & 4) != 0) {
    uVar14 = uVar14 & 0xfffffffb;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0xc;
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x48);
  local_4._0_1_ = 0xf;
  if (piStack_114 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____Verder_spelen__006a0958;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s__Enter____Verder_spelen__006a0958,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 8);
    local_4 = CONCAT31(local_4._1_3_,0x10);
    uVar5 = FUN_0052eab0(auStack_138,0x4b,0);
    uVar14 = uVar14 | 0x18;
    local_4 = 0x11;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538690(uVar5,local_124,0,0,1);
  }
  local_4 = 0x13;
  FUN_00538500(uVar5);
  local_4 = 0x12;
  if ((uVar14 & 0x10) != 0) {
    uVar14 = uVar14 & 0xffffffef;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 8) != 0) {
    uVar14 = uVar14 & 0xfffffff7;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x48);
  local_4._0_1_ = 0x14;
  if (piStack_114 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____Level_opnieuw_opstarte_006a0934;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s__Enter____Level_opnieuw_opstarte_006a0934,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x20);
    local_4 = CONCAT31(local_4._1_3_,0x15);
    uVar5 = FUN_0052eab0(auStack_138,0x4c,0);
    uVar14 = uVar14 | 0x60;
    local_4 = 0x16;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538690(uVar5,local_124,2,0,1);
  }
  local_4 = 0x18;
  FUN_00538500(uVar5);
  local_4 = 0x17;
  if ((uVar14 & 0x40) != 0) {
    uVar14 = uVar14 & 0xffffffbf;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x20) != 0) {
    uVar14 = uVar14 & 0xffffffdf;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x48);
  local_4._0_1_ = 0x19;
  if (piStack_114 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____Spel_verlaten__006a0918;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s__Enter____Spel_verlaten__006a0918,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x80);
    local_4 = CONCAT31(local_4._1_3_,0x1a);
    uVar5 = FUN_0052eab0(auStack_138,0x4d,0);
    uVar14 = uVar14 | 0x180;
    local_4 = 0x1b;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538690(uVar5,local_124,1,0,1);
  }
  local_4 = 0x1d;
  FUN_00538500(uVar5);
  local_4 = 0x1c;
  if ((uVar14 & 0x100) != 0) {
    uVar14 = uVar14 & 0xfffffeff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x80) != 0) {
    uVar14 = uVar14 & 0xffffff7f;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x40);
  local_4._0_1_ = 0x1e;
  if (piStack_114 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    local_124[0] = uStack_145;
    local_144 = (void *)(uVar14 | 0x200);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    uVar14 = CONCAT11((char)((uVar14 | 0x200) >> 8),(char)uVar14) | 0x400;
    local_4 = 0x20;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538660(local_124,auStack_138);
  }
  local_4 = 0x22;
  FUN_00538500(uVar5);
  local_4 = 0x21;
  if ((uVar14 & 0x400) != 0) {
    uVar14 = uVar14 & 0xfffffbff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x200) != 0) {
    uVar14 = uVar14 & 0xfffffdff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x60);
  local_4._0_1_ = 0x23;
  if (piStack_114 == (int *)0x0) {
    uStack_100 = 0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Geeft_een_overzicht_van_de_inges_006a08e8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Geeft_een_overzicht_van_de_inges_006a08e8,~uVar9 - 1);
    local_4 = CONCAT31(local_4._1_3_,0x24);
    local_144 = (void *)(uVar14 | 0x800);
    uVar5 = FUN_0052eab0(auStack_110,0x4f,0);
    uVar9 = CONCAT11((char)((uVar14 | 0x800) >> 8),(char)uVar14) | 0x1000;
    local_4 = 0x25;
    local_144 = (void *)uVar9;
    uVar6 = FUN_0052eab0(auStack_138,0x4f,1);
    uVar14 = CONCAT11((char)(uVar9 >> 8),(char)uVar14) | 0x2000;
    local_4 = 0x26;
    local_144 = (void *)uVar14;
    uStack_100 = FUN_00538230(uVar6,local_124,uVar5,1);
  }
  local_4 = 0x28;
  if ((uVar14 & 0x2000) != 0) {
    uVar14 = uVar14 & 0xffffdfff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x27;
  if ((uVar14 & 0x1000) != 0) {
    uVar14 = uVar14 & 0xffffefff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x800) != 0) {
    uVar14 = uVar14 & 0xfffff7ff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  piStack_114 = operator_new(0x60);
  local_4._0_1_ = 0x2a;
  if (piStack_114 == (int *)0x0) {
    piStack_114 = (int *)0x0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Geeft_het_volgende_scherm_in_het_006a08bc;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Geeft_het_volgende_scherm_in_het_006a08bc,~uVar9 - 1);
    local_4 = CONCAT31(local_4._1_3_,0x2b);
    local_144 = (void *)(uVar14 | 0x4000);
    uVar5 = FUN_0052eab0(auStack_110,0x4f,0);
    uVar14 = (uint)CONCAT11((char)((uVar14 | 0x4000) >> 8),(char)uVar14);
    local_144 = (void *)(uVar14 | 0x8000);
    local_4 = 0x2c;
    uVar6 = FUN_0052eab0(auStack_138,0x4e,1);
    uVar14 = uVar14 | 0x18000;
    local_4 = 0x2d;
    local_144 = (void *)uVar14;
    piStack_114 = (int *)FUN_00538230(uVar6,local_124,uVar5,1);
  }
  local_4 = 0x2f;
  if ((uVar14 & 0x10000) != 0) {
    uVar14 = uVar14 & 0xfffeffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x2e;
  if ((uVar14 & 0x8000) != 0) {
    uVar14 = uVar14 & 0xffff7fff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x4000) != 0) {
    uVar14 = uVar14 & 0xffffbfff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a8) == 0) {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x31;
    pcVar4 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,
                                  0x136,local_124);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  pvVar1 = *(void **)(iVar3 + 0x3a8);
  pvStack_128 = pvVar1;
  pvStack_ec = operator_new(0x58);
  local_4._0_1_ = 0x32;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_00693374;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_00693374,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x20000);
    local_4 = CONCAT31(local_4._1_3_,0x33);
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x60000);
    local_4 = 0x34;
    uVar5 = FUN_0052eab0(auStack_110,0x55,0);
    uVar14 = uVar14 | 0xe0000;
    local_4 = 0x35;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538730(uVar5,local_124,pvVar1,auStack_138);
  }
  local_4 = 0x38;
  FUN_00538500(uVar5);
  local_4 = 0x37;
  if ((uVar14 & 0x80000) != 0) {
    uVar14 = uVar14 & 0xfff7ffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x36;
  if ((uVar14 & 0x40000) != 0) {
    uVar14 = uVar14 & 0xfffbffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x20000) != 0) {
    uVar14 = uVar14 & 0xfffdffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x58);
  local_4._0_1_ = 0x39;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Pause_0069337c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Pause_0069337c,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x100000);
    local_4 = CONCAT31(local_4._1_3_,0x3a);
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x300000);
    local_4 = 0x3b;
    uVar5 = FUN_0052eab0(auStack_110,0x56,0);
    uVar14 = uVar14 | 0x700000;
    local_4 = 0x3c;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538730(uVar5,local_124,pvVar1,auStack_138);
  }
  local_4 = 0x3f;
  FUN_00538500(uVar5);
  local_4 = 0x3e;
  if ((uVar14 & 0x400000) != 0) {
    uVar14 = uVar14 & 0xffbfffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x3d;
  if ((uVar14 & 0x200000) != 0) {
    uVar14 = uVar14 & 0xffdfffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x100000) != 0) {
    uVar14 = uVar14 & 0xffefffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x58);
  local_4._0_1_ = 0x40;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_00693384;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_00693384,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x800000);
    local_4 = CONCAT31(local_4._1_3_,0x41);
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x1800000);
    local_4 = 0x42;
    uVar5 = FUN_0052eab0(auStack_110,0x57,0);
    uVar14 = uVar14 | 0x3800000;
    local_4 = 0x43;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538730(uVar5,local_124,pvVar1,auStack_138);
  }
  local_4 = 0x46;
  FUN_00538500(uVar5);
  local_4 = 0x45;
  if ((uVar14 & 0x2000000) != 0) {
    uVar14 = uVar14 & 0xfdffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x44;
  if ((uVar14 & 0x1000000) != 0) {
    uVar14 = uVar14 & 0xfeffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x800000) != 0) {
    uVar14 = uVar14 & 0xff7fffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  FUN_0053dc10();
  pvStack_ec = operator_new(0x40);
  local_4._0_1_ = 0x47;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x4000000);
    local_4 = CONCAT31(local_4._1_3_,0x48);
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    uVar14 = uVar14 | 0xc000000;
    local_4 = 0x49;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538660(local_124,auStack_138);
  }
  local_4 = 0x4b;
  FUN_00538500(uVar5);
  local_4 = 0x4a;
  if ((uVar14 & 0x8000000) != 0) {
    uVar14 = uVar14 & 0xf7ffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x4000000) != 0) {
    uVar14 = uVar14 & 0xfbffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x48);
  local_4._0_1_ = 0x4c;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____terug_naar_het_vorige_s_006a0894;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s__Enter____terug_naar_het_vorige_s_006a0894,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x10000000);
    local_4 = CONCAT31(local_4._1_3_,0x4d);
    uVar5 = FUN_0052eab0(auStack_138,0x61,1);
    uVar14 = uVar14 | 0x30000000;
    local_4 = 0x4e;
    local_144 = (void *)uVar14;
    uVar5 = FUN_00538690(uVar5,local_124,0,2,0);
  }
  local_4 = 0x50;
  FUN_00538500(uVar5);
  local_4 = 0x4f;
  if ((uVar14 & 0x20000000) != 0) {
    uVar14 = uVar14 & 0xdfffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x10000000) != 0) {
    uVar14 = uVar14 & 0xefffffff;
    local_144 = (void *)uVar14;
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x58);
  local_4._0_1_ = 0x51;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = (char *)&DAT_00693338;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_00693338,~uVar9 - 1);
    local_144 = (void *)(uVar14 | 0x40000000);
    local_124[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x52);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    uVar14 = uVar14 | 0xc0000000;
    local_4 = 0x53;
    local_144 = (void *)uVar14;
    uVar5 = FUN_0052eab0(auStack_110,0x58,0);
    local_140 = local_140 | 1;
    local_4 = 0x54;
    uVar5 = FUN_00538730(uVar5,local_124,pvVar1,auStack_138);
  }
  local_4 = 0x57;
  FUN_00538500(uVar5);
  local_4 = 0x56;
  if ((local_140 & 1) != 0) {
    local_140 = local_140 & 0xfffffffe;
    FUN_004040a0(1);
  }
  local_4 = 0x55;
  if ((uVar14 & 0x80000000) != 0) {
    uVar14 = uVar14 & 0x7fffffff;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x40000000) != 0) {
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x58);
  local_4._0_1_ = 0x58;
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
    uVar14 = local_140;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = &DAT_00693340;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_00693340,~uVar14 - 1);
    uVar14 = local_140;
    local_140 = local_140 | 2;
    local_124[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x59);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_140 = uVar14 | 6;
    local_4 = 0x5a;
    uVar5 = FUN_0052eab0(auStack_110,0x5f,0);
    uVar14 = uVar14 | 0xe;
    local_4 = 0x5b;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,local_124,pvVar1,auStack_138);
  }
  local_4 = 0x5e;
  FUN_00538500(uVar5);
  local_4 = 0x5d;
  if ((uVar14 & 8) != 0) {
    uVar14 = uVar14 & 0xfffffff7;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x5c;
  if ((uVar14 & 4) != 0) {
    uVar14 = uVar14 & 0xfffffffb;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x5f);
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = (char *)&DAT_006a088c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    local_144 = (void *)(~uVar9 - 1);
    cVar2 = FUN_00401940(local_144,1);
    if (cVar2 != '\0') {
      pcVar12 = (char *)&DAT_006a088c;
      pcVar16 = pcStack_134;
      for (uVar9 = (uint)local_144 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = (uint)local_144 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(local_144);
    }
    local_140 = uVar14 | 0x10;
    local_4 = CONCAT31(local_4._1_3_,0x60);
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_140 = uVar14 | 0x30;
    local_4 = 0x61;
    uVar5 = FUN_0052eab0(auStack_110,0x75,0);
    uVar14 = uVar14 | 0x70;
    local_4 = 0x62;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,local_124,pvStack_128,auStack_138);
  }
  local_4 = 0x65;
  FUN_00538500(uVar5);
  local_4 = 100;
  if ((uVar14 & 0x40) != 0) {
    uVar14 = uVar14 & 0xffffffbf;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 99;
  if ((uVar14 & 0x20) != 0) {
    uVar14 = uVar14 & 0xffffffdf;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x10) != 0) {
    uVar14 = uVar14 & 0xffffffef;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x66);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_MoveForward_006932c8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s_MoveForward_006932c8;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4 = CONCAT31(local_4._1_3_,0x67);
    auStack_138[0] = uStack_145;
    local_140 = uVar14 | 0x80;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar15 = (undefined2)(uVar14 >> 0x10);
    uVar13 = (undefined1)(uVar14 | 0x80);
    uVar14 = CONCAT22(uVar15,CONCAT11((char)(uVar14 >> 8),uVar13)) | 0x100;
    local_4 = 0x68;
    local_140 = uVar14;
    uVar5 = FUN_0052eab0(local_124,0x59,0);
    uVar14 = CONCAT22(uVar15,CONCAT11((char)(uVar14 >> 8),uVar13)) | 0x200;
    local_4 = 0x69;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x6c;
  FUN_00538500(uVar5);
  local_4 = 0x6b;
  if ((uVar14 & 0x200) != 0) {
    uVar14 = uVar14 & 0xfffffdff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x6a;
  if ((uVar14 & 0x100) != 0) {
    uVar14 = uVar14 & 0xfffffeff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x80) != 0) {
    uVar14 = uVar14 & 0xffffff7f;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x6d);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006932bc;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006932bc;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x6e);
    local_140 = uVar14 | 0x400;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar15 = (undefined2)(uVar14 >> 0x10);
    uVar9 = CONCAT22(uVar15,CONCAT11((char)((uVar14 | 0x400) >> 8),(char)uVar14)) | 0x800;
    local_4 = 0x6f;
    local_140 = uVar9;
    uVar5 = FUN_0052eab0(local_124,0x5a,0);
    uVar14 = CONCAT22(uVar15,CONCAT11((char)(uVar9 >> 8),(char)uVar14)) | 0x1000;
    local_4 = 0x70;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x73;
  FUN_00538500(uVar5);
  local_4 = 0x72;
  if ((uVar14 & 0x1000) != 0) {
    uVar14 = uVar14 & 0xffffefff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x71;
  if ((uVar14 & 0x800) != 0) {
    uVar14 = uVar14 & 0xfffff7ff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x400) != 0) {
    uVar14 = uVar14 & 0xfffffbff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x74);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_00693290;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_00693290;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x75);
    local_140 = uVar14 | 0x2000;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar15 = (undefined2)(uVar14 >> 0x10);
    uVar9 = CONCAT22(uVar15,CONCAT11((char)((uVar14 | 0x2000) >> 8),(char)uVar14)) | 0x4000;
    local_4 = 0x76;
    local_140 = uVar9;
    uVar5 = FUN_0052eab0(local_124,0x5d,0);
    uVar14 = CONCAT22(uVar15,CONCAT11((char)(uVar9 >> 8),(char)uVar14)) | 0x8000;
    local_4 = 0x77;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x7a;
  FUN_00538500(uVar5);
  local_4 = 0x79;
  if ((uVar14 & 0x8000) != 0) {
    uVar14 = uVar14 & 0xffff7fff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x78;
  if ((uVar14 & 0x4000) != 0) {
    uVar14 = uVar14 & 0xffffbfff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x2000) != 0) {
    uVar14 = uVar14 & 0xffffdfff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x7b);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_TurnRight_00693278;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s_TurnRight_00693278;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x10000;
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x7c);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x30000;
    local_4 = 0x7d;
    uVar5 = FUN_0052eab0(local_124,0x5e,0);
    uVar14 = uVar14 | 0x70000;
    local_4 = 0x7e;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x81;
  FUN_00538500(uVar5);
  local_4 = 0x80;
  if ((uVar14 & 0x40000) != 0) {
    uVar14 = uVar14 & 0xfffbffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x7f;
  if ((uVar14 & 0x20000) != 0) {
    uVar14 = uVar14 & 0xfffdffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x10000) != 0) {
    uVar14 = uVar14 & 0xfffeffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x82);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_0069329c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_0069329c;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x80000;
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x83);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x180000;
    local_4 = 0x84;
    uVar5 = FUN_0052eab0(local_124,0x5b,0);
    uVar14 = uVar14 | 0x380000;
    local_4 = 0x85;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x88;
  FUN_00538500(uVar5);
  local_4 = 0x87;
  if ((uVar14 & 0x200000) != 0) {
    uVar14 = uVar14 & 0xffdfffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x86;
  if ((uVar14 & 0x100000) != 0) {
    uVar14 = uVar14 & 0xffefffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x80000) != 0) {
    uVar14 = uVar14 & 0xfff7ffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_144 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x89);
  if (local_144 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_MoveRight_00693284;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s_MoveRight_00693284;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x400000;
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x8a);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0xc00000;
    local_4 = 0x8b;
    uVar5 = FUN_0052eab0(local_124,0x5c,0);
    uVar14 = uVar14 | 0x1c00000;
    local_4 = 0x8c;
    local_140 = uVar14;
    uVar5 = FUN_00538730(uVar5,auStack_138,pvStack_128,auStack_110);
  }
  local_4 = 0x8f;
  FUN_00538500(uVar5);
  local_4 = 0x8e;
  if ((uVar14 & 0x1000000) != 0) {
    uVar14 = uVar14 & 0xfeffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x8d;
  if ((uVar14 & 0x800000) != 0) {
    uVar14 = uVar14 & 0xff7fffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x400000) != 0) {
    uVar14 = uVar14 & 0xffbfffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  pvStack_128 = operator_new(0x40);
  local_4 = CONCAT31(local_4._1_3_,0x90);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_140 = uVar14 | 0x2000000;
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0x91);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar14 = uVar14 | 0x6000000;
    local_4 = 0x92;
    local_140 = uVar14;
    uVar5 = FUN_00538660(auStack_138,auStack_110);
  }
  local_4 = 0x94;
  FUN_00538500(uVar5);
  local_4 = 0x93;
  if ((uVar14 & 0x4000000) != 0) {
    uVar14 = uVar14 & 0xfbffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x2000000) != 0) {
    uVar14 = uVar14 & 0xfdffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  FUN_00538500(piStack_114);
  pvStack_ec = operator_new(0x48);
  local_4 = CONCAT31(local_4._1_3_,0x95);
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    piVar11 = (int *)(~uVar9 - 1);
    piStack_114 = piVar11;
    cVar2 = FUN_00401940(piVar11,1);
    if (cVar2 != '\0') {
      pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
      pcVar16 = pcStack_134;
      for (uVar9 = (uint)piVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = (uint)piVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(piVar11);
    }
    local_140 = uVar14 | 0x8000000;
    local_4 = CONCAT31(local_4._1_3_,0x96);
    uVar5 = FUN_0052eab0(local_124,0x61,1);
    uVar14 = uVar14 | 0x18000000;
    local_4 = 0x97;
    local_140 = uVar14;
    uVar5 = FUN_00538690(uVar5,auStack_138,0,2,0);
  }
  uVar6 = uStack_100;
  local_4 = 0x99;
  FUN_00538500(uVar5);
  local_4 = 0x98;
  if ((uVar14 & 0x10000000) != 0) {
    uVar14 = uVar14 & 0xefffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x8000000) != 0) {
    uVar14 = uVar14 & 0xf7ffffff;
    FUN_004040a0(1);
  }
  FUN_00538500(uVar6);
  pvStack_ec = operator_new(0x60);
  local_4 = CONCAT31(local_4._1_3_,0x9a);
  if (pvStack_ec == (void *)0x0) {
    piStack_114 = (int *)0x0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Toont_enkele_opties_die_tijdens_h_006a0828;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    piStack_114 = (int *)(~uVar9 - 1);
    cVar2 = FUN_00401940(piStack_114,1);
    if (cVar2 != '\0') {
      pcVar12 = s_Toont_enkele_opties_die_tijdens_h_006a0828;
      pcVar16 = pcStack_134;
      for (uVar9 = (uint)piStack_114 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = (uint)piStack_114 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(piStack_114);
    }
    local_140 = uVar14 | 0x20000000;
    local_4 = CONCAT31(local_4._1_3_,0x9b);
    uVar5 = FUN_0052eab0(auStack_110,0x62,0);
    local_140 = uVar14 | 0x60000000;
    local_4 = 0x9c;
    uVar6 = FUN_0052eab0(local_124,0x62,1);
    uVar14 = uVar14 | 0xe0000000;
    local_4 = 0x9d;
    local_140 = uVar14;
    piStack_114 = (int *)FUN_00538230(uVar6,auStack_138,uVar5,1);
  }
  local_4 = 0x9f;
  if ((uVar14 & 0x80000000) != 0) {
    uVar14 = uVar14 & 0x7fffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0x9e;
  if ((uVar14 & 0x40000000) != 0) {
    uVar14 = uVar14 & 0xbfffffff;
    local_140 = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x20000000) != 0) {
    FUN_004040a0(1);
  }
  pvStack_ec = operator_new(0x54);
  local_4 = CONCAT31(local_4._1_3_,0xa1);
  if (pvStack_ec == (void *)0x0) {
    iVar3 = 0;
    uVar14 = local_13c;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = s_Gebruik_____en_____voor_Lichter__006a07fc;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14 - 1;
    cVar2 = FUN_00401940(uVar14,1);
    if (cVar2 != '\0') {
      pcVar12 = s_Gebruik_____en_____voor_Lichter__006a07fc;
      pcVar16 = pcStack_134;
      for (uVar9 = uVar14 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar14);
    }
    uVar14 = local_13c;
    local_13c = local_13c | 1;
    local_4 = CONCAT31(local_4._1_3_,0xa2);
    uVar5 = FUN_0052eab0(local_124,99,0);
    local_4 = 0xa3;
    local_13c = uVar14 | 3;
    iVar3 = FUN_00538c30(uVar5,auStack_138,&LAB_00533560,&LAB_005337d0,4,3);
    uVar14 = uVar14 | 3;
  }
  local_4 = 0xa4;
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  *(undefined1 *)(iVar3 + 0x50) = 1;
  FUN_00538500(iVar3);
  pvStack_ec = operator_new(0x54);
  local_4 = CONCAT31(local_4._1_3_,0xa6);
  if (pvStack_ec == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Gebruik_____en_____voor_Groter_K_006a07d4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pvStack_128 = (void *)(~uVar9 - 1);
    cVar2 = FUN_00401940(pvStack_128,1);
    if (cVar2 != '\0') {
      pcVar12 = s_Gebruik_____en_____voor_Groter_K_006a07d4;
      pcVar16 = pcStack_134;
      for (uVar9 = (uint)pvStack_128 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = (uint)pvStack_128 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(pvStack_128);
    }
    local_13c = uVar14 | 4;
    local_4 = CONCAT31(local_4._1_3_,0xa7);
    uVar5 = FUN_0052eab0(local_124,100,0);
    uVar14 = uVar14 | 0xc;
    local_4 = 0xa8;
    local_13c = uVar14;
    uVar5 = FUN_00538c30(uVar5,auStack_138,&LAB_00533a90,&LAB_00533cd0,4,3);
  }
  local_4 = 0xa9;
  if ((uVar14 & 8) != 0) {
    uVar14 = uVar14 & 0xfffffff7;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 4) != 0) {
    uVar14 = uVar14 & 0xfffffffb;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  FUN_00538500(uVar5);
  pvStack_128 = operator_new(0x40);
  local_4 = CONCAT31(local_4._1_3_,0xab);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_13c = uVar14 | 0x10;
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0xac);
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar14 = uVar14 | 0x30;
    local_4 = 0xad;
    local_13c = uVar14;
    uVar5 = FUN_00538660(auStack_138,auStack_110);
  }
  local_4 = 0xaf;
  FUN_00538500(uVar5);
  local_4 = 0xae;
  if ((uVar14 & 0x20) != 0) {
    uVar14 = uVar14 & 0xffffffdf;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x10) != 0) {
    uVar14 = uVar14 & 0xffffffef;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  pvStack_128 = operator_new(0x48);
  local_4 = CONCAT31(local_4._1_3_,0xb0);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4 = CONCAT31(local_4._1_3_,0xb1);
    local_13c = uVar14 | 0x40;
    uVar5 = FUN_0052eab0(local_124,0x61,1);
    uVar14 = CONCAT31((int3)(uVar14 >> 8),(char)(uVar14 | 0x40)) | 0x80;
    local_4 = 0xb2;
    local_13c = uVar14;
    uVar5 = FUN_00538690(uVar5,auStack_138,0,2,0);
  }
  piVar11 = piStack_114;
  local_4 = 0xb4;
  FUN_00538500(uVar5);
  local_4 = 0xb3;
  if ((uVar14 & 0x80) != 0) {
    uVar14 = uVar14 & 0xffffff7f;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x40) != 0) {
    uVar14 = uVar14 & 0xffffffbf;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  FUN_00538500(piVar11);
  pvStack_ec = operator_new(0x60);
  local_4 = CONCAT31(local_4._1_3_,0xb5);
  if (pvStack_ec == (void *)0x0) {
    piStack_114 = (int *)0x0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Toont_enkele_opties_die_tijdens_h_006a0828;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    piStack_114 = (int *)(~uVar9 - 1);
    cVar2 = FUN_00401940(piStack_114,1);
    if (cVar2 != '\0') {
      pcVar12 = s_Toont_enkele_opties_die_tijdens_h_006a0828;
      pcVar16 = pcStack_134;
      for (uVar9 = (uint)piStack_114 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = (uint)piStack_114 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(piStack_114);
    }
    local_4 = CONCAT31(local_4._1_3_,0xb6);
    local_13c = uVar14 | 0x100;
    uVar5 = FUN_0052eab0(auStack_110,0x65,0);
    uVar15 = (undefined2)(uVar14 >> 0x10);
    uVar9 = CONCAT22(uVar15,CONCAT11((char)((uVar14 | 0x100) >> 8),(char)uVar14)) | 0x200;
    local_4 = 0xb7;
    local_13c = uVar9;
    uVar6 = FUN_0052eab0(local_124,0x65,1);
    uVar14 = CONCAT22(uVar15,CONCAT11((char)(uVar9 >> 8),(char)uVar14)) | 0x400;
    local_4 = 0xb8;
    local_13c = uVar14;
    piStack_114 = (int *)FUN_00538230(uVar6,auStack_138,uVar5,1);
  }
  local_4 = 0xba;
  if ((uVar14 & 0x400) != 0) {
    uVar14 = uVar14 & 0xfffffbff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 0xb9;
  if ((uVar14 & 0x200) != 0) {
    uVar14 = uVar14 & 0xfffffdff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x100) != 0) {
    uVar14 = uVar14 & 0xfffffeff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  pvStack_128 = operator_new(0x54);
  local_4 = CONCAT31(local_4._1_3_,0xbc);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Gebruik_____en_____voor_Harder_Z_006a07ac;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s_Gebruik_____en_____voor_Harder_Z_006a07ac;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4 = CONCAT31(local_4._1_3_,0xbd);
    local_13c = uVar14 | 0x800;
    uVar5 = FUN_0052eab0(local_124,0x66,0);
    uVar14 = CONCAT22((short)(uVar14 >> 0x10),CONCAT11((char)((uVar14 | 0x800) >> 8),(char)uVar14))
             | 0x1000;
    local_4 = 0xbe;
    local_13c = uVar14;
    uVar5 = FUN_00538c30(uVar5,auStack_138,&LAB_00533ec0,&LAB_00533f50,10,3);
  }
  local_4 = 0xc0;
  FUN_00538500(uVar5);
  local_4 = 0xbf;
  if ((uVar14 & 0x1000) != 0) {
    uVar14 = uVar14 & 0xffffefff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x800) != 0) {
    uVar14 = uVar14 & 0xfffff7ff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  pvStack_128 = operator_new(0x40);
  local_4 = CONCAT31(local_4._1_3_,0xc1);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_110[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_10c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    auStack_138[0] = uStack_145;
    local_4 = CONCAT31(local_4._1_3_,0xc2);
    local_13c = uVar14 | 0x2000;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    uVar14 = CONCAT22((short)(uVar14 >> 0x10),CONCAT11((char)((uVar14 | 0x2000) >> 8),(char)uVar14))
             | 0x4000;
    local_4 = 0xc3;
    local_13c = uVar14;
    uVar5 = FUN_00538660(auStack_138,auStack_110);
  }
  local_4 = 0xc5;
  FUN_00538500(uVar5);
  local_4 = 0xc4;
  if ((uVar14 & 0x4000) != 0) {
    uVar14 = uVar14 & 0xffffbfff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x2000) != 0) {
    uVar14 = uVar14 & 0xffffdfff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  pvStack_128 = operator_new(0x48);
  local_4 = CONCAT31(local_4._1_3_,0xc6);
  if (pvStack_128 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_13c = uVar14 | 0x8000;
    local_4 = CONCAT31(local_4._1_3_,199);
    uVar5 = FUN_0052eab0(local_124,0x61,1);
    uVar14 = uVar14 | 0x18000;
    local_4 = 200;
    local_13c = uVar14;
    uVar5 = FUN_00538690(uVar5,auStack_138,0,2,0);
  }
  piVar11 = piStack_114;
  local_4 = 0xca;
  FUN_00538500(uVar5);
  local_4 = 0xc9;
  if ((uVar14 & 0x10000) != 0) {
    uVar14 = uVar14 & 0xfffeffff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar14 & 0x8000) != 0) {
    uVar14 = uVar14 & 0xffff7fff;
    local_13c = uVar14;
    FUN_004040a0(1);
  }
  FUN_00538500(piVar11);
  piVar11 = (int *)0x0;
  piStack_114 = (int *)0x0;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0xcb;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_124);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  FUN_00453d20(&pvStack_128);
  local_4._0_1_ = 0xcc;
  if ((pvStack_128 != (void *)0x0) && (iVar3 = *(int *)((int)pvStack_128 + 0x360), iVar3 != 0)) {
    if (*(int *)(iVar3 + 0x1f0) == 0) {
      auStack_138[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 0xce;
      pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_138);
      (*pcVar4)();
      local_4._0_1_ = 0xcc;
      FUN_004040a0(1);
    }
    piVar11 = *(int **)(iVar3 + 0x1f0);
    piStack_114 = piVar11;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  if (pvStack_128 != (void *)0x0) {
    FUN_004098d0();
  }
  if (piVar11 == (int *)0x0) {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 0xcf;
    pcVar4 = (code *)FUN_005a07f0(s_playerGP____0_006a079c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x729,auStack_138);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  FUN_005348b0(auStack_a0);
  local_4 = CONCAT31(local_4._1_3_,0xd0);
  if (*(char *)(local_c8 + 0xac) != '\0') {
    auStack_110[0] = uStack_145;
    pcStack_10c = (char *)0x0;
    pcStack_108 = (char *)0x0;
    uStack_104 = 0;
    local_4._0_1_ = 0xd1;
    uVar5 = FUN_0052eab0(local_124,0x68,0);
    local_4._0_1_ = 0xd2;
    FUN_00444d70(pcStack_108,1,uVar5);
    local_4._0_1_ = 0xd1;
    FUN_004040a0(1);
    uVar5 = FUN_0052eab0(local_124,0x67,0);
    local_4._0_1_ = 0xd3;
    FUN_00444d70(pcStack_108,1,uVar5);
    local_4._0_1_ = 0xd1;
    FUN_004040a0(1);
    pvStack_ec = operator_new(0x60);
    local_4 = CONCAT31(local_4._1_3_,0xd4);
    if (pvStack_ec == (void *)0x0) {
      uStack_100 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s_Toont_Het_menu_van_de_cheats__006a077c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      pvStack_128 = (void *)(~uVar9 - 1);
      cVar2 = FUN_00401940(pvStack_128,1);
      if (cVar2 != '\0') {
        pcVar12 = s_Toont_Het_menu_van_de_cheats__006a077c;
        pcVar16 = pcStack_f8;
        for (uVar9 = (uint)pvStack_128 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = (uint)pvStack_128 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(pvStack_128);
      }
      local_13c = uVar14 | 0x20000;
      local_4 = CONCAT31(local_4._1_3_,0xd5);
      uVar5 = FUN_0052eab0(auStack_d8,0x69,0);
      local_13c = uVar14 | 0x60000;
      local_4 = 0xd6;
      uVar6 = FUN_0052eab0(local_124,0x69,1);
      uVar14 = uVar14 | 0xe0000;
      local_4 = 0xd7;
      local_13c = uVar14;
      uStack_100 = FUN_00538230(uVar6,auStack_fc,uVar5,1);
    }
    local_4 = 0xd9;
    if ((uVar14 & 0x80000) != 0) {
      uVar14 = uVar14 & 0xfff7ffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xd8;
    if ((uVar14 & 0x40000) != 0) {
      uVar14 = uVar14 & 0xfffbffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xd1;
    if ((uVar14 & 0x20000) != 0) {
      uVar14 = uVar14 & 0xfffdffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,0xdb);
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____het_volgende_level_inl_006a0754;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____het_volgende_level_inl_006a0754;
        pcVar16 = pcStack_f8;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_13c = uVar14 | 0x100000;
      local_4 = CONCAT31(local_4._1_3_,0xdc);
      uVar5 = FUN_0052eab0(auStack_d8,0x6a,0);
      uVar14 = uVar14 | 0x300000;
      local_4 = 0xdd;
      local_13c = uVar14;
      uVar5 = FUN_00538690(uVar5,auStack_fc,3,2,1);
    }
    local_4 = 0xdf;
    FUN_00538500(uVar5);
    local_4 = 0xde;
    if ((uVar14 & 0x200000) != 0) {
      uVar14 = uVar14 & 0xffdfffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xd1;
    if ((uVar14 & 0x100000) != 0) {
      uVar14 = uVar14 & 0xffefffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    DAT_006ba668 = FUN_005344e0();
    cVar2 = FUN_00402d10();
    DAT_006ba66c = (uint)(cVar2 != '\0');
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    DAT_006ba674 = '\0';
    DAT_006ba670 = (uint)(*(char *)(iVar3 + 0x48) == '\0');
    DAT_006ba675 = '\0';
    FUN_005348b0(auStack_138);
    local_4._0_1_ = 0xe0;
    pvStack_ec = operator_new(0x70);
    local_4 = CONCAT31(local_4._1_3_,0xe1);
    if (pvStack_ec == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s_Level_om_naar_toe_te_gaan___Ente_006a0720;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      pvStack_128 = (void *)(~uVar9 - 1);
      cVar2 = FUN_00401940(pvStack_128,1);
      if (cVar2 != '\0') {
        pcVar12 = s_Level_om_naar_toe_te_gaan___Ente_006a0720;
        pcVar16 = pcStack_f8;
        for (uVar9 = (uint)pvStack_128 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = (uint)pvStack_128 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(pvStack_128);
      }
      local_13c = uVar14 | 0x400000;
      local_4 = CONCAT31(local_4._1_3_,0xe2);
      uVar5 = FUN_0052eab0(auStack_d8,0x6b,0);
      uVar14 = uVar14 | 0xc00000;
      local_4 = 0xe3;
      local_13c = uVar14;
      uVar5 = FUN_00539d80(uVar5,auStack_fc,&LAB_005344c0,&LAB_005344b0,auStack_138,4,3,1);
    }
    local_4 = 0xe5;
    FUN_00538500(uVar5);
    local_4 = 0xe4;
    if ((uVar14 & 0x800000) != 0) {
      uVar14 = uVar14 & 0xff7fffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x400000) != 0) {
      uVar14 = uVar14 & 0xffbfffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(100);
    local_4 = CONCAT31(local_4._1_3_,0xe6);
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____vlieg_door_muren__etc__006a06fc;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____vlieg_door_muren__etc__006a06fc;
        pcVar16 = pcStack_f8;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_13c = uVar14 | 0x1000000;
      local_4 = CONCAT31(local_4._1_3_,0xe7);
      uVar5 = FUN_0052eab0(auStack_d8,0x6c,0);
      uVar14 = uVar14 | 0x3000000;
      local_4 = 0xe8;
      local_13c = uVar14;
      uVar5 = FUN_00539430(uVar5,auStack_fc,&LAB_00534890,&LAB_00534870,auStack_110,3);
    }
    local_4 = 0xea;
    FUN_00538500(uVar5);
    local_4 = 0xe9;
    if ((uVar14 & 0x2000000) != 0) {
      uVar14 = uVar14 & 0xfdffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x1000000) != 0) {
      uVar14 = uVar14 & 0xfeffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(100);
    local_4 = CONCAT31(local_4._1_3_,0xeb);
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____wordt_onsterfelijk__006a06dc;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____wordt_onsterfelijk__006a06dc;
        pcVar16 = pcStack_f8;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_13c = uVar14 | 0x4000000;
      local_4 = CONCAT31(local_4._1_3_,0xec);
      uVar5 = FUN_0052eab0(auStack_d8,0x6d,0);
      uVar14 = uVar14 | 0xc000000;
      local_4 = 0xed;
      local_13c = uVar14;
      uVar5 = FUN_00539430(uVar5,auStack_fc,&LAB_00534850,&LAB_00534830,auStack_110,3);
    }
    local_4 = 0xef;
    FUN_00538500(uVar5);
    local_4 = 0xee;
    if ((uVar14 & 0x8000000) != 0) {
      uVar14 = uVar14 & 0xf7ffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x4000000) != 0) {
      uVar14 = uVar14 & 0xfbffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,0xf0);
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____krijg_alle_wapens__mun_006a06b0;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____krijg_alle_wapens__mun_006a06b0;
        pcVar16 = pcStack_f8;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_13c = uVar14 | 0x10000000;
      local_4 = CONCAT31(local_4._1_3_,0xf1);
      uVar5 = FUN_0052eab0(auStack_d8,0x6e,0);
      uVar14 = uVar14 | 0x30000000;
      local_4 = 0xf2;
      local_13c = uVar14;
      uVar5 = FUN_00538690(uVar5,auStack_fc,6,2,1);
    }
    local_4 = 0xf4;
    FUN_00538500(uVar5);
    local_4 = 0xf3;
    if ((uVar14 & 0x20000000) != 0) {
      uVar14 = uVar14 & 0xdfffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x10000000) != 0) {
      uVar14 = uVar14 & 0xefffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,0xf5);
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____krijg_alle_wapens__mun_006a0678;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____krijg_alle_wapens__mun_006a0678;
        pcVar16 = pcStack_f8;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_13c = uVar14 | 0x40000000;
      local_4 = CONCAT31(local_4._1_3_,0xf6);
      uVar5 = FUN_0052eab0(auStack_d8,0x6f,0);
      uVar14 = uVar14 | 0xc0000000;
      local_4 = 0xf7;
      local_13c = uVar14;
      uVar5 = FUN_00538690(uVar5,auStack_fc,5,2,1);
    }
    local_4 = 0xf9;
    FUN_00538500(uVar5);
    local_4 = 0xf8;
    if ((uVar14 & 0x80000000) != 0) {
      uVar14 = uVar14 & 0x7fffffff;
      local_13c = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x40000000) != 0) {
      FUN_004040a0(1);
    }
    iVar7 = FUN_00515b70();
    iVar3 = *(int *)(iVar7 + 100);
    if (iVar3 == -0x80000000) {
      puVar8 = *(undefined1 **)(iVar7 + 0x18);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar8);
      *(int *)(iVar7 + 100) = iVar3;
    }
    uVar14 = local_e4;
    if (iVar3 != 0) {
      auStack_fc[0] = uStack_145;
      pcStack_f8 = (char *)0x0;
      pcStack_f4 = (char *)0x0;
      uStack_f0 = 0;
      local_4._0_1_ = 0xfa;
      uVar5 = FUN_0052eab0(auStack_d8,0x71,0);
      local_4._0_1_ = 0xfb;
      FUN_00444d70(pcStack_f4,1,uVar5);
      local_4._0_1_ = 0xfa;
      FUN_004040a0(1);
      uVar5 = FUN_0052eab0(auStack_d8,0x72,0);
      local_4._0_1_ = 0xfc;
      FUN_00444d70(pcStack_f4,1,uVar5);
      local_4._0_1_ = 0xfa;
      FUN_004040a0(1);
      uVar5 = FUN_0052eab0(auStack_d8,0x73,0);
      local_4._0_1_ = 0xfd;
      FUN_00444d70(pcStack_f4,1,uVar5);
      local_4._0_1_ = 0xfa;
      FUN_004040a0(1);
      uVar5 = FUN_0052eab0(auStack_d8,0x74,0);
      local_4._0_1_ = 0xfe;
      FUN_00444d70(pcStack_f4,1,uVar5);
      local_4._0_1_ = 0xfa;
      FUN_004040a0(1);
      pvStack_ec = operator_new(100);
      local_4 = CONCAT31(local_4._1_3_,0xff);
      if (pvStack_ec == (void *)0x0) {
        uVar5 = 0;
        uVar14 = local_e4;
      }
      else {
        local_124[0] = uStack_145;
        FUN_004040a0(0);
        uVar14 = 0xffffffff;
        pcVar12 = s_Bepaalt_de_hoeveelheid_grafische_006a064c;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar9 = ~uVar14 - 1;
        cVar2 = FUN_00401940(uVar9,1);
        uVar14 = local_e4;
        if (cVar2 != '\0') {
          pcVar12 = s_Bepaalt_de_hoeveelheid_grafische_006a064c;
          pcVar16 = pcStack_120;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar16 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar16 = pcVar16 + 1;
          }
          pcStack_120[uVar9] = '\0';
          uStack_11c = uVar9;
        }
        local_e4 = local_e4 | 1;
        local_4 = 0x100;
        uVar5 = FUN_0052eab0(auStack_d8,0x70,0);
        local_4 = 0x101;
        local_e4 = uVar14 | 3;
        uVar5 = FUN_00539430(uVar5,local_124,&LAB_00534360,&LAB_00534210,auStack_fc,3);
        uVar14 = uVar14 | 3;
      }
      local_4 = 0x103;
      FUN_00538500(uVar5);
      local_4 = 0x102;
      if ((uVar14 & 2) != 0) {
        uVar14 = uVar14 & 0xfffffffd;
        local_e4 = uVar14;
        FUN_004040a0(1);
      }
      local_4 = 0xfa;
      if ((uVar14 & 1) != 0) {
        uVar14 = uVar14 & 0xfffffffe;
        local_e4 = uVar14;
        FUN_004040a0(1);
      }
      pcVar16 = pcStack_f4;
      local_4 = CONCAT31(local_4._1_3_,0xe0);
      for (pcVar12 = pcStack_f8; pcVar12 != pcVar16; pcVar12 = pcVar12 + 0x10) {
        FUN_004fe5c0(0);
      }
      FUN_005fe5f0(pcStack_f8);
    }
    pvStack_128 = operator_new(0x40);
    local_4 = 0x104;
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      auStack_fc[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      pcVar12 = (char *)(~uVar9 - 1);
      cVar2 = FUN_00401940(pcVar12,1);
      if (cVar2 != '\0') {
        pcVar16 = &DAT_006b3f70;
        pcVar17 = pcStack_f8;
        for (uVar9 = (uint)pcVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar9 = (uint)pcVar12 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar17 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar17 = pcVar17 + 1;
        }
        pcStack_f8[(int)pcVar12] = '\0';
        pcStack_f4 = pcVar12;
      }
      local_e4 = uVar14 | 4;
      local_4 = CONCAT31(local_4._1_3_,5);
      local_124[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = &DAT_006b3f70;
        pcVar16 = pcStack_120;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcStack_120[uVar9] = '\0';
        uStack_11c = uVar9;
      }
      uVar14 = uVar14 | 0xc;
      local_4 = 0x106;
      local_e4 = uVar14;
      uVar5 = FUN_00538660(local_124,auStack_fc);
    }
    local_4 = 0x108;
    FUN_00538500(uVar5);
    local_4 = 0x107;
    if ((uVar14 & 8) != 0) {
      uVar14 = uVar14 & 0xfffffff7;
      local_e4 = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 4) != 0) {
      uVar14 = uVar14 & 0xfffffffb;
      local_e4 = uVar14;
      FUN_004040a0(1);
    }
    pvStack_128 = operator_new(0x48);
    local_4 = 0x109;
    if (pvStack_128 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      local_124[0] = uStack_145;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar12 = s__Enter____terug_naar_het_vorige_m_006a0864;
        pcVar16 = pcStack_120;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcStack_120[uVar9] = '\0';
        uStack_11c = uVar9;
      }
      local_e4 = uVar14 | 0x10;
      local_4 = CONCAT31(local_4._1_3_,10);
      uVar5 = FUN_0052eab0(auStack_d8,0x61,1);
      uVar14 = uVar14 | 0x30;
      local_4 = 0x10b;
      local_e4 = uVar14;
      uVar5 = FUN_00538690(uVar5,local_124,0,2,0);
    }
    local_4 = 0x10d;
    FUN_00538500(uVar5);
    local_4 = 0x10c;
    if ((uVar14 & 0x20) != 0) {
      uVar14 = uVar14 & 0xffffffdf;
      local_e4 = uVar14;
      FUN_004040a0(1);
    }
    local_4 = 0xe0;
    if ((uVar14 & 0x10) != 0) {
      FUN_004040a0(1);
    }
    FUN_00538500(uStack_100);
    local_4._0_1_ = 0xd1;
    for (pcVar12 = pcStack_134; pcVar12 != pcStack_130; pcVar12 = pcVar12 + 0x10) {
      FUN_004fe5c0(0);
    }
    FUN_005fe5f0(pcStack_134);
    pcVar16 = pcStack_108;
    pcStack_134 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    uStack_12c = 0;
    local_4 = CONCAT31(local_4._1_3_,0xd0);
    for (pcVar12 = pcStack_10c; pcVar12 != pcVar16; pcVar12 = pcVar12 + 0x10) {
      FUN_004fe5c0(0);
    }
    FUN_005fe5f0(pcStack_10c);
  }
  FUN_00537ee0(1);
  piVar11 = local_dc;
  if (local_dc == (int *)0x0) {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14 - 1;
    cVar2 = FUN_00401940(uVar14,1);
    if (cVar2 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar16 = pcStack_120;
      for (uVar9 = uVar14 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar16 = pcVar16 + 1;
      }
      pcStack_120[uVar14] = '\0';
      piVar11 = local_dc;
      uStack_11c = uVar14;
    }
    local_4 = 0x10e;
    pcVar4 = (code *)FUN_005a07f0(s_mState__0_006a0640,s_D__Work_RCHorror_AdamSource_Adam_0069fb00,
                                  0x755,local_124);
    (*pcVar4)();
    local_4 = 0xd0;
    FUN_004040a0(1);
  }
  FUN_0053a420(puStack_e8);
  FUN_0051c500(auStack_80);
  iVar3 = *(int *)(local_c8 + 0x98);
  if ((iVar3 < 0) || (7 < iVar3)) {
    local_124[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar14 - 1);
    local_4 = 0x10f;
    pcVar4 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_124);
    (*pcVar4)();
    local_4 = 0xd0;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(local_c8 + 0x8c) + iVar3 * 4) == 0) {
    auStack_138[0] = uStack_145;
    FUN_004040a0(0);
    uVar14 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar14 - 1);
    local_4 = 0x110;
    pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_138);
    (*pcVar4)();
    local_4 = 0xd0;
    FUN_004040a0(1);
  }
  iVar7 = local_c8;
  if (*(int *)(*(int *)(*(int *)(local_c8 + 0x8c) + iVar3 * 4) + 0x24) != iVar3) {
    FUN_00409810(&DAT_006b3f70,&uStack_145);
    local_4 = 0x111;
    pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_110);
    (*pcVar4)();
    local_4 = 0xd0;
    FUN_004040a0(1);
  }
  FUN_0051c4f0(*(undefined4 *)(*(int *)(iVar7 + 0x8c) + iVar3 * 4));
  FUN_0051ada0();
  do {
    FUN_0051abb0();
    cVar2 = (**(code **)(*piVar11 + 0x18))();
  } while (cVar2 == '\0');
  FUN_0051adc0();
  FUN_0051c500(0);
  FUN_0051c4f0(0);
  if (puStack_e8 != (undefined4 *)0x0) {
    (**(code **)*puStack_e8)(1);
  }
  piVar11 = piStack_114;
  if (*(char *)(iVar7 + 0xac) != '\0') {
    if (DAT_006ba674 != '\0') {
      FUN_004ddeb0(DAT_006ba66c != 0);
      cVar2 = FUN_00402d10();
      if (cVar2 == '\0') {
        FUN_00409810(&DAT_006b3f70,&uStack_145);
        local_4 = 0x113;
        FUN_004eed10(0x2c,local_c4,0,0);
        local_4 = 0xd0;
        FUN_00542570();
      }
      else {
        local_124[0] = uStack_145;
        FUN_004040a0(0);
        uVar14 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14 - 1;
        cVar2 = FUN_00401940(uVar14,1);
        if (cVar2 != '\0') {
          pcVar12 = &DAT_006b3f70;
          pcVar16 = pcStack_120;
          for (uVar9 = uVar14 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar16 = pcVar16 + 1;
          }
          pcStack_120[uVar14] = '\0';
          uStack_11c = uVar14;
        }
        local_4 = 0x112;
        FUN_004eed10(0x2b,local_124,0,0);
        local_4 = 0xd0;
        FUN_00542570();
      }
    }
    if (DAT_006ba675 != '\0') {
      FUN_00534820();
      FUN_00534350();
      FUN_00560620(DAT_006ba670 == 0);
      cVar2 = FUN_005333f0();
      if (cVar2 == '\0') {
        FUN_00409810(&DAT_006b3f70,&uStack_145);
        local_4 = 0x114;
        FUN_004eed10(0x29,local_c4,0,0);
        local_4 = 0xd0;
        FUN_00542570();
      }
      else {
        FUN_00409810(&DAT_006b3f70,&uStack_145);
        local_4 = 0x115;
        FUN_004eed10(0x2a,local_c4,0,0);
        local_4 = 0xd0;
        FUN_00542570();
      }
    }
  }
  uVar5 = FUN_0053b620();
  switch(uVar5) {
  case 0:
    break;
  case 1:
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x789);
    local_4 = 0x116;
    FUN_0052c270();
    uVar5 = 1;
    FUN_00534820(1);
    FUN_004c4440(uVar5);
    local_4 = 0xd0;
    FUN_005ae770();
    break;
  case 2:
    FUN_00409810(s_restart_00694a60,&uStack_b2);
    local_4 = 0x117;
    FUN_00533420(auStack_138);
    goto LAB_0053338a;
  case 3:
    FUN_00409810(&DAT_00694aac,&uStack_b3);
    local_4 = 0x118;
    FUN_00534820();
    piVar11 = (int *)FUN_0040cf10();
    (**(code **)(*piVar11 + 0x1c))(auStack_110);
    goto LAB_0053338a;
  case 4:
    FUN_00534820();
    piVar11 = (int *)FUN_0040cf10();
    FUN_00457240(0);
    local_4 = 0x119;
    iVar7 = 0;
    iVar3 = FUN_00533400();
    if (0 < iVar3) {
      do {
        FUN_005293c0(&pvStack_128,iVar7);
        local_4._0_1_ = 0x1a;
        uVar5 = FUN_00536a40(DAT_006ba668);
        ppiVar18 = &piStack_114;
        FUN_004c4780(ppiVar18,uVar5);
        uVar5 = FUN_004f20b0(ppiVar18,uVar5);
        local_4._0_1_ = 0x1b;
        FUN_00537300(uVar5);
        local_4._0_1_ = 0x1a;
        FUN_0057d310();
        local_4 = CONCAT31(local_4._1_3_,0x19);
        FUN_0057d310();
        cVar2 = FUN_005372f0();
        if (cVar2 != '\0') break;
        iVar7 = iVar7 + 1;
        iVar3 = FUN_00533400();
      } while (iVar7 < iVar3);
    }
    cVar2 = FUN_005372f0();
    if (cVar2 == '\0') {
      FUN_00409810(&DAT_006b3f70,&uStack_b1);
      local_4._0_1_ = 0x1c;
      pcVar4 = (code *)FUN_005a07f0(s_subLevel_IsNotNull___0069f108,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7a0,auStack_fc);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x19);
      FUN_00542570();
    }
    iVar3 = *piVar11;
    FUN_00421430();
    uVar5 = FUN_004f3d10();
    (**(code **)(iVar3 + 0x1c))(uVar5);
    local_4 = 0xd0;
    FUN_0057d310();
    break;
  case 5:
    (**(code **)(*piVar11 + 4))();
    break;
  case 6:
    (**(code **)(*piVar11 + 8))();
    break;
  default:
    uVar5 = FUN_0053b620();
    uVar5 = FUN_005ae390(auStack_d8,s_Unknown_menuCode__i_006a062c,uVar5);
    local_4 = 0x11d;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7ab
                                  ,uVar5);
    (*pcVar4)();
LAB_0053338a:
    local_4 = 0xd0;
    FUN_00542570();
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0044b430();
  local_4 = 0xffffffff;
  FUN_00534c40();
  ExceptionList = local_c;
  return;
}

