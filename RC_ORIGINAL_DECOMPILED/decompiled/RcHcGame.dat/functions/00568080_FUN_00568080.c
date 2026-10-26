/*
 * FUN_00568080 at 00568080
 * undefined FUN_00568080(void)
 * Address ranges: 00568080-00568b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00568080(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  float *pfVar13;
  char *pcVar14;
  int *piStack_a4;
  undefined1 local_9c [4];
  undefined1 *puStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 local_84 [4];
  undefined1 *puStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  int local_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006403a1;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0x130) == '\0') {
    return;
  }
  ExceptionList = &local_14;
  local_6c = param_1;
  FUN_005afe30();
  puVar4 = *(undefined1 **)(param_1 + 0x138);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  uVar5 = FUN_005ae390(local_9c,s_CAdamFrameRateStatistics__Report_006a4048,puVar4);
  local_c = 0;
  FUN_005aff00(uVar5);
  local_c = 0xffffffff;
  FUN_004040a0();
  if (*(int *)(param_1 + 0x14c) != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x148);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_9c,s__s_006a4040,puVar4);
    local_c = 1;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    FUN_004040a0();
  }
  uVar5 = FUN_005ae390(local_9c,s_total_frames_____0f_006a4028,(double)*(float *)(param_1 + 0x160));
  local_c = 2;
  FUN_005aff00(uVar5);
  local_c = 0xffffffff;
  FUN_004040a0();
  iVar6 = __ftol();
  if (iVar6 == -1) {
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_c = 3;
    pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_9c);
    (*pcVar7)();
    local_c = 0xffffffff;
    FUN_004040a0();
  }
  uVar5 = FUN_005ae390(local_84,s_total_time_____2f_secs__006a4008,(double)((float)iVar6 * 0.001));
  local_c = 4;
  FUN_005aff00(uVar5);
  local_c = 0xffffffff;
  FUN_004040a0();
  iVar6 = __ftol();
  if (iVar6 == -1) {
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_c = 5;
    pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_9c);
    (*pcVar7)();
    local_c = 0xffffffff;
    FUN_004040a0();
  }
  if (0.0 < (float)iVar6 * 0.001) {
    iVar6 = __ftol();
    if (iVar6 == -1) {
      FUN_004040a0();
      uVar10 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_c = 6;
      pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_9c);
      (*pcVar7)();
      local_c = 0xffffffff;
      FUN_004040a0();
    }
    uVar5 = FUN_005ae390(local_84,s_total_avg_fps____2f_fps__raw__006a3fe4,
                         (double)(*(float *)(param_1 + 0x160) / ((float)iVar6 * 0.001)));
    local_c = 7;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    FUN_004040a0();
  }
  if (0.0 < *(float *)(param_1 + 0x16c)) {
    uVar5 = FUN_005ae390(local_9c,s_total_avg_fps____2f_fps__average_006a3fb4,
                         (double)(*(float *)(param_1 + 0x168) / *(float *)(param_1 + 0x16c)));
    local_c = 8;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    FUN_004040a0();
  }
  uVar5 = FUN_005ae390(local_9c,s_min__fps_____2f_fps_006a3f98,(double)*(float *)(param_1 + 0x158));
  local_c = 9;
  FUN_005aff00(uVar5);
  local_c = 0xffffffff;
  FUN_004040a0();
  uVar5 = FUN_005ae390(local_9c,s_max__fps_____2f_fps_006a3f7c,(double)*(float *)(param_1 + 0x15c));
  local_c = 10;
  FUN_005aff00(uVar5);
  local_c = 0xffffffff;
  FUN_004040a0();
  piStack_a4 = (int *)(float)*(int *)(param_1 + 0x14);
  fStack_88 = -NAN;
  iVar6 = 0;
  fVar3 = 0.0;
  fStack_8c = 0.0;
  piVar12 = (int *)(param_1 + 0x14);
  do {
    fVar2 = (float)*piVar12;
    fStack_8c = fVar2 + fStack_8c;
    if ((float)piStack_a4 < fVar2) {
      piStack_a4 = (int *)fVar2;
    }
    if (0 < *piVar12) {
      fStack_88 = (float)iVar6;
    }
    fVar3 = fVar3 + (float)piVar12[0x1e];
    iVar6 = iVar6 + 1;
    piVar12 = piVar12 + 1;
  } while (iVar6 < 0x1e);
  if (0.0 < (float)piStack_a4) {
    FUN_005afe30();
    FUN_005afe30(s_fps_perc__graph_time_006a3f60);
    FUN_005afe30(s_______________________006a3f44);
    uStack_58 = 0;
    fStack_74 = (fStack_8c * 50.0) / (float)piStack_a4;
    iVar6 = 0;
    piStack_a4 = (int *)(param_1 + 0x14);
    do {
      if (iVar6 + (int)fStack_88 < iVar6) break;
      FUN_005ae390(local_9c,s__2_1f_006a3f3c,(double)(((float)*piStack_a4 * 100.0) / fStack_8c));
      local_c = 0xb;
      while (uStack_94 < 4) {
        uVar5 = FUN_004caa20(auStack_54,&DAT_00693460,local_9c);
        local_c._0_1_ = 0xc;
        FUN_0040cc00(uVar5,0,0xffffffff);
        local_c = CONCAT31(local_c._1_3_,0xb);
        FUN_004040a0();
      }
      FUN_004040a0();
      local_c._0_1_ = 0xd;
      if (0.0 < fVar3) {
        uVar5 = FUN_005ae390(auStack_44,s__2_1f_006a3f3c,
                             (double)(((float)piStack_a4[0x1e] * 100.0) / fVar3));
        local_c._0_1_ = 0xe;
        FUN_0040cc00(uVar5,0,0xffffffff);
        local_c._0_1_ = 0xd;
        FUN_004040a0();
      }
      while (uStack_7c < 4) {
        uVar5 = FUN_004caa20(auStack_24,&DAT_00693460,local_84);
        local_c._0_1_ = 0xf;
        FUN_0040cc00(uVar5,0,0xffffffff);
        local_c._0_1_ = 0xd;
        FUN_004040a0();
      }
      uVar5 = __ftol();
      iVar8 = FUN_00568ba0(auStack_68,0x58,uVar5);
      local_c._0_1_ = 0x10;
      puVar4 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar8 + 4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(iVar8 + 4);
      }
      puVar11 = puStack_80;
      if (puStack_80 == (undefined1 *)0x0) {
        puVar11 = &DAT_0064a3b4;
      }
      puVar9 = puStack_98;
      if (puStack_98 == (undefined1 *)0x0) {
        puVar9 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_34,s__2d__s__s__s_006a3f28,iVar6,puVar9,puVar11,puVar4);
      local_c._0_1_ = 0x11;
      FUN_005aff00(uVar5);
      local_c._0_1_ = 0x10;
      FUN_004040a0();
      local_c = CONCAT31(local_c._1_3_,0xd);
      FUN_004040a0();
      if (puStack_80 != (undefined1 *)0x0) {
        cVar1 = puStack_80[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          puStack_80[-1] = cVar1 + -1;
        }
      }
      puStack_80 = (undefined1 *)0x0;
      uStack_7c = 0;
      uStack_78 = 0;
      local_c = 0xffffffff;
      if (puStack_98 != (undefined1 *)0x0) {
        cVar1 = puStack_98[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          puStack_98[-1] = cVar1 + -1;
        }
      }
      iVar6 = iVar6 + 1;
      piStack_a4 = piStack_a4 + 1;
      puStack_98 = (undefined1 *)0x0;
      uStack_94 = 0;
      uStack_90 = 0;
    } while (iVar6 < 0x1e);
  }
  piStack_a4 = (int *)0x0;
  fStack_88 = -1.0;
  fStack_8c = -1.0;
  pfVar13 = *(float **)(local_6c + 0x120);
  iVar6 = local_6c;
  if (pfVar13 != *(float **)(local_6c + 0x124)) {
    do {
      fStack_74 = *pfVar13;
      if (fStack_74 == -NAN) {
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_c = 0x12;
        pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a);
        (*pcVar7)();
        local_c = 0xffffffff;
        FUN_004040a0();
        iVar6 = local_6c;
      }
      fVar3 = (float)(int)fStack_74 * 0.001;
      piStack_a4 = (int *)(fVar3 + (float)piStack_a4);
      if ((fStack_88 == -1.0) || (fVar3 < fStack_88)) {
        fStack_88 = fVar3;
      }
      if ((fStack_8c != -1.0) && (fVar3 <= fStack_8c)) {
        fVar3 = fStack_8c;
      }
      fStack_8c = fVar3;
      pfVar13 = pfVar13 + 1;
    } while (pfVar13 != *(float **)(iVar6 + 0x124));
  }
  FUN_005afe30();
  FUN_005afe30(s_________006a3f10);
  if ((((float)piStack_a4 <= 0.0) || (iVar8 = *(int *)(iVar6 + 0x120), iVar8 == 0)) ||
     (*(int *)(iVar6 + 0x124) - iVar8 >> 2 == 0)) {
    FUN_005afe30();
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + 0x124) - iVar8 >> 2;
    }
    uVar5 = FUN_005ae390(auStack_68,s__d_hickups_006a3f00,iVar8);
    local_c = 0x13;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    if (iStack_64 != 0) {
      cVar1 = *(char *)(iStack_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_64 + -1) = cVar1 + -1;
      }
    }
    if (*(int *)(iVar6 + 0x120) == 0) {
      fStack_74 = 0.0;
    }
    else {
      fStack_74 = (float)(*(int *)(iVar6 + 0x124) - *(int *)(iVar6 + 0x120) >> 2);
    }
    uStack_70 = 0;
    uVar5 = FUN_005ae390(auStack_68,s___2f_seconds_average_006a3ee4,
                         (double)((float)piStack_a4 / (float)(uint)fStack_74));
    local_c = 0x14;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    if (iStack_64 != 0) {
      cVar1 = *(char *)(iStack_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_64 + -1) = cVar1 + -1;
      }
    }
    uVar5 = FUN_005ae390(auStack_68,s___2f_seconds_minimum_006a3ec8,(double)fStack_88);
    local_c = 0x15;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    if (iStack_64 != 0) {
      cVar1 = *(char *)(iStack_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_64 + -1) = cVar1 + -1;
      }
    }
    uVar5 = FUN_005ae390(auStack_68,s___2f_seconds_maximum_006a3eac,(double)fStack_8c);
    local_c = 0x16;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    if (iStack_64 != 0) {
      cVar1 = *(char *)(iStack_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_64 + -1) = cVar1 + -1;
      }
    }
    uVar5 = FUN_005ae390(auStack_54,s___2f_seconds_total_006a3e94,(double)(float)piStack_a4);
    local_c = 0x17;
    FUN_005aff00(uVar5);
    local_c = 0xffffffff;
    if (iStack_50 != 0) {
      cVar1 = *(char *)(iStack_50 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_50 + -1) = cVar1 + -1;
        iStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        goto LAB_00568b70;
      }
      FUN_005fe5f0();
    }
    iStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
  }
LAB_00568b70:
  FUN_005afe30();
  ExceptionList = local_14;
  return;
}

