/*
 * FUN_0058d710 at 0058d710
 * undefined FUN_0058d710(void)
 * Address ranges: 0058d710-0058eb92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0058d710(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined *puVar11;
  code *pcVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 *local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643372;
  pvStack_c = ExceptionList;
  local_58 = (float)param_1[0x61] * 0.01;
  local_60 = local_58 * 700.0;
  local_5c = (float)param_1[0x60] * 0.01 * 400.0;
  fVar1 = local_58 * 20.0;
  local_58 = local_58 * 32.0;
  ExceptionList = &pvStack_c;
  if (*(char *)((int)param_1 + 0x175) == '\0') {
    if (param_1[0x5f] == 2) {
      ExceptionList = &pvStack_c;
      local_54 = operator_new(0xa4);
      local_4 = 0;
      if (local_54 == (void *)0x0) {
LAB_0058d7fb:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004b4770(0,param_1 + 0x17,&DAT_006b9e00);
      }
    }
    else {
      ExceptionList = &pvStack_c;
      if (param_1[0x5f] != 3) goto LAB_0058d847;
      ExceptionList = &pvStack_c;
      local_54 = operator_new(0xa4);
      local_4 = 5;
      if (local_54 == (void *)0x0) goto LAB_0058d7fb;
      iVar4 = FUN_004b4770(400,param_1 + 0x17,&DAT_006c9360);
    }
    local_4 = 0xffffffff;
    iVar6 = iVar4;
    FUN_004ad0e0(iVar4);
    FUN_004ad2e0(iVar6);
    FUN_0060a4a0();
    FUN_004041b0(600);
    *(undefined4 *)(iVar4 + 0x70) = 0x3dcccccd;
    *(undefined4 *)(iVar4 + 0x74) = 0x40800000;
    *(undefined4 *)(iVar4 + 0x78) = 0x437f0000;
    *(undefined4 *)(iVar4 + 0x7c) = 0;
    FUN_004ad9a0(0,600);
  }
LAB_0058d847:
  local_54 = operator_new(0x78);
  local_4 = 10;
  if (local_54 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004aed80(0,param_1 + 0x17,local_5c);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  if ((int *)param_1[0x5e] == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*(int *)param_1[0x5e] + 8))();
  }
  FUN_004afff0(uVar5);
  FUN_004af090(param_1[0x62],param_1[99],param_1[100]);
  uVar5 = __ftol();
  FUN_004aefa0(uVar5);
  FUN_004ad9a0(0,400);
  local_54 = operator_new(0x6c);
  local_4 = 0xb;
  if (local_54 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ac120(0,param_1 + 0x17,&DAT_006ba1a0);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  fStack_64 = (float)param_1[0x61] * 0.04;
  if (0.4 <= fStack_64) {
    if (0.98 < fStack_64) {
      fStack_64 = 0.98;
    }
  }
  else {
    fStack_64 = 0.4;
  }
  if (*(char *)((int)param_1 + 0x175) != '\0') {
    fStack_64 = 0.4;
  }
  FUN_004ac660(&fStack_64);
  local_54 = operator_new(0x78);
  local_4 = 0xc;
  if (local_54 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004aed80(400,param_1 + 0x17,local_5c * 0.5);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  if ((int *)param_1[0x5e] == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*(int *)param_1[0x5e] + 8))();
  }
  FUN_004afff0(uVar5);
  FUN_004af090(param_1[0x62],param_1[99],param_1[100]);
  uVar5 = __ftol();
  FUN_004aefa0(uVar5);
  FUN_004ad9a0(0,400);
  if ((char)param_1[0x5d] != '\0') {
    iVar6 = FUN_00557970();
    iVar4 = *(int *)(iVar6 + 100);
    if (iVar4 == -0x80000000) {
      puVar7 = *(undefined1 **)(iVar6 + 0x18);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar7);
      *(int *)(iVar6 + 100) = iVar4;
    }
    if (iVar4 == 3) {
      iVar4 = FUN_0060a4a0();
      local_5c = (float)(iVar4 % 10000);
      local_60 = (float)(int)local_5c * 0.001 + 30.0;
      uVar8 = FUN_0060a4a0();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      local_5c = (float)((-(uint)(uVar8 != 0) & 0xfffffffe) + 1);
      fStack_50 = (float)(int)local_5c * local_60;
      iVar4 = FUN_0060a4a0();
      local_5c = (float)(iVar4 % 10000);
      fStack_4c = (float)(int)local_5c * 0.01 + 350.0;
      iVar4 = FUN_0060a4a0();
      local_5c = (float)(iVar4 % 10000);
      fStack_48 = (float)(int)local_5c * 0.008 - 40.0;
      FUN_005b2fa0(0x3f000000);
      puVar9 = operator_new(0x8c);
      local_4 = 0xd;
      local_54 = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_004ad7d0(0);
        local_4 = CONCAT31(local_4._1_3_,0xe);
        *(char *)(puVar9 + 0x14) = (char)param_1[0x17];
        FUN_004040a0(0);
        FUN_0040cc00(param_1 + 0x17,0,0xffffffff);
        puVar9[0x21] = 0x411ccccd;
        *(undefined1 *)(puVar9 + 0x22) = 0;
        *puVar9 = &PTR_FUN_0064d7dc;
      }
      local_4 = 0xffffffff;
      puVar15 = puVar9;
      FUN_004ad0e0(puVar9);
      FUN_004ad2e0(puVar15);
      puVar9[0x1e] = fStack_50;
      puVar9[0x1f] = fStack_4c;
      puVar9[0x20] = fStack_48;
      FUN_004ad9a0(300,699);
    }
  }
  if (*(char *)((int)param_1 + 0x175) != '\0') goto LAB_0058e87a;
  local_5c = (float)param_1[0x61] * 0.01 * 800.0;
  local_54 = operator_new(0xd4);
  local_4 = 0xf;
  if (local_54 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ae560(0,param_1 + 0x17);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  iVar4 = param_1[0x5f];
  if (iVar4 == 1) {
LAB_0058dc7e:
    uStack_1c = 0x437f0000;
    uStack_18 = 0x43400000;
    uStack_14 = 0;
  }
  else if (iVar4 == 2) {
    uStack_1c = 0x42080000;
    uStack_18 = 0x435a0000;
    uStack_14 = 0x42200000;
  }
  else {
    if (iVar4 != 3) goto LAB_0058dc7e;
    uStack_1c = 0x42a00000;
    uStack_18 = 0x43750000;
    uStack_14 = 0x435c0000;
  }
  uStack_10 = 0x437f0000;
  FUN_004aea40(&uStack_1c);
  FUN_005a80c0(1000);
  fVar10 = (float)__ftol();
  local_60 = fVar10;
  FUN_004ae950(fVar10);
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar14 = (char *)&DAT_006928b8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar3 != '\0');
  local_5c = (float)(~uVar8 - 1);
  cVar3 = FUN_00401940(local_5c,1);
  if (cVar3 != '\0') {
    puVar9 = &DAT_006928b8;
    puVar15 = puStack_28;
    for (uVar8 = (uint)local_5c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar8 = (uint)local_5c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    FUN_00404190(local_5c);
    fVar10 = local_60;
  }
  local_4 = 0x10;
  FUN_004ae800(0x3f800000,auStack_2c,0,fVar10,0);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (*(char *)((int)param_1 + 0x175) != '\0') goto LAB_0058e87a;
  iVar4 = param_1[0x5f];
  if (iVar4 == 1) {
    local_54 = operator_new(0x6c);
    local_4 = 0x11;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x17,&DAT_006c9e10,&DAT_006c9e48);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1 * 0.5);
    local_54 = operator_new(0x6c);
    local_4 = 0x12;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x17,&DAT_006c9da0,&DAT_006c9dd8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1 * 0.6);
    local_54 = operator_new(0x6c);
    local_4 = 0x13;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x17,&DAT_006c9d28,&DAT_006c9d68);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar10 = fVar1 * 0.8;
    local_60 = fVar10;
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x14;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x17,&DAT_006c9cb8,&DAT_006c9cf0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar2 = fVar1 * 0.9;
    local_5c = fVar2;
    FUN_004ac810(fVar2);
    local_54 = operator_new(0x6c);
    local_4 = 0x15;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x17,&DAT_006c9c48,&DAT_006c9c80);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1 * 0.95);
    local_54 = operator_new(0x6c);
    local_4 = 0x16;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x17,&DAT_006c9bd8,&DAT_006c9c10);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar2);
    local_54 = operator_new(0x6c);
    local_4 = 0x17;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x17,&DAT_006c9b60,&DAT_006c9ba0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x18;
    if (local_54 != (undefined4 *)0x0) {
      puVar16 = &DAT_006c9b28;
      puVar11 = &DAT_006c9af0;
      goto LAB_0058e83c;
    }
LAB_0058e850:
    uVar5 = 0;
LAB_0058e856:
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar10 = fVar1 * 0.7;
  }
  else {
    if (iVar4 == 2) {
      local_54 = operator_new(0x6c);
      local_4 = 0x19;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(0,param_1 + 0x17,&DAT_006c9a80,&DAT_006c9ab8);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.5);
      local_54 = operator_new(0x6c);
      local_4 = 0x1a;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(100,param_1 + 0x17,&DAT_006c9a10,&DAT_006c9a48);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.6);
      local_54 = operator_new(0x6c);
      local_4 = 0x1b;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(200,param_1 + 0x17,&DAT_006c9998,&DAT_006c99d8);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      fVar10 = fVar1 * 0.8;
      local_60 = fVar10;
      FUN_004ac810(fVar10);
      local_54 = operator_new(0x6c);
      local_4 = 0x1c;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(300,param_1 + 0x17,&DAT_006c9928,&DAT_006c9960);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      fVar2 = fVar1 * 0.9;
      local_5c = fVar2;
      FUN_004ac810(fVar2);
      local_54 = operator_new(0x6c);
      local_4 = 0x1d;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(400,param_1 + 0x17,&DAT_006c98b8,&DAT_006c98f0);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.95);
      local_54 = operator_new(0x6c);
      local_4 = 0x1e;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(500,param_1 + 0x17,&DAT_006c9848,&DAT_006c9880);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar2);
      local_54 = operator_new(0x6c);
      local_4 = 0x1f;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(600,param_1 + 0x17,&DAT_006c97d0,&DAT_006c9810);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar10);
      local_54 = operator_new(0x6c);
      local_4 = 0x20;
      if (local_54 == (undefined4 *)0x0) goto LAB_0058e850;
      puVar16 = &DAT_006c9798;
      puVar11 = &DAT_006c9760;
LAB_0058e83c:
      uVar5 = FUN_004ac6a0(699,param_1 + 0x17,puVar11,puVar16);
      goto LAB_0058e856;
    }
    if (iVar4 != 3) {
      local_54 = operator_new(0x6c);
      local_4 = 0x27;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(0,param_1 + 0x17,&DAT_006c9e10,&DAT_006c9e48);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.5);
      local_54 = operator_new(0x6c);
      local_4 = 0x28;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(100,param_1 + 0x17,&DAT_006c9da0,&DAT_006c9dd8);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.6);
      local_54 = operator_new(0x6c);
      local_4 = 0x29;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(200,param_1 + 0x17,&DAT_006c9d28,&DAT_006c9d68);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      local_60 = fVar1 * 0.8;
      FUN_004ac810(local_60);
      local_54 = operator_new(0x6c);
      local_4 = 0x2a;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(300,param_1 + 0x17,&DAT_006c9cb8,&DAT_006c9cf0);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      fVar10 = fVar1 * 0.9;
      local_5c = fVar10;
      FUN_004ac810(fVar10);
      local_54 = operator_new(0x6c);
      local_4 = 0x2b;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(400,param_1 + 0x17,&DAT_006c9c48,&DAT_006c9c80);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar1 * 0.95);
      local_54 = operator_new(0x6c);
      local_4 = 0x2c;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(500,param_1 + 0x17,&DAT_006c9bd8,&DAT_006c9c10);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(fVar10);
      local_54 = operator_new(0x6c);
      local_4 = 0x2d;
      if (local_54 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(600,param_1 + 0x17,&DAT_006c9b60,&DAT_006c9ba0);
      }
      local_4 = 0xffffffff;
      FUN_004ad0e0(uVar5);
      FUN_004ad2e0(uVar5);
      FUN_004ac810(local_60);
      local_54 = operator_new(0x6c);
      local_4 = 0x2e;
      if (local_54 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004ac6a0(699,param_1 + 0x17,&DAT_006c9af0,&DAT_006c9b28);
      }
      goto LAB_0058e856;
    }
    local_54 = operator_new(0x6c);
    local_4 = 0x21;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x17,&DAT_006c96f0,&DAT_006c9728);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar10 = fVar1 * 0.4;
    local_5c = fVar10;
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x22;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x17,&DAT_006c9680,&DAT_006c96b8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x23;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x17,&DAT_006c9608,&DAT_006c9648);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x24;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x17,&DAT_006c9598,&DAT_006c95d0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x25;
    if (local_54 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x17,&DAT_006c9528,&DAT_006c9560);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar10 = fVar1 * 0.0001;
    local_5c = fVar10;
    FUN_004ac810(fVar10);
    local_54 = operator_new(0x6c);
    local_4 = 0x26;
    if (local_54 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(1000,param_1 + 0x17,&DAT_006c94b8,&DAT_006c94f0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
  }
  FUN_004ac810(fVar10);
LAB_0058e87a:
  uStack_38 = 0;
  fStack_40 = local_58;
  fStack_50 = -local_58;
  uStack_34 = 0x3f800000;
  uStack_30 = 0;
  fStack_4c = 0.0;
  fStack_44 = local_58;
  fStack_3c = local_58;
  if (param_1[0x5f] != 3) {
    fStack_48 = fStack_50;
    local_54 = operator_new(200);
    local_4 = 0x2f;
    if (local_54 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      puVar11 = &DAT_006c9e80;
      if (param_1[0x5f] != 2) {
        puVar11 = &DAT_006c9ef0;
      }
      puVar9 = &uStack_38;
      uVar5 = (**(code **)(*param_1 + 0x48))(auStack_2c,puVar11,puVar9);
      iVar4 = FUN_004b2930(200,param_1 + 0x17,uVar5,puVar11,puVar9);
    }
    local_4 = 0xffffffff;
    iVar6 = iVar4;
    FUN_004ad0e0(iVar4);
    FUN_004ad2e0(iVar6);
    local_58 = fVar1 * 0.4;
    *(undefined4 *)(iVar4 + 0x60) = 0x4b0;
    *(undefined4 *)(iVar4 + 0x8c) = 1;
    *(undefined4 *)(iVar4 + 0x90) = 1;
    *(undefined4 *)(iVar4 + 100) = 0x707;
    if (local_58 < 0.0) {
      uVar8 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      uVar8 = ~uVar8 - 1;
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar3 = FUN_00401940(uVar8,1);
      if (cVar3 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar15 = puStack_28;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar13 = uVar8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4 = 0x30;
      pcVar12 = (code *)FUN_005a07f0(s_a_Size_>__0_00696268,
                                     s_D__Work_RCHorror_AdamSource_Adam_006a6224,0x5b,auStack_2c);
      (*pcVar12)();
      local_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)puStack_28 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_28 + -1));
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar3 + -1;
        }
      }
    }
    fVar1 = fVar1 * 0.8;
    *(float *)(iVar4 + 0x68) = local_58;
    local_58 = fVar1;
    if (fVar1 < 0.0) {
      uVar8 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      uVar8 = ~uVar8 - 1;
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar3 = FUN_00401940(uVar8,1);
      if (cVar3 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar15 = puStack_28;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar13 = uVar8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4 = 0x31;
      pcVar12 = (code *)FUN_005a07f0(s_a_Size_>__0_00696268,
                                     s_D__Work_RCHorror_AdamSource_Adam_006a6224,0x61,auStack_2c);
      (*pcVar12)();
      local_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)puStack_28 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_28 + -1));
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar3 + -1;
        }
      }
    }
    *(float *)(iVar4 + 0x6c) = local_58;
    *(float *)(iVar4 + 0xbc) = fStack_50;
    *(undefined4 *)(iVar4 + 0x84) = 0x41c80000;
    *(float *)(iVar4 + 0xc0) = fStack_4c;
    *(undefined4 *)(iVar4 + 0x88) = 0x42200000;
    *(undefined4 *)(iVar4 + 0x70) = 0x42480000;
    *(float *)(iVar4 + 0xc4) = fStack_48;
    *(float *)(iVar4 + 0xb0) = fStack_44;
    *(undefined4 *)(iVar4 + 0x74) = 0x42c80000;
    *(float *)(iVar4 + 0xb4) = fStack_40;
    *(undefined4 *)(iVar4 + 0x78) = 0x42a00000;
    *(undefined4 *)(iVar4 + 0x7c) = 0x41200000;
    *(float *)(iVar4 + 0xb8) = fStack_3c;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    FUN_004ad9a0(400,1000);
  }
  ExceptionList = pvStack_c;
  return;
}

