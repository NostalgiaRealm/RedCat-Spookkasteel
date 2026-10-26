/*
 * FUN_004da420 at 004da420
 * undefined FUN_004da420(void)
 * Address ranges: 004da420-004da91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004da420(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 local_b1;
  float local_b0;
  int local_ac;
  undefined1 local_a8 [16];
  double local_98 [2];
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631e58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_ac = param_1;
  if ((DAT_006b9280 & 1) == 0) {
    DAT_006b9280 = DAT_006b9280 | 1;
    local_a8[0] = local_b1;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = s_Wobble_00699d00;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Wobble_00699d00,~uVar7 - 1);
    local_98[0] = (double)CONCAT71(local_98[0]._1_7_,local_b1);
    local_4 = 0;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = s_BreathMinVolume_00699d28;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_BreathMinVolume_00699d28,~uVar7 - 1);
    local_4._0_1_ = 1;
    uVar2 = FUN_00436f90(local_88);
    local_4._0_1_ = 2;
    iVar3 = FUN_005ac8b0(local_98,local_a8,0x3f333333,uVar2,0);
    local_4._0_1_ = 3;
    if (*(float *)(iVar3 + 0x60) == 0.0) {
      fVar9 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b1);
      *(float *)(iVar3 + 0x60) = (float)fVar9;
    }
    else {
      fVar9 = (float10)*(float *)(iVar3 + 0x60);
    }
    _DAT_006b927c = (float)fVar9;
    local_4._0_1_ = 2;
    FUN_005acca0();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((DAT_006b9280 & 2) == 0) {
    DAT_006b9280 = DAT_006b9280 | 2;
    local_98[0] = (double)CONCAT71(local_98[0]._1_7_,local_b1);
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = s_Wobble_00699d00;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Wobble_00699d00,~uVar7 - 1);
    local_4 = 4;
    local_a8[0] = local_b1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = s_BreathLoopSpeed_00699d18;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_BreathLoopSpeed_00699d18,~uVar7 - 1);
    local_4._0_1_ = 5;
    uVar2 = FUN_00436f90(local_88);
    local_4._0_1_ = 6;
    iVar3 = FUN_005ac8b0(local_a8,local_98,0x3e4ccccd,uVar2,0);
    local_4._0_1_ = 7;
    if (*(float *)(iVar3 + 0x60) == 0.0) {
      fVar9 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b1);
      *(float *)(iVar3 + 0x60) = (float)fVar9;
    }
    else {
      fVar9 = (float10)*(float *)(iVar3 + 0x60);
    }
    DAT_006b9278 = (float)fVar9;
    local_4._0_1_ = 6;
    FUN_005acca0();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = local_ac;
  local_98[0] = (double)*(float *)(local_ac + 0x140);
  local_b0 = DAT_006b9278;
  fVar9 = (float10)FUN_0060b68f(local_98[0]);
  *(float *)(iVar3 + 0x144) = (float)((float10)local_98[0] - fVar9);
  if (param_2 == -1) {
    local_a8[0] = local_b1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 8;
    pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_a8);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(float *)(iVar3 + 0x140) = (float)param_2 * local_b0 * 0.001 + *(float *)(iVar3 + 0x144);
  iVar5 = __ftol();
  iVar6 = __ftol();
  if (iVar5 < iVar6) {
    *(bool *)(iVar3 + 0x13c) = *(char *)(iVar3 + 0x13c) == '\0';
    fVar9 = (float10)FUN_005b2fd0();
    if ((float10)DAT_006b92c8 < fVar9) {
      local_b0 = 1.0;
    }
    else {
      local_b0 = (float)(((float10)1.0 - (float10)_DAT_006b927c) * (fVar9 / (float10)DAT_006b92c8) +
                        (float10)_DAT_006b927c);
    }
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      local_a8[0] = local_b1;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 9;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_a8);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(local_ac + 0x13c) == '\0') {
      FUN_0054ffe0(&local_ac,&DAT_006b5428,0,local_b0,0,0);
      if (local_ac == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar3 = *(int *)(local_ac + 0x14) + -1;
      *(int *)(local_ac + 0x14) = iVar3;
    }
    else {
      FUN_0054ffe0(&local_b0,&DAT_006b5450,0,local_b0,0,0);
      if (local_b0 == 0.0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar3 = *(int *)((int)local_b0 + 0x14) + -1;
      *(int *)((int)local_b0 + 0x14) = iVar3;
    }
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

