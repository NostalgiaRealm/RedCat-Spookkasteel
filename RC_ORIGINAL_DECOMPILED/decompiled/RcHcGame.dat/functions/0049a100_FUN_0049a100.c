/*
 * FUN_0049a100 at 0049a100
 * undefined FUN_0049a100(void)
 * Address ranges: 0049a100-0049a79c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0049a100(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_d1;
  float local_d0;
  undefined1 local_cc [4];
  char *local_c8;
  uint local_c4;
  undefined1 local_bc [4];
  char *local_b8;
  undefined1 local_ac [4];
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined4 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c694;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_004fe870(param_2);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xca) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  local_bc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_MaxHealth_00690634;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxHealth_00690634,~uVar4 - 1);
  local_4._0_1_ = 2;
  uVar2 = FUN_0043b0a0(local_ac);
  local_4._0_1_ = 3;
  FUN_005ac8b0(local_bc,param_2,DAT_006b58b0,uVar2,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_cc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_00690790;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00690790,~uVar4 - 1);
  local_4._0_1_ = 7;
  uVar2 = FUN_0043b0a0(local_9c);
  local_4._0_1_ = 8;
  FUN_005ac9d0(local_cc,param_2,DAT_006b58ac,uVar2,0);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_bc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_Score_00690768;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Score_00690768,~uVar4 - 1);
  local_4._0_1_ = 0xc;
  uVar2 = FUN_0043b0a0(local_ac);
  local_4._0_1_ = 0xd;
  FUN_005ac9d0(local_bc,param_2,DAT_006b58a4,uVar2,0);
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_cc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_MagicPotion_00690784;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MagicPotion_00690784,~uVar4 - 1);
  local_4._0_1_ = 0x11;
  uVar2 = FUN_0043b0a0(local_9c);
  local_4._0_1_ = 0x12;
  FUN_005ac9d0(local_cc,param_2,DAT_006b5894,uVar2,0);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_bc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_MaxMagicPotion_00694ae8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxMagicPotion_00694ae8,~uVar4 - 1);
  local_4._0_1_ = 0x16;
  uVar2 = FUN_0043b0a0(local_8c);
  local_4._0_1_ = 0x17;
  FUN_005ac9d0(local_bc,param_2,DAT_006b5890,uVar2,0);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  local_ac[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_MirrorPart_00690778;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MirrorPart_00690778,~uVar4 - 1);
  local_4._0_1_ = 0x1b;
  uVar2 = FUN_0043b0a0(local_9c);
  local_4._0_1_ = 0x1c;
  FUN_005ac9d0(local_ac,param_2,DAT_006b588c,uVar2,0);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x1e);
  FUN_004040a0(1);
  local_cc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_MaxMirrorPart_00690820;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_d0 = (float)uVar4;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_MaxMirrorPart_00690820;
    pcVar7 = local_c8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 0x20;
  uVar2 = FUN_0043b0a0(local_8c);
  local_4._0_1_ = 0x21;
  FUN_005ac9d0(local_cc,param_2,DAT_006b5888,uVar2,0);
  local_4._0_1_ = 0x24;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x23);
  FUN_004040a0(1);
  local_bc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_Skill_00690770;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_d0 = (float)uVar4;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_Skill_00690770;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_b8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_b8 = local_b8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_b8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_b8 = local_b8 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 0x25;
  uVar2 = FUN_0043b0a0(local_9c);
  local_4._0_1_ = 0x26;
  FUN_005ac9d0(local_bc,param_2,0,uVar2,0);
  local_4._0_1_ = 0x29;
  FUN_004040a0(1);
  local_4._0_1_ = 0x28;
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064e7a8;
  local_cc[0] = local_d1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_Health_0068fb70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_d0 = (float)uVar4;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_Health_0068fb70;
    pcVar7 = local_c8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_c8[uVar4] = '\0';
    local_c4 = uVar4;
  }
  local_4._0_1_ = 0x2a;
  uVar2 = FUN_0043b0a0(local_ac);
  local_4._0_1_ = 0x2b;
  iVar3 = FUN_005ac8b0(local_cc,param_2,DAT_006b58b4,uVar2,0);
  local_4._0_1_ = 0x2c;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14,&local_d1);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
    local_d0 = (float)fVar8;
  }
  else {
    local_d0 = *(float *)(iVar3 + 0x60);
  }
  FUN_004ff010(local_d0);
  local_4 = CONCAT31(local_4._1_3_,0x2b);
  FUN_005acca0();
  if (local_a8 != 0) {
    cVar1 = *(char *)(local_a8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_a8 + -1));
    }
    else {
      *(char *)(local_a8 + -1) = cVar1 + -1;
    }
  }
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  if (local_c8 != (char *)0x0) {
    cVar1 = local_c8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_c8 + -1);
    }
    else {
      local_c8[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

