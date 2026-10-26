/*
 * thunk_FUN_005765a0 at 00574c50
 * undefined thunk_FUN_005765a0(void)
 * Address ranges: 00574c50-00574c54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_005765a0
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 3 for .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 3 for
   .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred. */

void __fastcall thunk_FUN_005765a0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  int *piStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [4];
  undefined4 *puStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [12];
  int iStack_d4;
  undefined1 auStack_d0 [4];
  undefined4 *puStack_cc;
  uint uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006417f7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00421750(&fStack_114);
  iStack_4 = 0;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    iStack_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_100);
    (*pcVar3)();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar7 = *piVar2;
  iStack_4 = 0xffffffff;
  uStack_c0 = *(undefined4 *)(iVar7 + 0x210);
  uStack_bc = *(undefined4 *)(iVar7 + 0x214);
  uStack_b8 = *(undefined4 *)(iVar7 + 0x218);
  if ((fStack_114 != 0.0) &&
     (iVar7 = *(int *)((int)fStack_114 + 0x14) + -1, *(int *)((int)fStack_114 + 0x14) = iVar7,
     iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  uStack_90 = *(undefined4 *)(param_1 + 0x18c);
  uStack_8c = *(undefined4 *)(param_1 + 400);
  uStack_6c = *(undefined4 *)(param_1 + 0x1b0);
  uStack_68 = *(undefined4 *)(param_1 + 0x1b4);
  uStack_48 = *(undefined4 *)(param_1 + 0x1d4);
  uStack_44 = *(undefined4 *)(param_1 + 0x1d8);
  uStack_24 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_20 = *(undefined4 *)(param_1 + 0x1fc);
  puVar4 = &uStack_84;
  iVar7 = 4;
  do {
    puVar4[-1] = *(undefined4 *)(param_1 + 0x130);
    *puVar4 = *(undefined4 *)(param_1 + 0x134);
    puVar4[1] = *(undefined4 *)(param_1 + 0x138);
    puVar4[2] = *(undefined4 *)(param_1 + 0x13c);
    puVar4 = puVar4 + 9;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_005b2fe0(auStack_e0);
  FUN_005b2fe0(auStack_b4);
  fVar10 = (float10)FUN_005b2e40();
  fStack_114 = (float)fVar10;
  FUN_005b2fa0(fStack_114);
  FUN_005b2fe0(auStack_a8);
  FUN_005b2f20();
  FUN_005b2f20();
  FUN_005b2e60(&fStack_110);
  FUN_005b2f20();
  FUN_005b2fa0(*(float *)(param_1 + 300) * 0.5);
  fStack_9c = *(float *)(param_1 + 0x108) - fStack_110;
  fStack_98 = *(float *)(param_1 + 0x10c) - fStack_10c;
  fStack_94 = *(float *)(param_1 + 0x110) - fStack_108;
  fStack_78 = fStack_110 + *(float *)(param_1 + 0x108);
  fStack_74 = fStack_10c + *(float *)(param_1 + 0x10c);
  fStack_70 = fStack_108 + *(float *)(param_1 + 0x110);
  fStack_54 = fStack_110 + *(float *)(param_1 + 0xfc);
  fStack_50 = fStack_10c + *(float *)(param_1 + 0x100);
  fStack_4c = fStack_108 + *(float *)(param_1 + 0x104);
  fStack_30 = *(float *)(param_1 + 0xfc) - fStack_110;
  fStack_2c = *(float *)(param_1 + 0x100) - fStack_10c;
  fStack_28 = *(float *)(param_1 + 0x104) - fStack_108;
  uStack_88 = *(undefined4 *)(param_1 + 0x130);
  uStack_80 = *(undefined4 *)(param_1 + 0x138);
  uStack_84 = *(undefined4 *)(param_1 + 0x134);
  uStack_5c = *(undefined4 *)(param_1 + 0x138);
  uStack_60 = *(undefined4 *)(param_1 + 0x134);
  uStack_38 = *(undefined4 *)(param_1 + 0x138);
  uStack_3c = *(undefined4 *)(param_1 + 0x134);
  uStack_14 = *(undefined4 *)(param_1 + 0x138);
  uStack_18 = *(undefined4 *)(param_1 + 0x134);
  uStack_64 = uStack_88;
  uStack_40 = uStack_88;
  uStack_1c = uStack_88;
  if (*(int *)(param_1 + 0x17c) == 0) {
    fStack_114 = 0.0;
  }
  else {
    fStack_114 = (float)FUN_0050aa70();
  }
  piVar2 = (int *)FUN_004042e0(&iStack_d4);
  iStack_4 = 3;
  if (*piVar2 == 0) {
    piStack_104 = piVar2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_cc;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_cc + uVar5) = 0;
      piVar2 = piStack_104;
      uStack_c8 = uVar5;
    }
    iStack_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_d0);
    (*pcVar3)();
    iStack_4 = CONCAT31(iStack_4._1_3_,3);
    FUN_004040a0(1);
  }
  piVar2 = (int *)*piVar2;
  piStack_104 = piVar2;
  if (*(int *)((int)piVar2 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_ec;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_ec + uVar5) = 0;
      piVar2 = piStack_104;
      uStack_e8 = uVar5;
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,5);
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,auStack_f0);
    (*pcVar3)();
    if (puStack_ec != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_ec + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_ec + -1));
      }
      else {
        *(char *)((int)puStack_ec + -1) = cVar1 + -1;
      }
    }
    puStack_ec = (undefined4 *)0x0;
    uStack_e8 = 0;
    uStack_e4 = 0;
  }
  FUN_005b6e90(*(undefined4 *)((int)piVar2 + 0x5c),&fStack_9c,4,fStack_114,
               *(int *)(param_1 + 0x17c) == 0,8,0x3f800000);
  iStack_4 = 0xffffffff;
  if ((iStack_d4 != 0) &&
     (iVar7 = *(int *)(iStack_d4 + 0x14) + -1, *(int *)(iStack_d4 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

