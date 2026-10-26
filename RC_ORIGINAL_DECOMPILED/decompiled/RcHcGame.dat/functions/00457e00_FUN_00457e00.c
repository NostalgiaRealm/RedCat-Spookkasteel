/*
 * FUN_00457e00 at 00457e00
 * undefined FUN_00457e00(void)
 * Address ranges: 00457e00-00458815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00457e00(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  float10 fVar11;
  undefined4 *local_bc;
  undefined1 local_a5;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined4 *local_6c;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626cbc;
  pvStack_c = ExceptionList;
  local_bc = (undefined4 *)&DAT_006b7108;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_00501cb0();
  puVar1 = PTR_s_RcCamera_00691cf0;
  local_bc = (undefined4 *)0x0;
  local_4 = 0;
  local_70[0] = local_a5;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  pcVar10 = puVar1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  local_bc = (undefined4 *)(~uVar6 - 1);
  FUN_004040f0(puVar1);
  puVar1 = PTR_s_TurnSpeed_00691cf4;
  local_a0._0_1_ = local_a5;
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 1;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  pcVar10 = puVar1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  local_bc = (undefined4 *)(~uVar6 - 1);
  FUN_004040f0(puVar1);
  local_bc = local_60;
  local_4._0_1_ = 2;
  uVar3 = FUN_00436f90();
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 3;
  FUN_005ac8b0(&local_a0,local_70,0x40000000,uVar3);
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 7;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 6;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004040a0();
  puVar8 = (undefined4 *)PTR_s_RcCamera_00691cf0;
  local_90 = CONCAT31(local_90._1_3_,local_a5);
  local_bc = (undefined4 *)0x0;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    puVar9 = local_8c;
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  puVar8 = (undefined4 *)PTR_s_TurnRatio_00691cf8;
  local_80 = CONCAT31(local_80._1_3_,local_a5);
  local_bc = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    puVar9 = local_7c;
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  local_bc = local_20;
  local_4._0_1_ = 9;
  uVar3 = FUN_00436f90();
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 10;
  FUN_005ac8b0(&local_80,&local_90,0x3f400000,uVar3);
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0xe;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0xd;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0();
  puVar8 = (undefined4 *)PTR_s_RcCamera_00691cf0;
  local_bc = (undefined4 *)0x0;
  local_a0._0_1_ = local_a5;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    puVar9 = local_9c;
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  puVar8 = (undefined4 *)PTR_s_TurnDelay_00691cfc;
  local_70[0] = local_a5;
  local_bc = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    puVar9 = local_6c;
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  local_bc = local_60;
  local_4._0_1_ = 0x10;
  uVar3 = FUN_00436f90();
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 0x11;
  FUN_005ac8b0(local_70,&local_a0,0,uVar3);
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x15;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x14;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_004040a0();
  puVar8 = (undefined4 *)PTR_s_RcCamera_00691cf0;
  local_bc = (undefined4 *)0x0;
  local_90 = CONCAT31(local_90._1_3_,local_a5);
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_8c = *puVar8;
      puVar8 = puVar8 + 1;
      local_8c = local_8c + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_8c = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      local_8c = (undefined4 *)((int)local_8c + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  puVar8 = (undefined4 *)PTR_s_TAccDelay_00691d00;
  local_80 = CONCAT31(local_80._1_3_,local_a5);
  local_bc = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_7c = *puVar8;
      puVar8 = puVar8 + 1;
      local_7c = local_7c + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_7c = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      local_7c = (undefined4 *)((int)local_7c + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  local_bc = local_20;
  local_4._0_1_ = 0x17;
  uVar3 = FUN_00436f90();
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 0x18;
  FUN_005ac8b0(&local_80,&local_90,0,uVar3);
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x1c;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x1b;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  FUN_004040a0();
  puVar8 = (undefined4 *)PTR_s_RcCamera_00691cf0;
  local_bc = (undefined4 *)0x0;
  local_70[0] = local_a5;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_6c = *puVar8;
      puVar8 = puVar8 + 1;
      local_6c = local_6c + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_6c = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      local_6c = (undefined4 *)((int)local_6c + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  puVar8 = (undefined4 *)PTR_s_ViewDistance_00691d04;
  local_bc = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  local_a0._0_1_ = local_a5;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  local_bc = (undefined4 *)0x1;
  pcVar10 = (char *)puVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  puVar7 = (undefined4 *)(~uVar6 - 1);
  local_a4 = puVar7;
  cVar2 = FUN_00401940(puVar7);
  if (cVar2 != '\0') {
    puVar9 = local_9c;
    for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_bc = puVar7;
    FUN_00404190();
  }
  local_bc = local_60;
  local_4._0_1_ = 0x1e;
  uVar3 = FUN_00436f90();
  local_bc = (undefined4 *)0x0;
  local_4._0_1_ = 0x1f;
  FUN_005ac8b0(&local_a0,local_70,0x43340000,uVar3);
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x23;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  local_bc = (undefined4 *)0x1;
  local_4._0_1_ = 0x21;
  FUN_004040a0();
  local_a4 = &local_bc;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  local_bc = (undefined4 *)0x0;
  FUN_005545a0();
  local_a4 = &local_bc;
  local_4._0_1_ = 0x24;
  local_bc = (undefined4 *)0x0;
  FUN_005545a0();
  param_1[0xd8] = param_2;
  param_1[0xd9] = 0;
  param_1[0xeb] = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  param_1[0xed] = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  *(undefined1 *)((int)param_1 + 0x432) = 0;
  param_1[0x113] = 5;
  param_1[0x114] = 5;
  *(undefined1 *)(param_1 + 0x115) = 1;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)((int)param_1 + 0x521) = 0;
  *(undefined1 *)((int)param_1 + 0x522) = 0;
  *(undefined1 *)((int)param_1 + 0x523) = 0;
  param_1[0x14a] = 0;
  *param_1 = &PTR_FUN_0064d5f4;
  local_38 = 0xbf6147ae;
  local_34 = 0xbf6147ae;
  local_30 = 0xbf6147ae;
  local_4 = CONCAT31(local_4._1_3_,0x25);
  local_2c = 0x3f6147ae;
  local_28 = 0x3f6147ae;
  local_40 = 0x41000000;
  local_24 = 0x3f6147ae;
  local_50 = 0xc1000000;
  local_4c = 0xc1000000;
  local_48 = 0xc1000000;
  local_44 = 0x41000000;
  local_3c = 0x41000000;
  local_90 = 0;
  local_8c = (undefined4 *)0x0;
  local_88 = 0;
  local_80 = 0xbf800000;
  local_7c = (undefined4 *)0xbf800000;
  local_78 = 0xbf800000;
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    local_bc = (undefined4 *)0x458553;
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    local_bc = (undefined4 *)0x0;
    local_a0._0_1_ = local_a5;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    local_bc = (undefined4 *)0x1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    puVar8 = (undefined4 *)(~uVar6 - 1);
    local_a4 = puVar8;
    cVar2 = FUN_00401940(puVar8);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = (uint)puVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_9c = *puVar7;
        puVar7 = puVar7 + 1;
        local_9c = local_9c + 1;
      }
      for (uVar6 = (uint)puVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_9c = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_9c = (undefined4 *)((int)local_9c + 1);
      }
      local_bc = puVar8;
      FUN_00404190();
    }
    local_bc = &local_a0;
    local_4._0_1_ = 0x26;
    pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,0x25);
    local_bc = (undefined4 *)0x1;
    FUN_004040a0();
  }
  param_1[0xda] = local_90;
  param_1[0xdb] = local_8c;
  param_1[0xdc] = local_88;
  param_1[0xdd] = local_90;
  param_1[0xde] = local_8c;
  param_1[0xdf] = local_88;
  param_1[0xe0] = local_80;
  param_1[0xe1] = local_7c;
  param_1[0xe2] = local_78;
  param_1[0xe3] = local_90;
  param_1[0xe4] = local_8c;
  param_1[0xe5] = local_88;
  if ((float)param_1[0xc2] == 0.0) {
    local_bc = (undefined4 *)&local_a5;
    fVar11 = (float10)FUN_005ad390(param_1 + 0xaf);
    param_1[0xc2] = (float)fVar11;
  }
  else {
    fVar11 = (float10)(float)param_1[0xc2];
  }
  param_1[0xe6] = (float)fVar11;
  if ((float)param_1[0x56] == 0.0) {
    local_bc = (undefined4 *)&local_a5;
    fVar11 = (float10)FUN_005ad390(param_1 + 0x43);
    param_1[0x56] = (float)fVar11;
  }
  else {
    fVar11 = (float10)(float)param_1[0x56];
  }
  param_1[0xe7] = (float)fVar11;
  if ((float)param_1[0x71] == 0.0) {
    local_bc = (undefined4 *)&local_a5;
    fVar11 = (float10)FUN_005ad390(param_1 + 0x5e);
    param_1[0x71] = (float)fVar11;
  }
  else {
    fVar11 = (float10)(float)param_1[0x71];
  }
  param_1[0xe8] = (float)fVar11;
  if ((float)param_1[0x8c] == 0.0) {
    local_bc = (undefined4 *)&local_a5;
    fVar11 = (float10)FUN_005ad390(param_1 + 0x79);
    param_1[0x8c] = (float)fVar11;
  }
  else {
    fVar11 = (float10)(float)param_1[0x8c];
  }
  param_1[0xe9] = (float)fVar11;
  local_bc = &local_38;
  FUN_00554a30();
  local_bc = &local_50;
  FUN_00554a30();
  local_bc = (undefined4 *)0x0;
  *(bool *)(param_1 + 0xc5) = param_1[0xd8] != 0;
  FUN_00502350();
  local_bc = (undefined4 *)0x458785;
  FUN_005b3070();
  local_bc = (undefined4 *)0x458790;
  FUN_005b3070();
  param_1[0x103] = 0x350637bd;
  param_1[0x102] = 0x3f000000;
  param_1[0x101] = 0;
  local_bc = (undefined4 *)0x4587b5;
  FUN_005b3070();
  local_bc = (undefined4 *)0x4587c0;
  FUN_005b3070();
  param_1[0x108] = 0;
  local_bc = (undefined4 *)0x4587d1;
  FUN_005b3070();
  local_bc = (undefined4 *)0x4587dc;
  FUN_005b3070();
  local_bc = (undefined4 *)0x4587e7;
  FUN_005b3070();
  local_bc = (undefined4 *)0x4587f2;
  FUN_005b3070();
  *(undefined1 *)(param_1 + 0xfa) = 1;
  ExceptionList = pvStack_c;
  return param_1;
}

