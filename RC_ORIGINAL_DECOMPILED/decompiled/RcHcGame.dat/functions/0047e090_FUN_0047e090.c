/*
 * FUN_0047e090 at 0047e090
 * undefined FUN_0047e090(void)
 * Address ranges: 0047e090-0047e705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 0 for .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 0 for
   .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0047e090(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  code *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  float10 fVar12;
  undefined4 *puStack_15c;
  float local_144;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 local_104 [4];
  undefined4 auStack_f4 [9];
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  undefined1 auStack_84 [60];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628f11;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == -1) {
    puStack_15c = (undefined4 *)0x0;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar7 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar7 != '\0');
    puStack_15c = (undefined4 *)(~uVar9 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_15c = local_104;
    local_4 = 0;
    pcVar8 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a);
    (*pcVar8)();
    local_4 = 0xffffffff;
    puStack_15c = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puVar2 = (undefined4 *)((float)param_2 * 0.001);
  if (DAT_006c8de0 == 0) {
    puStack_15c = (undefined4 *)0x47e142;
    FUN_0055b280();
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  uStack_130 = *puVar1;
  uStack_12c = *(undefined4 *)(param_1 + 0x14);
  uStack_128 = *(undefined4 *)(param_1 + 0x18);
  puStack_108 = puVar1;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    puStack_15c = *(undefined4 **)(param_1 + 0xcc);
    fVar12 = (float10)FUN_0047ef00(0x3f4ccccd,0xbf4ccccd,0x40000000,puVar2);
    cVar7 = *(char *)(param_1 + 200);
    if (cVar7 == '\0') {
      *(float *)(param_1 + 0xcc) = (float)((float10)*(float *)(param_1 + 0xcc) - fVar12);
    }
    else {
      *(float *)(param_1 + 0xcc) = (float)(fVar12 + (float10)*(float *)(param_1 + 0xcc));
    }
    if ((0.8 < *(float *)(param_1 + 0xcc)) || (*(float *)(param_1 + 0xcc) < -0.8)) {
      if (cVar7 == '\0') {
        *(undefined4 *)(param_1 + 0xcc) = 0xbf4ccccd;
      }
      else {
        *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
      }
      *(bool *)(param_1 + 200) = cVar7 == '\0';
    }
    puStack_15c = (undefined4 *)0x47e234;
    __ftol();
    puStack_15c = (undefined4 *)0x47e249;
    __ftol();
    puStack_15c = (undefined4 *)0x47e262;
    __ftol();
  }
  puStack_15c = (undefined4 *)((float)puVar2 * 32.0);
  FUN_005b2fa0();
  puStack_15c = &uStack_130;
  FUN_005b3000();
  if ((*(float *)(param_1 + 0x94) < 1.0) && (0.0 <= *(float *)(param_1 + 0x94))) {
    fVar3 = (1.0 - *(float *)(param_1 + 0x94)) * (float)puVar2;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    puStack_15c = (undefined4 *)(1.0 - fVar3);
    FUN_005b2fa0();
  }
  *puVar1 = uStack_130;
  *(undefined4 *)(param_1 + 0x14) = uStack_12c;
  *(undefined4 *)(param_1 + 0x18) = uStack_128;
  uStack_114 = *(undefined4 *)(param_1 + 4);
  uStack_110 = *(undefined4 *)(param_1 + 8);
  uStack_10c = *(undefined4 *)(param_1 + 0xc);
  puStack_15c = puVar2;
  FUN_005b2fa0();
  puStack_15c = &uStack_120;
  FUN_005b3000();
  if (*(char *)(param_1 + 0x98) != '\0') {
    local_144 = 1.0;
    iVar11 = 0;
    FUN_004042e0(&puStack_15c);
    FUN_00565c30();
    fStack_9c = DAT_006b8874 * *(float *)(param_1 + 0xa0);
    local_4 = 1;
    fStack_88 = DAT_006b8874;
    fStack_a8 = -fStack_9c;
    fStack_98 = DAT_006b8874 * *(float *)(param_1 + 0xa4);
    uStack_cf = 1;
    uStack_ce = 1;
    uStack_cd = 0;
    uStack_cc = 1;
    uStack_cb = 0;
    uStack_ca = 1;
    fStack_a4 = -fStack_98;
    fStack_94 = DAT_006b8874 * *(float *)(param_1 + 0xa8);
    uStack_d0 = *(undefined1 *)(param_1 + 0x7b);
    fStack_a0 = -fStack_94;
    puStack_15c = &uStack_120;
    cVar7 = FUN_00565e10(&uStack_114);
    uVar4 = uStack_120;
    uVar5 = uStack_11c;
    uVar6 = uStack_118;
    uStack_120 = uStack_48;
    uStack_11c = uStack_44;
    uStack_118 = uStack_40;
    while (cVar7 != '\0') {
      puStack_15c = auStack_f4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      uStack_48 = uStack_120;
      uStack_44 = uStack_11c;
      uStack_40 = uStack_118;
      FUN_005b1570(auStack_84,&uStack_130,*(undefined4 *)(param_1 + 0xac),
                   *(undefined4 *)(param_1 + 0xb0),&uStack_130);
      if (0.0 <= fStack_3c) {
        local_144 = (1.0 - local_144) * fStack_3c + local_144;
      }
      uVar4 = uStack_120;
      uVar5 = uStack_11c;
      uVar6 = uStack_118;
      if ((0.999 <= local_144) || (iVar11 = iVar11 + 1, 9 < iVar11)) break;
      puStack_15c = &uStack_120;
      cVar7 = FUN_00565e10(&uStack_114);
      uVar4 = uStack_120;
      uVar5 = uStack_11c;
      uVar6 = uStack_118;
      uStack_120 = uStack_48;
      uStack_11c = uStack_44;
      uStack_118 = uStack_40;
    }
    uStack_118 = uVar6;
    uStack_11c = uVar5;
    uStack_120 = uVar4;
    puStack_15c = (undefined4 *)0x47e5c2;
    fVar12 = (float10)FUN_005b2fd0();
    if ((((fVar12 < (float10)100.0) && (0x32 < *(int *)(param_1 + 0xb4))) &&
        (*(undefined1 *)(param_1 + 0x7a) = 0, *(int *)(param_1 + 0x1c) != -1)) &&
       (*(char *)(param_1 + 0xb8) != '\0')) {
      *(undefined1 *)(param_1 + 0x79) = 1;
      *(undefined4 *)(param_1 + 0x7c) = 0x42c80000;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = 2000;
      *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 0x1c) = 2000;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    local_4 = 4;
    puStack_15c = puStack_18;
    FUN_005fe5f0();
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_005fe5f0(uStack_28);
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    if (iStack_c4 != 0) {
      iVar11 = *(int *)(iStack_c4 + 0x14) + -1;
      *(int *)(iStack_c4 + 0x14) = iVar11;
      if (iVar11 == 0) {
        puStack_15c = (undefined4 *)0x0;
        FUN_005abfc0();
      }
      iStack_c4 = 0;
    }
    local_4 = 0xffffffff;
    puStack_15c = (undefined4 *)0x47e6be;
    FUN_005ab4d0();
  }
  *(undefined4 *)(param_1 + 4) = uStack_120;
  *(undefined4 *)(param_1 + 8) = uStack_11c;
  *(undefined4 *)(param_1 + 0xc) = uStack_118;
  *puStack_108 = uStack_130;
  puStack_108[1] = uStack_12c;
  puStack_108[2] = uStack_128;
  ExceptionList = pvStack_c;
  return;
}

