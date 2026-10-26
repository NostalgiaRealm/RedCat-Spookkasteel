/*
 * FUN_00463550 at 00463550
 * undefined FUN_00463550(void)
 * Address ranges: 00463550-00464c21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00463550(int param_1)

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
  void *pvVar10;
  float fVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  float fStack_44;
  void *pvStack_40;
  undefined4 *local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062765d;
  pvStack_c = ExceptionList;
  fVar11 = *(float *)(param_1 + 0x1cc) * 0.01 * 5.0;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x195) == '\0') {
    if (*(int *)(param_1 + 0x19c) == 1) {
      ExceptionList = &pvStack_c;
      local_3c = operator_new(0xa4);
      local_4 = 0;
      if (local_3c == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004b4770(0,param_1 + 0x5c,&DAT_006b9e00);
      }
      local_4 = 0xffffffff;
      iVar6 = iVar4;
      FUN_004ad0e0(iVar4);
      FUN_004ad2e0(iVar6);
      FUN_0060a4a0();
      FUN_004041b0(600);
      *(undefined4 *)(iVar4 + 0x70) = 0x3dcccccd;
      *(undefined4 *)(iVar4 + 0x74) = 0x40800000;
    }
    else {
      ExceptionList = &pvStack_c;
      if (*(int *)(param_1 + 0x19c) != 2) goto LAB_0046368e;
      ExceptionList = &pvStack_c;
      local_3c = operator_new(0xa4);
      local_4 = 5;
      if (local_3c == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004b4770(400,param_1 + 0x5c,&DAT_006b71d0);
      }
      local_4 = 0xffffffff;
      iVar6 = iVar4;
      FUN_004ad0e0(iVar4);
      FUN_004ad2e0(iVar6);
      FUN_0060a4a0();
      FUN_004041b0(600);
      *(undefined4 *)(iVar4 + 0x70) = 0x3dcccccd;
      *(undefined4 *)(iVar4 + 0x74) = 0x3e4ccccd;
    }
    *(undefined4 *)(iVar4 + 0x78) = 0x437f0000;
    *(undefined4 *)(iVar4 + 0x7c) = 0;
    FUN_004ad9a0(0,600);
  }
LAB_0046368e:
  local_3c = operator_new(0x78);
  local_4 = 10;
  if (local_3c == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004aed80(0,param_1 + 0x5c,0);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  if (*(int **)(param_1 + 0x198) == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x198) + 8))();
  }
  FUN_004afff0(uVar5);
  FUN_004aefa0(0);
  FUN_004ad9a0(0,400);
  local_3c = operator_new(0x6c);
  local_4 = 0xb;
  if (local_3c == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ac120(0,param_1 + 0x5c,param_1 + 0x1a0);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  fStack_44 = *(float *)(param_1 + 0x1cc) * 0.04;
  if (0.4 <= fStack_44) {
    if (0.98 < fStack_44) {
      fStack_44 = 0.98;
    }
  }
  else {
    fStack_44 = 0.4;
  }
  if (*(char *)(param_1 + 0x195) != '\0') {
    fStack_44 = 0.4;
  }
  FUN_004ac660(&fStack_44);
  local_3c = operator_new(0x78);
  local_4 = 0xc;
  if (local_3c == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004aed80(400,param_1 + 0x5c,0);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  if (*(int **)(param_1 + 0x198) == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x198) + 8))();
  }
  FUN_004afff0(uVar5);
  FUN_004aefa0(0);
  FUN_004ad9a0(0,400);
  if (*(char *)(param_1 + 0x194) != '\0') {
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
      pvStack_40 = (void *)(iVar4 % 10000);
      local_3c = (undefined4 *)((float)(int)pvStack_40 * 0.001 + 30.0);
      uVar8 = FUN_0060a4a0();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      pvStack_40 = (void *)((-(uint)(uVar8 != 0) & 0xfffffffe) + 1);
      fStack_38 = (float)(int)pvStack_40 * (float)local_3c;
      iVar4 = FUN_0060a4a0();
      local_3c = (undefined4 *)(iVar4 % 10000);
      fStack_34 = (float)(int)local_3c * 0.01 + 350.0;
      iVar4 = FUN_0060a4a0();
      local_3c = (undefined4 *)(iVar4 % 10000);
      fStack_30 = (float)(int)local_3c * 0.008 - 40.0;
      FUN_005b2fa0(0x3f000000);
      puVar9 = operator_new(0x8c);
      local_4 = 0xd;
      local_3c = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_004ad7d0(0);
        local_4 = CONCAT31(local_4._1_3_,0xe);
        *(undefined1 *)(puVar9 + 0x14) = *(undefined1 *)(param_1 + 0x5c);
        FUN_004040a0(0);
        FUN_0040cc00((undefined1 *)(param_1 + 0x5c),0,0xffffffff);
        puVar9[0x21] = 0x411ccccd;
        *(undefined1 *)(puVar9 + 0x22) = 0;
        *puVar9 = &PTR_FUN_0064d7dc;
      }
      local_4 = 0xffffffff;
      puVar14 = puVar9;
      FUN_004ad0e0(puVar9);
      FUN_004ad2e0(puVar14);
      puVar9[0x1e] = fStack_38;
      puVar9[0x1f] = fStack_34;
      puVar9[0x20] = fStack_30;
      FUN_004ad9a0(300,699);
    }
  }
  if (*(char *)(param_1 + 0x195) != '\0') {
    ExceptionList = pvStack_c;
    return;
  }
  local_3c = (undefined4 *)(*(float *)(param_1 + 0x1cc) * 0.01 * 360.0);
  pvStack_40 = operator_new(0xd4);
  local_4 = 0xf;
  if (pvStack_40 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ae560(0,param_1 + 0x5c);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  switch(*(undefined4 *)(param_1 + 0x19c)) {
  default:
    uStack_2c = 0x437f0000;
    uStack_28 = 0x43400000;
    uStack_24 = 0;
    break;
  case 2:
    uStack_2c = 0x42080000;
    uStack_28 = 0x435a0000;
    uStack_24 = 0x42200000;
    break;
  case 3:
    uStack_2c = 0x42a00000;
    uStack_28 = 0x43750000;
    uStack_24 = 0x435c0000;
  }
  uStack_20 = 0x437f0000;
  FUN_004aea40(&uStack_2c);
  FUN_005a80c0(1000);
  pvVar10 = (void *)__ftol();
  pvStack_40 = pvVar10;
  FUN_004ae950(pvVar10);
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar12 = (char *)&DAT_006928b8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar3 != '\0');
  local_3c = (undefined4 *)(~uVar8 - 1);
  cVar3 = FUN_00401940(local_3c,1);
  if (cVar3 != '\0') {
    puVar9 = &DAT_006928b8;
    for (uVar8 = (uint)local_3c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puStack_18 = *puVar9;
      puVar9 = puVar9 + 1;
      puStack_18 = puStack_18 + 1;
    }
    for (uVar8 = (uint)local_3c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puStack_18 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puStack_18 = (undefined4 *)((int)puStack_18 + 1);
    }
    FUN_00404190(local_3c);
    pvVar10 = pvStack_40;
  }
  local_4 = 0x10;
  FUN_004ae800(0x3f800000,auStack_1c,0,pvVar10,0);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (*(char *)(param_1 + 0x195) != '\0') {
    ExceptionList = pvStack_c;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x19c)) {
  case 0:
    local_3c = operator_new(0x6c);
    local_4 = 0x11;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b83a0,&DAT_006b83d8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.5);
    local_3c = operator_new(0x6c);
    local_4 = 0x12;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b8330,&DAT_006b8368);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.6);
    local_3c = operator_new(0x6c);
    local_4 = 0x13;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b82b8,&DAT_006b82f8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.8;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x14;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b8248,&DAT_006b8280);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar2 = fVar11 * 0.9;
    pvStack_40 = (void *)fVar2;
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x15;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b81d8,&DAT_006b8210);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.95);
    local_3c = operator_new(0x6c);
    local_4 = 0x16;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b8168,&DAT_006b81a0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x17;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b80f0,&DAT_006b8130);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x18;
    break;
  case 1:
    local_3c = operator_new(0x6c);
    local_4 = 0x19;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b8010,&DAT_006b8048);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.5);
    local_3c = operator_new(0x6c);
    local_4 = 0x1a;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b7fa0,&DAT_006b7fd8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.6);
    local_3c = operator_new(0x6c);
    local_4 = 0x1b;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b7f28,&DAT_006b7f68);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.8;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x1c;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b7eb8,&DAT_006b7ef0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar2 = fVar11 * 0.9;
    pvStack_40 = (void *)fVar2;
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x1d;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b7e48,&DAT_006b7e80);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.95);
    local_3c = operator_new(0x6c);
    local_4 = 0x1e;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b7dd8,&DAT_006b7e10);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x1f;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b7d60,&DAT_006b7da0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x20;
    if (local_3c == (void *)0x0) goto LAB_00464be5;
    puVar15 = &DAT_006b7d28;
    puVar13 = &DAT_006b7cf0;
    goto LAB_004640f7;
  case 2:
    local_3c = operator_new(0x6c);
    local_4 = 0x21;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b7c80,&DAT_006b7cb8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.4;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x22;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b7c10,&DAT_006b7c48);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x23;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b7b98,&DAT_006b7bd8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x24;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b7b28,&DAT_006b7b60);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x25;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b7ab8,&DAT_006b7af0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x26;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b7a48,&DAT_006b7a80);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x27;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b79d0,&DAT_006b7a10);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    pvStack_40 = (void *)(fVar11 * 0.0001);
    FUN_004ac810(pvStack_40);
    local_3c = operator_new(0x6c);
    local_4 = 0x28;
    if (local_3c == (void *)0x0) goto LAB_004648f6;
    puVar15 = &DAT_006b7998;
    puVar13 = &DAT_006b7960;
LAB_004643a7:
    uVar5 = FUN_004ac6a0(699,param_1 + 0x5c,puVar13,puVar15);
    goto LAB_004648f8;
  case 3:
    local_3c = operator_new(0x6c);
    local_4 = 0x29;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b7560,&DAT_006b7598);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.4;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2a;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b74f0,&DAT_006b7528);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2b;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b7478,&DAT_006b74b8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2c;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b7408,&DAT_006b7440);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2d;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b7398,&DAT_006b73d0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2e;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b7328,&DAT_006b7360);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x2f;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b72b0,&DAT_006b72f0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    pvStack_40 = (void *)(fVar11 * 0.0001);
    FUN_004ac810(pvStack_40);
    local_3c = operator_new(0x6c);
    local_4 = 0x30;
    if (local_3c != (void *)0x0) {
      puVar15 = &DAT_006b7278;
      puVar13 = &DAT_006b7240;
      goto LAB_004643a7;
    }
    goto LAB_004648f6;
  case 4:
    local_3c = operator_new(0x6c);
    local_4 = 0x31;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b78f0,&DAT_006b7928);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.4;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x32;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b7880,&DAT_006b78b8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x33;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b7808,&DAT_006b7848);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x34;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b7798,&DAT_006b77d0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x35;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b7728,&DAT_006b7760);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x36;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b76b8,&DAT_006b76f0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x37;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b7640,&DAT_006b7680);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    pvStack_40 = (void *)(fVar11 * 0.0001);
    FUN_004ac810(pvStack_40);
    local_3c = operator_new(0x6c);
    local_4 = 0x38;
    if (local_3c != (void *)0x0) {
      puVar15 = &DAT_006b7608;
      puVar13 = &DAT_006b75d0;
      goto LAB_004643a7;
    }
LAB_004648f6:
    uVar5 = 0;
LAB_004648f8:
    fVar11 = fVar11 * 0.0001;
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    goto LAB_00464c08;
  default:
    local_3c = operator_new(0x6c);
    local_4 = 0x39;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(0,param_1 + 0x5c,&DAT_006b83a0,&DAT_006b83d8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.5);
    local_3c = operator_new(0x6c);
    local_4 = 0x3a;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(100,param_1 + 0x5c,&DAT_006b8330,&DAT_006b8368);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.6);
    local_3c = operator_new(0x6c);
    local_4 = 0x3b;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(200,param_1 + 0x5c,&DAT_006b82b8,&DAT_006b82f8);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar1 = fVar11 * 0.8;
    pvStack_40 = (void *)fVar1;
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x3c;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(300,param_1 + 0x5c,&DAT_006b8248,&DAT_006b8280);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    fVar2 = fVar11 * 0.9;
    pvStack_40 = (void *)fVar2;
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x3d;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(400,param_1 + 0x5c,&DAT_006b81d8,&DAT_006b8210);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar11 * 0.95);
    local_3c = operator_new(0x6c);
    local_4 = 0x3e;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(500,param_1 + 0x5c,&DAT_006b8168,&DAT_006b81a0);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar2);
    local_3c = operator_new(0x6c);
    local_4 = 0x3f;
    if (local_3c == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004ac6a0(600,param_1 + 0x5c,&DAT_006b80f0,&DAT_006b8130);
    }
    local_4 = 0xffffffff;
    FUN_004ad0e0(uVar5);
    FUN_004ad2e0(uVar5);
    FUN_004ac810(fVar1);
    local_3c = operator_new(0x6c);
    local_4 = 0x40;
  }
  if (local_3c == (void *)0x0) {
LAB_00464be5:
    uVar5 = 0;
  }
  else {
    puVar15 = &DAT_006b80b8;
    puVar13 = &DAT_006b8080;
LAB_004640f7:
    uVar5 = FUN_004ac6a0(699,param_1 + 0x5c,puVar13,puVar15);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar5);
  FUN_004ad2e0(uVar5);
  fVar11 = fVar11 * 0.7;
LAB_00464c08:
  FUN_004ac810(fVar11);
  ExceptionList = pvStack_c;
  return;
}

