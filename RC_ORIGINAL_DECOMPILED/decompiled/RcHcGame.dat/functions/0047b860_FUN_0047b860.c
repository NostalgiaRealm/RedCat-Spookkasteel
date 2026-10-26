/*
 * FUN_0047b860 at 0047b860
 * undefined FUN_0047b860(void)
 * Address ranges: 0047b860-0047c2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047b860(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  char *pcVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float10 fVar17;
  float local_120;
  undefined1 local_11c [4];
  undefined4 *local_118;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float fStack_100;
  int *local_fc;
  undefined1 auStack_f8 [36];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined1 auStack_c4 [4];
  undefined4 *puStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [156];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628ddc;
  pvStack_c = ExceptionList;
  local_10c = *(undefined4 *)(param_1 + 0x390);
  local_108 = *(undefined4 *)(param_1 + 0x394);
  local_104 = *(undefined4 *)(param_1 + 0x398);
  iVar7 = *(int *)(param_1 + 0x4b50);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      iVar7 = param_1 + 0x11c;
      goto LAB_0047b8e0;
    }
    if (iVar7 == 2) {
      iVar7 = param_1 + 0x120;
      goto LAB_0047b8e0;
    }
  }
  iVar7 = param_1 + 0x118;
LAB_0047b8e0:
  ExceptionList = &pvStack_c;
  cVar3 = FUN_0047b7c0(param_3,iVar7);
  if ((cVar3 != '\0') &&
     (iVar7 = *(int *)(param_1 + 0x4b50) + 1, *(int *)(param_1 + 0x4b50) = iVar7, 2 < iVar7)) {
    *(undefined4 *)(param_1 + 0x4b50) = 0;
  }
  puVar11 = (undefined4 *)(param_1 + 0x148);
  local_120 = 5.60519e-45;
  do {
    puVar11[-1] = 0x437f0000;
    *puVar11 = 0x437f0000;
    puVar11[1] = 0x437f0000;
    puVar11[2] = 0x43480000;
    puVar11[0x6b] = *(undefined4 *)(param_1 + 0x118);
    puVar11[0x6c] = 0x437f0000;
    puVar11[0x6d] = *(undefined4 *)(param_1 + 0x120);
    puVar11[0x6e] = 0x43340000;
    iVar7 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar7 = FUN_004bc480();
    }
    iVar5 = *(int *)(iVar7 + 0x4e8);
    if (iVar5 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar7 + 0x49c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar4);
      *(int *)(iVar7 + 0x4e8) = iVar5;
    }
    if (iVar5 == 0) {
      puVar11[0x23] = *(undefined4 *)(param_1 + 0x118);
      puVar11[0x24] = *(undefined4 *)(param_1 + 0x11c);
      puVar11[0x25] = *(undefined4 *)(param_1 + 0x120);
      puVar11[0x26] = 0x42c80000;
      puVar11[0x47] = *(undefined4 *)(param_1 + 0x120);
      puVar11[0x48] = *(undefined4 *)(param_1 + 0x11c);
      puVar11[0x49] = *(undefined4 *)(param_1 + 0x118);
      puVar11[0x4a] = 0x42c80000;
    }
    puVar11 = puVar11 + 9;
    local_120 = (float)((int)local_120 + -1);
  } while (local_120 != 0.0);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  local_fc = (int *)FUN_00421750(&local_120);
  local_4 = 0;
  if (*local_fc == 0) {
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    local_118 = (undefined4 *)0x0;
    local_114 = 0;
    local_110 = 0;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar15 = local_118;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_11c);
    (*pcVar6)();
    if (local_118 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)local_118 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)local_118 + -1));
      }
      else {
        *(char *)((int)local_118 + -1) = cVar3 + -1;
      }
    }
    local_118 = (undefined4 *)0x0;
    local_114 = 0;
    local_110 = 0;
  }
  iVar7 = *local_fc;
  local_4 = 0xffffffff;
  local_b4 = *(undefined4 *)(iVar7 + 0x210);
  local_b0 = *(undefined4 *)(iVar7 + 0x214);
  local_ac = *(undefined4 *)(iVar7 + 0x218);
  if ((local_120 != 0.0) &&
     (iVar7 = *(int *)((int)local_120 + 0x14) + -1, *(int *)((int)local_120 + 0x14) = iVar7,
     iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  if (param_3 == -1) {
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    puStack_c0 = (undefined4 *)0x0;
    uStack_bc = 0;
    uStack_b8 = 0;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar15 = puStack_c0;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      *(undefined1 *)((int)puStack_c0 + uVar8) = 0;
      uStack_bc = uVar8;
    }
    local_4 = 2;
    pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_c4);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (puStack_c0 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)puStack_c0 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_c0 + -1));
      }
      else {
        *(char *)((int)puStack_c0 + -1) = cVar3 + -1;
      }
    }
    puStack_c0 = (undefined4 *)0x0;
    uStack_bc = 0;
    uStack_b8 = 0;
  }
  local_fc = (int *)(float)param_3;
  fVar17 = (float10)FUN_0047c710(0x40000000,0x3f800000,0x3f333333,(float)local_fc * 0.001,
                                 *(undefined4 *)(param_1 + 0x4b2c));
  cVar3 = *(char *)(param_1 + 0x4b34);
  if (cVar3 == '\0') {
    *(float *)(param_1 + 0x4b2c) = (float)((float10)*(float *)(param_1 + 0x4b2c) - fVar17);
    *(float *)(param_1 + 0x4b30) = (float)(fVar17 + (float10)*(float *)(param_1 + 0x4b30));
  }
  else {
    *(float *)(param_1 + 0x4b2c) = (float)(fVar17 + (float10)*(float *)(param_1 + 0x4b2c));
    *(float *)(param_1 + 0x4b30) = (float)((float10)*(float *)(param_1 + 0x4b30) - fVar17);
  }
  if ((2.0 < *(float *)(param_1 + 0x4b2c)) || (*(float *)(param_1 + 0x4b2c) < 1.0)) {
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x4b2c) = 0x3f800000;
      uVar10 = 0x40000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x4b2c) = 0x40000000;
      uVar10 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x4b30) = uVar10;
    *(bool *)(param_1 + 0x4b34) = cVar3 == '\0';
  }
  fVar1 = *(float *)(param_1 + 0x4b2c) * *(float *)(param_1 + 0x4b38);
  fStack_100 = *(float *)(param_1 + 0x4b38) * *(float *)(param_1 + 0x4b30);
  FUN_005b2fe0(auStack_a8);
  fVar17 = (float10)FUN_005b15f0(auStack_a8);
  fStack_c8 = (float)fVar17;
  fVar17 = (float10)FUN_0047a780(auStack_a8);
  local_120 = (float)fVar17;
  if ((fStack_c8 < 0.0) && (-3.1415927 < fStack_c8)) {
    local_120 = -local_120;
  }
  FUN_005b30c0();
  FUN_005b30c0();
  FUN_005b30c0();
  FUN_005b30c0();
  if (param_3 == -1) {
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    local_118 = (undefined4 *)0x0;
    local_114 = 0;
    local_110 = 0;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar15 = local_118;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      *(undefined1 *)((int)local_118 + uVar8) = 0;
      local_114 = uVar8;
    }
    local_4 = 3;
    pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_11c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (local_118 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)local_118 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)local_118 + -1));
      }
      else {
        *(char *)((int)local_118 + -1) = cVar3 + -1;
      }
    }
    local_118 = (undefined4 *)0x0;
    local_114 = 0;
    local_110 = 0;
  }
  fVar2 = (float)local_fc * 0.0009 + *(float *)(param_1 + 0x4b40);
  *(float *)(param_1 + 0x4b40) = fVar2;
  FUN_005b3170(-fVar2);
  FUN_005b3130(fStack_c8 - 1.5707964);
  FUN_005b30f0(local_120);
  pfVar16 = (float *)(param_1 + 0x2e4);
  pfVar13 = (float *)&DAT_0064e1dc;
  do {
    fStack_d4 = fVar1 * pfVar13[-1];
    fStack_d0 = fVar1 * *pfVar13;
    fStack_cc = fVar1 * pfVar13[1];
    FUN_005b32c0(auStack_f8);
    FUN_005b32c0(auStack_f8);
    FUN_005b3280(local_10c,local_108,local_104);
    pfVar16[-1] = fStack_d4;
    *pfVar16 = fStack_d0;
    pfVar16[1] = fStack_cc;
    pfVar12 = pfVar13 + 9;
    pfVar16[2] = pfVar13[2];
    pfVar16[3] = pfVar13[3];
    pfVar16 = pfVar16 + 9;
    pfVar13 = pfVar12;
  } while ((int)pfVar12 < 0x64e26c);
  iVar7 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar7 = FUN_004bc480();
  }
  iVar5 = *(int *)(iVar7 + 0x4e8);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar7 + 0x49c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar7 + 0x4e8) = iVar5;
  }
  if (iVar5 == 0) {
    FUN_005b3170(*(undefined4 *)(param_1 + 0x4b40));
    pfVar13 = (float *)&DAT_0064e1d8;
    pfVar16 = (float *)(param_1 + 0x254);
    do {
      if ((pfVar13 == (float *)&DAT_0064e1d8) || (pfVar13 == (float *)&DAT_0064e220)) {
        fStack_d4 = fVar1 * *pfVar13;
        fStack_d0 = fVar1;
      }
      else {
        fStack_d4 = fStack_100 * *pfVar13;
        fStack_d0 = fStack_100;
      }
      fStack_d0 = fStack_d0 * pfVar13[1];
      fStack_cc = fVar1 * pfVar13[2];
      FUN_005b32c0(auStack_f8);
      FUN_005b32c0(auStack_f8);
      FUN_005b32c0(auStack_f8);
      FUN_005b3280(local_10c,local_108,local_104);
      pfVar16[-1] = fStack_d4;
      *pfVar16 = fStack_d0;
      pfVar16[1] = fStack_cc;
      if ((pfVar13 == (float *)&DAT_0064e1d8) || (pfVar13 == (float *)&DAT_0064e220)) {
        pfVar16[2] = pfVar13[0xc];
        pfVar16[3] = pfVar13[0xd];
      }
      else {
        pfVar16[2] = pfVar13[-6];
        pfVar16[3] = pfVar13[-5];
      }
      pfVar13 = pfVar13 + 9;
      pfVar16 = pfVar16 + 9;
    } while ((int)pfVar13 < 0x64e268);
    fVar1 = ((1.75 - *(float *)(param_1 + 0x4b2c)) + 1.1) * *(float *)(param_1 + 0x4b38) * 1.2;
    FUN_005b3170(-(*(float *)(param_1 + 0x4b40) + 0.7853982));
    pfVar16 = (float *)(param_1 + 0x1c4);
    pfVar13 = (float *)&DAT_0064e1dc;
    do {
      if ((pfVar13 == (float *)&DAT_0064e1dc) || (pfVar13 == (float *)&DAT_0064e224)) {
        fStack_d4 = fVar1 * pfVar13[-1];
        fStack_d0 = fVar1;
      }
      else {
        fStack_d4 = fStack_100 * pfVar13[-1];
        fStack_d0 = fStack_100;
      }
      fStack_d0 = fStack_d0 * *pfVar13;
      fStack_cc = fVar1 * pfVar13[1];
      FUN_005b32c0(auStack_f8);
      FUN_005b32c0(auStack_f8);
      FUN_005b32c0(auStack_f8);
      FUN_005b3280(local_10c,local_108,local_104);
      pfVar16[-1] = fStack_d4;
      *pfVar16 = fStack_d0;
      pfVar16[1] = fStack_cc;
      pfVar12 = pfVar13 + 9;
      pfVar16[2] = pfVar13[2];
      pfVar16[3] = pfVar13[3];
      pfVar16 = pfVar16 + 9;
      pfVar13 = pfVar12;
    } while ((int)pfVar12 < 0x64e26c);
  }
  pfVar16 = (float *)(param_1 + 0x134);
  pfVar13 = (float *)&DAT_0064e1dc;
  do {
    fStack_d4 = pfVar13[-1] * *(float *)(param_1 + 0x4b38) * 4.0;
    fStack_d0 = *pfVar13 * *(float *)(param_1 + 0x4b38) * 4.0;
    fStack_cc = pfVar13[1] * *(float *)(param_1 + 0x4b38) * 4.0;
    FUN_005b32c0(auStack_f8);
    FUN_005b32c0(auStack_f8);
    FUN_005b3280(local_10c,local_108,local_104);
    pfVar16[-1] = fStack_d4;
    *pfVar16 = fStack_d0;
    pfVar16[1] = fStack_cc;
    pfVar12 = pfVar13 + 9;
    pfVar16[2] = pfVar13[2];
    pfVar16[3] = pfVar13[3];
    pfVar16 = pfVar16 + 9;
    pfVar13 = pfVar12;
  } while ((int)pfVar12 < 0x64e26c);
  ExceptionList = pvStack_c;
  return;
}

