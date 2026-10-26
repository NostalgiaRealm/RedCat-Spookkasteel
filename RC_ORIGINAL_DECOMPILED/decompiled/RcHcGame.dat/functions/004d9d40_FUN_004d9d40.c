/*
 * FUN_004d9d40 at 004d9d40
 * undefined FUN_004d9d40(void)
 * Address ranges: 004d9d40-004da41a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d9d40(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  float local_b4;
  undefined1 local_ad;
  float local_ac;
  undefined1 local_a8 [4];
  char *local_a4;
  undefined8 local_98;
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631ddf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_006b928c & 1) == 0) {
    DAT_006b928c = DAT_006b928c | 1;
    local_a8[0] = local_ad;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Wobble_00699d00;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_Wobble_00699d00;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)local_a4 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        local_a4 = local_a4 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_a4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        local_a4 = local_a4 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_4 = 0;
    local_98 = (double)CONCAT71(local_98._1_7_,local_ad);
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_RunLoopSpeed_00699d08;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_RunLoopSpeed_00699d08;
      pcVar9 = local_98._4_4_;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 1;
    uVar2 = FUN_00436f90(local_88);
    local_4._0_1_ = 2;
    iVar3 = FUN_005ac8b0(&local_98,local_a8,0x3f000000,uVar2,0);
    local_4._0_1_ = 3;
    if (*(float *)(iVar3 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
      *(float *)(iVar3 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar3 + 0x60);
    }
    _DAT_006b9288 = (float)fVar10;
    local_4._0_1_ = 2;
    FUN_005acca0();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((DAT_006b928c & 2) == 0) {
    DAT_006b928c = DAT_006b928c | 2;
    _DAT_006b9284 = (DAT_006b92c0 + DAT_006b92cc) * 0.5;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    fVar10 = (float10)FUN_005b2fd0();
    local_ac = (float)fVar10;
  }
  else {
    local_ac = 0.0;
  }
  local_b4 = SQRT(local_ac / _DAT_006b9284) * _DAT_006b9288;
  local_98 = (double)*(float *)(param_1 + 0x134);
  fVar10 = (float10)FUN_0060b68f(local_98);
  *(float *)(param_1 + 0x138) = (float)((float10)local_98 - fVar10);
  if (param_2 == -1) {
    local_a8[0] = local_ad;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 4;
    pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_a8);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(float *)(param_1 + 0x134) = (float)param_2 * local_b4 * 0.001 + *(float *)(param_1 + 0x138);
  iVar3 = __ftol();
  iVar5 = __ftol();
  if (iVar5 <= iVar3) {
    ExceptionList = pvStack_c;
    return;
  }
  *(bool *)(param_1 + 0x130) = *(char *)(param_1 + 0x130) == '\0';
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xfc) == 0) {
    local_a8[0] = local_ad;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_a8);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (local_ac <= _DAT_006b9284) {
    uVar6 = *(uint *)(param_1 + 0x108);
    if (*(char *)(param_1 + 0x130) == '\0') {
      if ((uVar6 & 0x20000) == 0) {
        if ((uVar6 & 0x10000) == 0) {
          FUN_0054ffe0(&local_ac,&DAT_006b5668,0,0x3f800000,0,0);
          if (local_ac == 0.0) {
            ExceptionList = pvStack_c;
            return;
          }
          iVar3 = *(int *)((int)local_ac + 0x14) + -1;
          *(int *)((int)local_ac + 0x14) = iVar3;
        }
        else {
          FUN_0054ffe0(&local_b4,&DAT_006b5478,0,0x3f800000,0,0);
          if (local_b4 == 0.0) {
            ExceptionList = pvStack_c;
            return;
          }
          iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
          *(int *)((int)local_b4 + 0x14) = iVar3;
        }
      }
      else {
        FUN_0054ffe0(&local_b4,&DAT_006b5570,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
    }
    else if ((uVar6 & 0x20000) == 0) {
      if ((uVar6 & 0x10000) == 0) {
        FUN_0054ffe0(&local_b4,&DAT_006b5690,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
      else {
        FUN_0054ffe0(&local_b4,&DAT_006b54a8,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
    }
    else {
      FUN_0054ffe0(&local_b4,&DAT_006b5598,0,0x3f800000,0,0);
      if (local_b4 == 0.0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
      *(int *)((int)local_b4 + 0x14) = iVar3;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x108);
    if (*(char *)(param_1 + 0x130) == '\0') {
      if ((uVar6 & 0x20000) == 0) {
        if ((uVar6 & 0x10000) == 0) {
          FUN_0054ffe0(&local_b4,&DAT_006b56b8,0,0x3f800000,0,0);
          if (local_b4 == 0.0) {
            ExceptionList = pvStack_c;
            return;
          }
          iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
          *(int *)((int)local_b4 + 0x14) = iVar3;
        }
        else {
          FUN_0054ffe0(&local_b4,&DAT_006b54d0,0,0x3f800000,0,0);
          if (local_b4 == 0.0) {
            ExceptionList = pvStack_c;
            return;
          }
          iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
          *(int *)((int)local_b4 + 0x14) = iVar3;
        }
      }
      else {
        FUN_0054ffe0(&local_b4,&DAT_006b55c0,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
    }
    else if ((uVar6 & 0x20000) == 0) {
      if ((uVar6 & 0x10000) == 0) {
        FUN_0054ffe0(&local_b4,&DAT_006b56e0,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
      else {
        FUN_0054ffe0(&local_b4,&DAT_006b54f8,0,0x3f800000,0,0);
        if (local_b4 == 0.0) {
          ExceptionList = pvStack_c;
          return;
        }
        iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
        *(int *)((int)local_b4 + 0x14) = iVar3;
      }
    }
    else {
      FUN_0054ffe0(&local_b4,&DAT_006b55f0,0,0x3f800000,0,0);
      if (local_b4 == 0.0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar3 = *(int *)((int)local_b4 + 0x14) + -1;
      *(int *)((int)local_b4 + 0x14) = iVar3;
    }
  }
  if (iVar3 == 0) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

