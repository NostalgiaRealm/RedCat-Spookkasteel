/*
 * FUN_004777b0 at 004777b0
 * undefined FUN_004777b0(void)
 * Address ranges: 004777b0-00477cc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004777b0(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puStack_138;
  undefined4 uStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined4 local_110 [4];
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 *puStack_f0;
  uint uStack_ec;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628972;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(*(int *)(param_1 + 0x14ac) + 0x114) == 0) {
    puStack_138 = (undefined4 *)0x0;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    puStack_138 = (undefined4 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_138 = local_110;
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,0x18d)
    ;
    (*pcVar2)();
    local_4 = 0xffffffff;
    puStack_138 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_138 = (undefined4 *)0x47785c;
  FUN_005b3af0();
  puStack_138 = (undefined4 *)0x477863;
  FUN_0059b1e0();
  puStack_138 = (undefined4 *)0x47786a;
  FUN_005b7140();
  puStack_114 = (undefined1 *)&puStack_138;
  FUN_004042e0(&puStack_138);
  FUN_00565c30();
  puVar8 = (undefined4 *)(param_1 + 0x14b0);
  local_4 = 1;
  uStack_cf = 1;
  uStack_ce = 1;
  uStack_cd = 0;
  uStack_100 = *puVar8;
  uStack_cc = 1;
  uStack_cb = 0;
  uStack_120 = *puVar8;
  fStack_fc = *(float *)(param_1 + 0x14b4) + 10.0;
  uStack_f8 = *(undefined4 *)(param_1 + 0x14b8);
  puStack_138 = &uStack_120;
  fStack_11c = *(float *)(param_1 + 0x14b4) - 10000.0;
  uStack_118 = *(undefined4 *)(param_1 + 0x14b8);
  uStack_d0 = 0;
  uStack_ca = 0;
  cVar1 = FUN_00565e10(&uStack_100);
  if (cVar1 == '\0') {
    uStack_54 = *puVar8;
    uStack_50 = *(undefined4 *)(param_1 + 0x14b4);
    uStack_4c = *(undefined4 *)(param_1 + 0x14b8);
  }
  puVar8 = (undefined4 *)(param_1 + 0x14d4);
  *puVar8 = uStack_54;
  *(undefined4 *)(param_1 + 0x14d8) = uStack_50;
  *(undefined4 *)(param_1 + 0x14dc) = uStack_4c;
  uStack_120 = uStack_54;
  fStack_11c = (float)uStack_50;
  uStack_118 = uStack_4c;
  if (*(char *)(param_1 + 0x14bc) == '\0') {
    *(undefined4 *)(param_1 + 0x14e0) = uStack_54;
    *(float *)(param_1 + 0x14d8) = *(float *)(param_1 + 0x14d8) + 75.0;
    *(undefined4 *)(param_1 + 0x14e4) = uStack_50;
    iVar6 = 0xf;
    *(undefined4 *)(param_1 + 0x14e8) = uStack_4c;
    puVar4 = (undefined4 *)(param_1 + 0x210);
    do {
      puVar4[4] = *puVar8;
      puVar4[5] = *(undefined4 *)(param_1 + 0x14d8);
      puVar4[6] = *(undefined4 *)(param_1 + 0x14dc);
      iVar6 = iVar6 + -1;
      puVar4[-0x45] = *puVar8;
      puVar4[-0x44] = *(undefined4 *)(param_1 + 0x14d8);
      puVar4[-0x43] = *(undefined4 *)(param_1 + 0x14dc);
      puVar4[-1] = 0x42480000;
      *puVar4 = 0x3dcccccd;
      puVar4[-0x23] = 0x41c80000;
      puVar4[-0x22] = 0x42c80000;
      puVar4[2] = 0x41480000;
      puVar4 = puVar4 + 0x54;
    } while (iVar6 != 0);
    puStack_138 = (undefined4 *)0x477a11;
    puVar3 = (undefined1 *)__ftol();
    if ((puVar3 != (undefined1 *)0xffffffff) && ((int)puVar3 < 0)) {
      puStack_138 = (undefined4 *)0x0;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      puStack_138 = (undefined4 *)(~uVar5 - 1);
      FUN_004040f0(&DAT_006b3f70);
      puStack_138 = local_110;
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                    s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      puStack_138 = (undefined4 *)0x1;
      FUN_004040a0();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14e0) = uStack_54;
    *(undefined4 *)(param_1 + 0x14e4) = uStack_50;
    iVar6 = 0xf;
    *(undefined4 *)(param_1 + 0x14e8) = uStack_4c;
    *(float *)(param_1 + 0x14e4) = *(float *)(param_1 + 0x14e4) + 50.0;
    puVar4 = (undefined4 *)(param_1 + 0x210);
    do {
      puVar4[4] = *puVar8;
      puVar4[5] = *(undefined4 *)(param_1 + 0x14d8);
      puVar4[6] = *(undefined4 *)(param_1 + 0x14dc);
      iVar6 = iVar6 + -1;
      puVar4[-0x45] = *puVar8;
      puVar4[-0x44] = *(undefined4 *)(param_1 + 0x14d8);
      puVar4[-0x43] = *(undefined4 *)(param_1 + 0x14dc);
      puVar4[-1] = 0x3dcccccd;
      *puVar4 = 0x41f00000;
      puVar4[-0x23] = 0x42c80000;
      puVar4[-0x22] = 0x420c0000;
      puVar4[2] = 0x41940000;
      puVar4 = puVar4 + 0x54;
    } while (iVar6 != 0);
    puStack_138 = (undefined4 *)0x477b3c;
    puVar3 = (undefined1 *)__ftol();
    puStack_114 = puVar3;
    if ((puVar3 != (undefined1 *)0xffffffff) && ((int)puVar3 < 0)) {
      puStack_138 = (undefined4 *)0x0;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      puStack_138 = (undefined4 *)0x1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar4 = puStack_f0;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        *(undefined1 *)((int)puStack_f0 + uVar5) = 0;
        puVar3 = puStack_114;
        uStack_ec = uVar5;
      }
      puStack_138 = &uStack_f4;
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                    s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      puStack_138 = (undefined4 *)0x1;
      FUN_004040a0();
    }
  }
  *(undefined1 **)(param_1 + 0x14c0) = puVar3;
  *(undefined4 *)(param_1 + 0x14c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14cc) = 1;
  local_4 = 5;
  puStack_138 = puStack_18;
  FUN_005fe5f0();
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  puStack_138 = puStack_24;
  FUN_00587d50(puStack_28);
  puStack_138 = puStack_28;
  FUN_005fe5f0();
  puStack_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  uStack_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (iStack_c4 != 0) {
    puStack_138 = (undefined4 *)0x477c90;
    FUN_004098d0();
    iStack_c4 = 0;
  }
  local_4 = 0xffffffff;
  puStack_138 = (undefined4 *)0x477ca8;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

