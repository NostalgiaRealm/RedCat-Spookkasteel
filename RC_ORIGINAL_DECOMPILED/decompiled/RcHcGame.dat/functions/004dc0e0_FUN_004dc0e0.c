/*
 * FUN_004dc0e0 at 004dc0e0
 * undefined FUN_004dc0e0(void)
 * Address ranges: 004dc0e0-004dca5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004dc0e0(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  float10 fVar11;
  undefined1 local_215;
  int local_214;
  float fStack_210;
  int local_20c;
  undefined1 local_208 [16];
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  undefined1 auStack_1e0 [4];
  char *pcStack_1dc;
  undefined1 auStack_1d0 [4];
  char *pcStack_1cc;
  undefined1 auStack_1c0 [4];
  char *pcStack_1bc;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [340];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063208d;
  pvStack_c = ExceptionList;
  iVar3 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  local_214 = param_1;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xfc) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_215);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_208);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_20c = *(int *)(iVar3 + 0xfc);
  if (param_3 != param_2) {
    switch(param_3) {
    case 0:
      iVar3 = local_214;
      if ((DAT_006b9274 & 1) == 0) {
        DAT_006b9274 = DAT_006b9274 | 1;
        auStack_1b0[0] = local_215;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_Player_006902e0;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_Player_006902e0,~uVar8 - 1);
        local_4 = 1;
        auStack_190[0] = local_215;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_MinNoDamageImpactSpeedFactor_00699ea4;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_MinNoDamageImpactSpeedFactor_00699ea4,~uVar8 - 1);
        local_4._0_1_ = 2;
        uVar5 = FUN_00436f90(auStack_180);
        local_4._0_1_ = 3;
        iVar3 = FUN_005ac8b0(auStack_190,auStack_1b0,0x3d4ccccd,uVar5,0);
        local_4._0_1_ = 4;
        if (*(float *)(iVar3 + 0x60) == 0.0) {
          fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_215);
          *(float *)(iVar3 + 0x60) = (float)fVar11;
        }
        else {
          fVar11 = (float10)*(float *)(iVar3 + 0x60);
        }
        iVar3 = local_214;
        local_4._0_1_ = 3;
        _DAT_006b9270 = (float)(fVar11 * (float10)*(float *)(local_214 + 0x194));
        FUN_005acca0();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if ((DAT_006b9274 & 2) == 0) {
        DAT_006b9274 = DAT_006b9274 | 2;
        local_208[0] = local_215;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_Player_006902e0;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_Player_006902e0,~uVar8 - 1);
        auStack_1a0[0] = local_215;
        local_4 = 5;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_MaxNoDamageImpactSpeedFactor_00699e84;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_MaxNoDamageImpactSpeedFactor_00699e84,~uVar8 - 1);
        local_4._0_1_ = 6;
        uVar5 = FUN_00436f90(auStack_170);
        local_4._0_1_ = 7;
        iVar3 = FUN_005ac8b0(auStack_1a0,local_208,0x40000000,uVar5,0);
        local_4._0_1_ = 8;
        if (*(float *)(iVar3 + 0x60) == 0.0) {
          fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_215);
          *(float *)(iVar3 + 0x60) = (float)fVar11;
        }
        else {
          fVar11 = (float10)*(float *)(iVar3 + 0x60);
        }
        local_4._0_1_ = 7;
        _DAT_006b926c = (float)(fVar11 * (float10)*(float *)(local_214 + 0x194));
        FUN_005acca0();
        local_4._0_1_ = 6;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        iVar3 = local_214;
      }
      if ((DAT_006b9274 & 4) == 0) {
        DAT_006b9274 = DAT_006b9274 | 4;
        auStack_1e0[0] = local_215;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_Player_006902e0;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar2 = FUN_00401940(uVar8,1);
        if (cVar2 != '\0') {
          pcVar10 = s_Player_006902e0;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcStack_1dc = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcStack_1dc = pcStack_1dc + 4;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcStack_1dc = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcStack_1dc = pcStack_1dc + 1;
          }
          FUN_00404190(uVar8);
        }
        auStack_1d0[0] = local_215;
        local_4 = 9;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_DamageAtDoubleImpact_00699e6c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar2 = FUN_00401940(uVar8,1);
        if (cVar2 != '\0') {
          pcVar10 = s_DamageAtDoubleImpact_00699e6c;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcStack_1cc = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcStack_1cc = pcStack_1cc + 4;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcStack_1cc = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcStack_1cc = pcStack_1cc + 1;
          }
          FUN_00404190(uVar8);
        }
        local_4._0_1_ = 10;
        uVar5 = FUN_00436f90(auStack_160);
        local_4._0_1_ = 0xb;
        iVar3 = FUN_005ac8b0(auStack_1d0,auStack_1e0,0x42c80000,uVar5,0);
        local_4._0_1_ = 0xc;
        if (*(float *)(iVar3 + 0x60) == 0.0) {
          fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_215);
          *(float *)(iVar3 + 0x60) = (float)fVar11;
        }
        else {
          fVar11 = (float10)*(float *)(iVar3 + 0x60);
        }
        _DAT_006b9268 = (float)fVar11;
        local_4._0_1_ = 0xb;
        FUN_005acca0();
        local_4._0_1_ = 10;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        iVar3 = local_214;
      }
      fVar1 = _DAT_006996e0 * *(float *)(iVar3 + 0x178);
      *(undefined4 *)(iVar3 + 0x178) = 0;
      fVar1 = -fVar1;
      param_1 = local_214;
      if (_DAT_006b9270 <= fVar1) {
        fStack_210 = fVar1 / _DAT_006b926c;
        if ((1.0 < fStack_210) &&
           (FUN_00503fc0((fStack_210 - 1.0) * _DAT_006b9268,iVar3,0), 1.0 < fStack_210)) {
          fStack_210 = 1.0;
        }
        if ((param_5 & 0x20000) == 0) {
          if ((param_5 & 0x10000) == 0) {
            FUN_0054ffe0(&iStack_1f0,&DAT_006b5708,0,fStack_210,0,0);
            param_1 = local_214;
            if ((iStack_1f0 != 0) &&
               (iVar3 = *(int *)(iStack_1f0 + 0x14) + -1, *(int *)(iStack_1f0 + 0x14) = iVar3,
               iVar3 == 0)) {
              FUN_005abfc0(0);
              param_1 = local_214;
            }
          }
          else {
            FUN_0054ffe0(&iStack_1f8,&DAT_006b5520,0,fStack_210,0,0);
            param_1 = local_214;
            if ((iStack_1f8 != 0) &&
               (iVar3 = *(int *)(iStack_1f8 + 0x14) + -1, *(int *)(iStack_1f8 + 0x14) = iVar3,
               iVar3 == 0)) {
              FUN_005abfc0(0);
              param_1 = local_214;
            }
          }
        }
        else {
          FUN_0054ffe0(&iStack_1e4,&DAT_006b5618,0,fStack_210,0,0);
          param_1 = local_214;
          if ((iStack_1e4 != 0) &&
             (iVar3 = *(int *)(iStack_1e4 + 0x14) + -1, *(int *)(iStack_1e4 + 0x14) = iVar3,
             iVar3 == 0)) {
            FUN_005abfc0(0);
            param_1 = local_214;
          }
        }
      }
      break;
    case 1:
    case 4:
      break;
    case 2:
      cVar2 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
      if (cVar2 != '\0') {
        if ((param_5 & 0x20000) == 0) {
          if ((param_5 & 0x10000) == 0) {
            FUN_0054ffe0(&iStack_1ec,&DAT_006b5738,0,0x3f800000,0,0);
            if ((iStack_1ec != 0) &&
               (iVar3 = *(int *)(iStack_1ec + 0x14) + -1, *(int *)(iStack_1ec + 0x14) = iVar3,
               iVar3 == 0)) {
              FUN_005abfc0(0);
            }
          }
          else {
            FUN_0054ffe0(&iStack_1f4,&DAT_006b5548,0,0x3f800000,0,0);
            if ((iStack_1f4 != 0) &&
               (iVar3 = *(int *)(iStack_1f4 + 0x14) + -1, *(int *)(iStack_1f4 + 0x14) = iVar3,
               iVar3 == 0)) {
              FUN_005abfc0(0);
            }
          }
        }
        else {
          FUN_0054ffe0(&iStack_1e8,&DAT_006b5640,0,0x3f800000,0,0);
          if ((iStack_1e8 != 0) &&
             (iVar3 = *(int *)(iStack_1e8 + 0x14) + -1, *(int *)(iStack_1e8 + 0x14) = iVar3,
             iVar3 == 0)) {
            FUN_005abfc0(0);
          }
        }
      }
      break;
    default:
      auStack_1c0[0] = local_215;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = s_player_is_in_unknown_move_state_00690548;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8,1);
      if (cVar2 != '\0') {
        pcVar10 = s_player_is_in_unknown_move_state_00690548;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcStack_1bc = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcStack_1bc = pcStack_1bc + 4;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcStack_1bc = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcStack_1bc = pcStack_1bc + 1;
        }
        FUN_00404190(uVar8);
      }
      local_4 = 0xd;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_00699728,0x816,auStack_1c0);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  if (*(undefined **)(param_1 + 0x210) != &DAT_006b5400) {
    if (*(int *)(param_1 + 0x20c) != 0) {
      if (*(int *)(param_1 + 0x20c) == 0) {
        local_208[0] = local_215;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4 = 0xe;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_208);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_00553130();
    }
    *(undefined **)(param_1 + 0x210) = &DAT_006b5400;
    piVar6 = (int *)FUN_0054ffe0(&local_20c,&DAT_006b5400,1,0x3f800000,0,0);
    iVar3 = *(int *)(param_1 + 0x20c);
    local_4 = 0xf;
    if (iVar3 != *piVar6) {
      if ((iVar3 != 0) &&
         (iVar7 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar7, iVar7 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar6;
      *(int *)(param_1 + 0x20c) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_20c != 0) &&
       (iVar3 = *(int *)(local_20c + 0x14) + -1, *(int *)(local_20c + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

