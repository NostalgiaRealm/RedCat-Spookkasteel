/*
 * FUN_00439010 at 00439010
 * undefined FUN_00439010(void)
 * Address ranges: 00439010-004398f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00439010(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_7c [4];
  char *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  char *local_68;
  uint local_64;
  undefined1 local_5c [4];
  char *local_58;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062416a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004dde50();
  param_1[0xe] = param_2;
  param_1[0xf] = DAT_006b58b4;
  param_1[0x10] = DAT_006b58b4;
  param_1[0x11] = DAT_006b58ac;
  param_1[0x12] = DAT_006b58a4;
  param_1[0x13] = 0;
  param_1[0x15] = DAT_006b58a4;
  param_1[0x16] = DAT_006b5894;
  param_1[0x17] = DAT_006b5890;
  param_1[0x18] = DAT_006b588c;
  local_4 = 0;
  param_1[0x19] = DAT_006b5888;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar3 - 1);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxHealth_00690634;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxHealth_00690634,~uVar3 - 1);
  local_4._0_1_ = 2;
  uVar2 = FUN_0043b0a0(local_3c);
  local_4._0_1_ = 3;
  FUN_005ac8b0(local_4c,local_5c,DAT_006b58b4,uVar2,0);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar3 - 1);
  local_4._0_1_ = 8;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxHealth_00690634;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxHealth_00690634,~uVar3 - 1);
  local_4._0_1_ = 9;
  uVar2 = FUN_0043b0a0(local_2c);
  local_4._0_1_ = 10;
  FUN_005ac8b0(local_6c,local_7c,DAT_006b58b0,uVar2,0);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar3 - 1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = (char *)&DAT_00690790;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00690790,~uVar3 - 1);
  local_4._0_1_ = 0x10;
  uVar2 = FUN_0043b0a0(local_3c);
  local_4._0_1_ = 0x11;
  FUN_005ac9d0(local_4c,local_5c,DAT_006b58ac,uVar2,0);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar3 - 1);
  local_4._0_1_ = 0x16;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MagicPotion_00690784;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MagicPotion_00690784,~uVar3 - 1);
  local_4._0_1_ = 0x17;
  uVar2 = FUN_0043b0a0(local_2c);
  local_4._0_1_ = 0x18;
  FUN_005ac9d0(local_6c,local_7c,DAT_006b5894,uVar2,0);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar3 - 1);
  local_4._0_1_ = 0x1d;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MirrorPart_00690778;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MirrorPart_00690778,~uVar3 - 1);
  local_4._0_1_ = 0x1e;
  uVar2 = FUN_0043b0a0(local_3c);
  local_4._0_1_ = 0x1f;
  FUN_005ac9d0(local_4c,local_5c,DAT_006b588c,uVar2,0);
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_4._0_1_ = 0x22;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x21);
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Player_006902e0;
    pcVar6 = local_78;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,0x24);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Skill_00690770;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Skill_00690770;
    pcVar6 = local_68;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 0x25;
  uVar2 = FUN_0043b0a0(local_2c);
  local_4._0_1_ = 0x26;
  FUN_005ac9d0(local_6c,local_7c,0,uVar2,0);
  local_4._0_1_ = 0x2a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x29;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x28);
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Player_006902e0;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_48 = local_48 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_48 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_48 = local_48 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,0x2b);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Score_00690768;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Score_00690768;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_58 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_58 = local_58 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_58 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_58 = local_58 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 0x2c;
  uVar2 = FUN_0043b0a0(local_1c);
  local_4._0_1_ = 0x2d;
  FUN_005ac9d0(local_5c,local_4c,DAT_006b58a4,uVar2,0);
  local_4._0_1_ = 0x31;
  FUN_004040a0(1);
  local_4._0_1_ = 0x30;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Player_006902e0;
    pcVar6 = local_68;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_68[uVar3] = '\0';
    local_64 = uVar3;
  }
  local_4 = CONCAT31(local_4._1_3_,0x32);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_TotalScore_0069075c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_TotalScore_0069075c;
    pcVar6 = local_78;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 0x33;
  uVar2 = FUN_0043b0a0(local_3c);
  local_4 = CONCAT31(local_4._1_3_,0x34);
  FUN_005ac9d0(local_7c,local_6c,DAT_006b58a4,uVar2,0);
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (local_78 != (char *)0x0) {
    cVar1 = local_78[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_78 + -1);
    }
    else {
      local_78[-1] = cVar1 + -1;
    }
  }
  local_78 = (char *)0x0;
  local_74 = 0;
  local_70 = 0;
  if (local_68 != (char *)0x0) {
    cVar1 = local_68[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_68 + -1);
    }
    else {
      local_68[-1] = cVar1 + -1;
    }
  }
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_0064c5fc;
  ExceptionList = local_c;
  return param_1;
}

