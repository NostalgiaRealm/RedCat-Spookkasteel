/*
 * FUN_004f3530 at 004f3530
 * undefined FUN_004f3530(void)
 * Address ranges: 004f3530-004f3a00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004f3530(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_39;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634720;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 7) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = param_2._0_1_;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = &LAB_00566690;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4._0_1_ = 2;
  param_1[0x17] = 0;
  FUN_00566bc0();
  local_4 = CONCAT31(local_4._1_3_,3);
  local_2c[0] = param_2._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_No_world_loaded_0069c658;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_38 = (undefined4 *)uVar5;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = s_No_world_loaded_0069c658;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_28 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_28 = local_28 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 4;
  FUN_00567780(local_2c);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004040a0(1);
  local_1c[0] = param_2._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_No_world_loaded_0069c658;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_38 = (undefined4 *)uVar5;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = s_No_world_loaded_0069c658;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_18 = local_18 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_18 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_18 = local_18 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 7;
  FUN_00567780(local_1c);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xda) = param_2._0_1_;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = FUN_005affe0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe1) = param_2._0_1_;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = FUN_005affe0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined1 *)(param_1 + 0xe9) = param_2._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_38 = (undefined4 *)uVar5;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar9 = (undefined4 *)param_1[0xea];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0xc;
  *(undefined1 *)(param_1 + 0xed) = param_2._0_1_;
  FUN_004040a0(0);
  param_1[0xf2] = 0;
  *(undefined1 *)(param_1 + 0xf1) = param_2._0_1_;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = &LAB_00566670;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0xffffffff;
  param_1[0xf9] = 0xffffffff;
  param_1[0xfa] = 0xffffffff;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x103) = param_2._0_1_;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  local_38 = param_1 + 0x10a;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)local_38 = param_2._0_1_;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  local_4._0_1_ = 0x10;
  FUN_0044e4e0(0);
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x10e) = param_2._0_1_;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = &LAB_00566690;
  *(undefined1 *)(param_1 + 0x114) = 0;
  local_4._0_1_ = 0x12;
  *param_1 = &PTR_FUN_0064f438;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x80);
  local_4._0_1_ = 0x13;
  local_38 = operator_new(0x30);
  local_4._0_1_ = 0x14;
  if (local_38 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0053c680();
  }
  param_1[0x102] = uVar2;
  local_4._0_1_ = 0x13;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_39);
    local_4._0_1_ = 0x15;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 0x13;
    FUN_004040a0(1);
  }
  iVar3 = FUN_00535df0(param_2);
  param_1[0xc] = iVar3;
  if (iVar3 == 0) {
    local_1c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Error_m_SubLevelSettings_not_cre_0069c600;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Error_m_SubLevelSettings_not_cre_0069c600,~uVar5 - 1);
    local_4._0_1_ = 0x16;
    pcVar4 = (code *)FUN_005a07f0(s_m_SubLevelSettings____NULL_0069c5e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x84,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 0x13;
    FUN_004040a0(1);
  }
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

