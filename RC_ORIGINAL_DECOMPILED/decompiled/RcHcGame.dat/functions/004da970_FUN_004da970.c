/*
 * FUN_004da970 at 004da970
 * undefined FUN_004da970(void)
 * Address ranges: 004da970-004dba0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004da970(int *param_1,char *param_2,int param_3)

{
  int **ppiVar1;
  bool bVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined4 unaff_EBP;
  float unaff_ESI;
  char *pcVar14;
  uint *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  uint *puVar18;
  float10 fVar19;
  int **ppiStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  int *piStack_164;
  int *piStack_160;
  undefined1 auStack_14c [4];
  int local_148;
  undefined4 *puStack_144;
  int iStack_140;
  int iStack_13c;
  int *piStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [4];
  int *piStack_114;
  int iStack_110;
  int iStack_10c;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [8];
  uint auStack_e0 [9];
  undefined1 auStack_bc [128];
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  int iStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631f72;
  local_c = ExceptionList;
  local_130 = (float)param_1[0x86];
  uVar13 = 1;
  ExceptionList = &local_c;
  if (local_130 != -NAN) {
    iVar6 = param_1[0x87];
    if (iVar6 == -1) {
      ExceptionList = &local_c;
      param_1[0x88] = 0x3f800000;
      param_1[0x87] = (int)(param_2 + (int)local_130);
    }
    else if (iVar6 < (int)param_2) {
      ExceptionList = &local_c;
      param_1[0x88] = 0;
      uVar13 = 0;
    }
    else if ((int)local_130 < 1) {
      ExceptionList = &local_c;
      param_1[0x88] = 0;
    }
    else {
      local_12c = (float)(iVar6 - (int)param_2);
      ExceptionList = &local_c;
      param_1[0x88] = (int)((float)(int)local_12c / (float)(int)local_130);
    }
  }
  *(undefined1 *)(param_1 + 0x89) = uVar13;
  if (param_1[0x43] != 0) {
    if (param_3 == -1) {
      piStack_160 = (int *)0x0;
      local_148 = CONCAT31(local_148._1_3_,auStack_14c[3]);
      piStack_164 = (int *)0x4daa2a;
      FUN_004040a0();
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      piStack_160 = (int *)(~uVar11 - 1);
      piStack_164 = (int *)&DAT_006b3f70;
      pcStack_168 = (char *)0x4daa48;
      FUN_004040f0();
      piStack_160 = &local_148;
      local_4 = 0;
      piStack_164 = (int *)0x8a;
      pcStack_168 = s___AdamSource_AdamClock_h_0068e22c;
      pcStack_16c = s_a_Time____ADAMTIME_NONE_0068e214;
      fStack_170 = 7.132463e-39;
      pcVar4 = (code *)FUN_005a07f0();
      fStack_170 = 7.132466e-39;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_160 = (int *)0x1;
      piStack_164 = (int *)0x4daa83;
      FUN_004040a0();
    }
    local_130 = (float)param_3;
    local_12c = local_130 * 0.001;
    piStack_160 = (int *)0x4daaa3;
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x3e] + 4))();
    if (piVar5 == (int *)0x0) {
      local_148 = CONCAT31(local_148._1_3_,auStack_14c[3]);
      piStack_164 = (int *)0x4daabf;
      piStack_160 = piVar5;
      FUN_004040a0();
      uVar11 = 0xffffffff;
      piStack_160 = (int *)0x1;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      piStack_164 = (int *)(~uVar11 - 1);
      pcStack_168 = (char *)0x4daade;
      piStack_138 = piStack_164;
      cVar3 = FUN_00401940();
      if (cVar3 != '\0') {
        piStack_160 = piStack_138;
        puVar10 = (undefined4 *)&DAT_006b3f70;
        puVar16 = puStack_144;
        for (uVar11 = (uint)piStack_138 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar16 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar16 = puVar16 + 1;
        }
        for (uVar11 = (uint)piStack_138 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        piStack_164 = (int *)0x4dab09;
        FUN_00404190();
      }
      piStack_160 = &local_148;
      local_4 = 1;
      piStack_164 = (int *)0x620;
      pcStack_168 = s_D__Work_RCHorror_AdamSource_Adam_00699728;
      pcStack_16c = s_prevFrameInput____0_00699d80;
      fStack_170 = 7.13275e-39;
      pcVar4 = (code *)FUN_005a07f0();
      fStack_170 = 7.132752e-39;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_160 = (int *)0x1;
      piStack_164 = (int *)0x4dab4f;
      FUN_004040a0();
    }
    piStack_160 = (int *)0x4dab5a;
    (**(code **)(*(int *)param_1[0x3e] + 0xc))();
    piStack_160 = (int *)param_1[0x3e];
    pcStack_168 = (char *)param_3;
    pcStack_16c = param_2;
    fStack_170 = 7.132838e-39;
    piStack_164 = piVar5;
    (**(code **)(*param_1 + 0x60))();
    if (piVar5 != (int *)0x0) {
      fStack_170 = 1.4013e-45;
      uStack_174 = (float *)0x4dab7f;
      (**(code **)*piVar5)();
    }
    if ((char)param_1[0x8f] == '\0') {
      fStack_170 = 7.132964e-39;
      cVar3 = FUN_004dd380();
      if (cVar3 == '\0') {
        fStack_170 = 7.133453e-39;
        (**(code **)(*(int *)param_1[0x3e] + 0x38))();
      }
      else {
        puStack_144 = (undefined4 *)param_1[0x44];
        bVar2 = true;
        if (puStack_144 != (undefined4 *)0xffffffff) {
          iVar6 = param_1[0x45];
          if (iVar6 == -1) {
            param_1[0x46] = 0x3f800000;
            param_1[0x45] = (int)((int)puStack_144 + (int)param_2);
          }
          else if (iVar6 < (int)param_2) {
            param_1[0x46] = 0;
            bVar2 = false;
          }
          else if ((int)puStack_144 < 1) {
            param_1[0x46] = 0;
          }
          else {
            local_148 = iVar6 - (int)param_2;
            param_1[0x46] = (int)((float)local_148 / (float)(int)puStack_144);
          }
        }
        *(bool *)(param_1 + 0x47) = bVar2;
        if (!bVar2) {
          local_148 = param_1[0x48];
          bVar2 = true;
          if (local_148 != -1) {
            iVar6 = param_1[0x49];
            if (iVar6 == -1) {
              param_1[0x4a] = 0x3f800000;
              param_1[0x49] = (int)(param_2 + local_148);
            }
            else if (iVar6 < (int)param_2) {
              param_1[0x4a] = 0;
              bVar2 = false;
            }
            else if (local_148 < 1) {
              param_1[0x4a] = 0;
            }
            else {
              puStack_144 = (undefined4 *)(iVar6 - (int)param_2);
              param_1[0x4a] = (int)((float)(int)puStack_144 / (float)local_148);
            }
          }
          *(bool *)(param_1 + 0x4b) = bVar2;
          if (!bVar2) {
            fStack_170 = 7.133304e-39;
            (**(code **)(*param_1 + 0x58))();
            param_1[0x44] = 1;
            param_1[0x45] = -1;
            param_1[0x46] = 0x3f800000;
            *(undefined1 *)(param_1 + 0x47) = 1;
            param_1[0x48] = 1;
            param_1[0x49] = -1;
            param_1[0x4a] = 0x3f800000;
            *(undefined1 *)(param_1 + 0x4b) = 1;
          }
        }
        fStack_170 = -((1.0 - (float)param_1[0x46]) * 1.5707964);
        uStack_174 = (float *)0x4dad1d;
        (**(code **)(*(int *)param_1[0x3e] + 0x20))();
      }
    }
    else {
      local_148 = param_1[0x8e] + param_3;
      param_1[0x8e] = local_148;
      if (5000.0 < (float)local_148) {
        *(undefined1 *)(param_1 + 0x8f) = 0;
        param_1[0x8e] = 0;
      }
    }
    fStack_170 = 7.133468e-39;
    (**(code **)(*(int *)param_1[0x3e] + 0x10))();
    fStack_170 = 7.133478e-39;
    cVar3 = FUN_004d6710();
    if (cVar3 == '\0') {
      fStack_170 = 7.133535e-39;
      cVar3 = (**(code **)(*(int *)param_1[0x3e] + 0x2c))();
      if (cVar3 == '\0') {
        param_1[99] = DAT_006b92c8;
        param_1[100] = DAT_006b92cc;
      }
      else {
        param_1[99] = DAT_006b92c0;
        param_1[100] = DAT_006b92c4;
      }
    }
    else {
      param_1[99] = DAT_006b92d0;
      param_1[100] = DAT_006b92d4;
    }
    fStack_170 = (float)param_1[100];
    uStack_174 = &local_12c;
    uStack_178 = (int *)0x4dadb5;
    (**(code **)(*(int *)param_1[0x3e] + 0x24))();
    uStack_178 = (int *)0x4dadbe;
    FUN_005b2fa0();
    if (fStack_134 < 0.0) {
      uStack_174 = &local_130;
      uStack_178 = (int *)0x4daddf;
      iVar6 = (**(code **)(*(int *)param_1[0x3e] + 0x24))();
      fStack_134 = *(float *)(iVar6 + 8) * (float)param_1[99];
    }
    uStack_174 = &local_130;
    uStack_178 = (int *)0x4dadfc;
    iVar6 = (**(code **)(*(int *)param_1[0x3e] + 0x28))();
    uStack_178 = *(int **)(iVar6 + 4);
    uStack_17c = &iStack_140;
    ppiStack_180 = &piStack_160;
    piVar5 = (int *)FUN_004da920();
    iStack_140 = *piVar5;
    uStack_178 = &iStack_140;
    iStack_13c = piVar5[1];
    piStack_138 = (int *)piVar5[2];
    uStack_17c = (int *)0x4dae2f;
    fVar19 = (float10)FUN_00431000();
    uStack_17c = (int *)(float)fVar19;
    ppiStack_180 = (int **)0x4dae42;
    FUN_005b3020();
    iVar6 = param_1[0x40];
    uStack_17c = &iStack_140;
    ppiVar1 = (int **)(param_1 + 0x66);
    uStack_178 = puStack_144;
    ppiStack_180 = ppiVar1;
    piVar7 = (int *)(**(code **)(*param_1 + 0x54))(&piStack_160);
    piVar5 = (int *)*piVar7;
    iStack_140 = piVar7[1];
    iStack_13c = piVar7[2];
    param_1[0x60] = iVar6;
    param_1[0x61] = (int)auStack_14c;
    param_1[0x62] = local_148;
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      FUN_00554210(param_1 + 0x60,s_currentSpeed__texels_sec__00699d64);
    }
    *ppiVar1 = piVar5;
    param_1[0x67] = iStack_140;
    param_1[0x68] = iStack_13c;
    FUN_004dd490(ppiVar1);
    FUN_004d6720();
    iVar6 = param_1[0x42];
    param_1[0x42] = 0;
    cVar3 = FUN_00554b00(ppiVar1,3,0,auStack_e8);
    if ((cVar3 != '\0') &&
       (param_1[0x42] = auStack_e0[1] & 0x30000, (auStack_e0[1] >> 0x12 & 1) != 0)) {
      if (_DAT_006996e4 == -1.0) {
        puStack_144 = (undefined4 *)CONCAT31(puStack_144._1_3_,uStack_174._3_1_);
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = s_Player_006902e0;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_Player_006902e0,~uVar11 - 1);
        fStack_170 = (float)CONCAT31(fStack_170._1_3_,uStack_174._3_1_);
        pcStack_2c = (char *)0x4;
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = s_DeathDamagePerSecond_00699d4c;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_DeathDamagePerSecond_00699d4c,~uVar11 - 1);
        pcStack_2c._0_1_ = 5;
        uVar8 = FUN_00436f90(auStack_108);
        pcStack_2c._0_1_ = 6;
        iVar9 = FUN_005a3d10(&fStack_170,&puStack_144,0x43480000,0,0x447a0000,uVar8);
        pcStack_2c._0_1_ = 7;
        if (*(float *)(iVar9 + 0x60) == 0.0) {
          fVar19 = (float10)FUN_005ad390(iVar9 + 0x14,(int)&uStack_174 + 3);
          *(float *)(iVar9 + 0x60) = (float)fVar19;
        }
        else {
          fVar19 = (float10)*(float *)(iVar9 + 0x60);
        }
        _DAT_006996e4 = (float)fVar19;
        pcStack_2c._0_1_ = 6;
        FUN_005a3ce0();
        pcStack_2c._0_1_ = 5;
        FUN_004040a0(1);
        pcStack_2c = (char *)CONCAT31(pcStack_2c._1_3_,4);
        FUN_004040a0(1);
        pcStack_2c = (char *)0xffffffff;
        FUN_004040a0(1);
      }
      if (iStack_20 == -1) {
        fStack_170 = (float)CONCAT31(fStack_170._1_3_,uStack_174._3_1_);
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
        pcStack_2c = (char *)0x8;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,&fStack_170);
        (*pcVar4)();
        pcStack_2c = (char *)0xffffffff;
        FUN_004040a0(1);
      }
      FUN_00503fc0(unaff_ESI * _DAT_006996e4 * 0.001,0,0);
    }
    FUN_004dc0e0(piStack_160,param_1[0x40],iVar6,param_1[0x42],unaff_EBP);
    if ((param_1[0x42] & 0x20000U) != 0) {
      if (_DAT_006996e8 == -1.0) {
        fStack_170 = (float)CONCAT31(fStack_170._1_3_,uStack_174._3_1_);
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = s_Player_006902e0;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        uVar11 = ~uVar11 - 1;
        cVar3 = FUN_00401940(uVar11,1);
        if (cVar3 != '\0') {
          pcVar14 = s_Player_006902e0;
          pcVar17 = pcStack_16c;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar17 = pcVar17 + 1;
          }
          FUN_00404190(uVar11);
        }
        pcStack_2c = (char *)0x9;
        puStack_144 = (undefined4 *)CONCAT31(puStack_144._1_3_,uStack_174._3_1_);
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = s_OozeDamagePerSecond_00699d38;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_OozeDamagePerSecond_00699d38,~uVar11 - 1);
        pcStack_2c._0_1_ = 10;
        uVar8 = FUN_00436f90(auStack_108);
        pcStack_2c._0_1_ = 0xb;
        iVar6 = FUN_005a3d10(&puStack_144,&fStack_170,0x40400000,0,0x42c80000,uVar8);
        pcStack_2c._0_1_ = 0xc;
        if (*(float *)(iVar6 + 0x60) == 0.0) {
          fVar19 = (float10)FUN_005ad390(iVar6 + 0x14,(int)&uStack_174 + 3);
          *(float *)(iVar6 + 0x60) = (float)fVar19;
        }
        else {
          fVar19 = (float10)*(float *)(iVar6 + 0x60);
        }
        _DAT_006996e8 = (float)fVar19;
        pcStack_2c._0_1_ = 0xb;
        FUN_005a3ce0();
        pcStack_2c._0_1_ = 10;
        FUN_004040a0(1);
        pcStack_2c = (char *)CONCAT31(pcStack_2c._1_3_,9);
        FUN_004040a0(1);
        pcStack_2c = (char *)0xffffffff;
        FUN_004040a0(1);
      }
      if (iStack_20 == -1) {
        fStack_170 = (float)CONCAT31(fStack_170._1_3_,uStack_174._3_1_);
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
        pcStack_2c = (char *)0xd;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,&fStack_170);
        (*pcVar4)();
        pcStack_2c = (char *)0xffffffff;
        FUN_004040a0(1);
      }
      FUN_00503fc0(unaff_ESI * _DAT_006996e8 * 0.001,0,0);
    }
    iStack_10c = param_1[0x68];
    iStack_110 = param_1[0x67];
    piStack_114 = *ppiVar1;
    puVar10 = (undefined4 *)(**(code **)(*(int *)param_1[0x3e] + 0x28))(&fStack_170);
    uVar8 = uStack_24;
    piVar5 = piStack_28;
    uStack_124 = *puVar10;
    uStack_120 = puVar10[1];
    uStack_11c = puVar10[2];
    if ((char)param_1[0x41] != '\0') {
      FUN_004da420(uStack_24,piStack_28);
      FUN_004d9d40(uVar8,piVar5);
    }
    puVar10 = &uStack_124;
    FUN_004d94e0(&uStack_174,uStack_24,piVar5);
    FUN_005b3000(puVar10);
    if (param_1[0x43] == 0) {
      uStack_174 = (float *)CONCAT31(uStack_174._1_3_,uStack_178._3_1_);
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      uStack_30 = 0xe;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_174);
      (*pcVar4)();
      uStack_30 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00556710();
    if (param_1[0x43] == 0) {
      uStack_174 = (float *)CONCAT31(uStack_174._1_3_,uStack_178._3_1_);
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      uStack_30 = 0xf;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_174);
      (*pcVar4)();
      uStack_30 = 0xffffffff;
      FUN_004040a0(1);
    }
    (**(code **)(*(int *)param_1[0x43] + 4))(auStack_118);
    if (param_1[0x43] == 0) {
      uStack_178 = (int *)CONCAT31(uStack_178._1_3_,uStack_17c._3_1_);
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      uStack_34 = 0x10;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_178);
      (*pcVar4)();
      uStack_34 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_005566c0(auStack_128);
    if (param_1[0x43] == 0) {
      uStack_178 = (int *)CONCAT31(uStack_178._1_3_,uStack_17c._3_1_);
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      uStack_34 = 0x11;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_178);
      (*pcVar4)();
      uStack_34 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_005569b0();
    iVar6 = FUN_00554a20();
    piStack_164 = *(int **)(iVar6 + 0x14);
    if (param_1[0x43] == 0) {
      FUN_00409810(&DAT_006b3f70,(int)&uStack_17c + 3);
      uStack_34 = 0x12;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_178);
      (*pcVar4)();
      uStack_34 = 0xffffffff;
      FUN_004040a0(1);
    }
    puVar15 = (uint *)(param_1[0x43] + 0x1e0);
    puVar18 = auStack_e0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    FUN_005b3670();
    FUN_005b2fa0(-(float)piStack_164);
    cVar3 = FUN_004dd380();
    if (cVar3 != '\0') {
      fStack_134 = fStack_134 - (1.0 - (float)param_1[0x46]) * _DAT_006b92b4 * 0.8;
    }
    iVar6 = FUN_00554a20();
    if (*(float *)(iVar6 + 0x10) < fStack_134) {
      iVar6 = FUN_00554a20();
      fStack_134 = *(float *)(iVar6 + 0x10);
    }
    iVar6 = FUN_00554a20();
    if (fStack_134 < *(float *)(iVar6 + 4)) {
      iVar6 = FUN_00554a20();
      fStack_134 = *(float *)(iVar6 + 4);
    }
    FUN_005b3000(auStack_bc);
    if (param_1[0x43] == 0) {
      uStack_178 = (int *)CONCAT31(uStack_178._1_3_,uStack_17c._3_1_);
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      uStack_34 = 0x13;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &uStack_178);
      (*pcVar4)();
      uStack_34 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00556a30(auStack_e0);
    if (param_1[0x7c] == 0) {
      FUN_00409810(&DAT_006b3f70,(int)&uStack_17c + 3);
      uStack_34 = 0x14;
      pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,&uStack_178);
      (*pcVar4)();
      uStack_34 = 0xffffffff;
      FUN_004040a0(1);
    }
    pcVar14 = pcStack_2c;
    (**(code **)(*(int *)param_1[0x7c] + 0x14))(pcStack_2c,piStack_28);
    if (param_1[0x7d] == 0) {
      FUN_00409810(&DAT_006b3f70,&stack0xfffffe7f);
      uStack_3c = 0x15;
      pcVar4 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x161,&ppiStack_180)
      ;
      (*pcVar4)();
      uStack_3c = 0xffffffff;
      FUN_004040a0(1);
    }
    (**(code **)(*(int *)param_1[0x7d] + 0x14))(pcVar14,piStack_28);
    if (param_1[0x7e] == 0) {
      piStack_160 = (int *)(auStack_14c + 3);
      piStack_164 = (int *)&DAT_006b3f70;
      pcStack_168 = (char *)0x4db8a3;
      FUN_00409810();
      piStack_160 = &local_148;
      local_4 = 0x16;
      piStack_164 = (int *)0x167;
      pcStack_168 = s_D__Work_RCHorror_AdamSource_Adam_0069888c;
      pcStack_16c = s_m_Communicator____0_006934bc;
      fStack_170 = 7.137619e-39;
      pcVar4 = (code *)FUN_005a07f0();
      fStack_170 = 7.137622e-39;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_160 = (int *)0x1;
      piStack_164 = (int *)0x4db8de;
      FUN_004040a0();
    }
    piStack_160 = piStack_28;
    piStack_164 = (int *)pcVar14;
    pcStack_168 = (char *)0x4db8ed;
    FUN_00513630();
    iVar6 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar6 = FUN_004bc480();
    }
    if (*(int *)(iVar6 + 0x3a4) == 0) {
      piStack_160 = (int *)&DAT_006b3f70;
      piStack_164 = (int *)0x4db91c;
      FUN_00409810();
      local_4 = 0x17;
      piStack_160 = (int *)0x130;
      piStack_164 = (int *)s___AdamSource_AdamApplication_h_0068e58c;
      pcStack_168 = s_m_Game_0068e584;
      pcStack_16c = (char *)0x4db940;
      pcVar4 = (code *)FUN_005a07f0();
      pcStack_16c = (char *)0x4db942;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_160 = (int *)0x4db957;
      FUN_004040a0();
    }
    piStack_160 = (int *)0x4db967;
    piVar5 = (int *)FUN_00453d40();
    local_4 = 0x18;
    if (*piVar5 == 0) {
      piStack_160 = (int *)&DAT_006b3f70;
      piStack_164 = (int *)0x4db991;
      FUN_00409810();
      local_4._0_1_ = 0x19;
      piStack_160 = (int *)0xb6;
      piStack_164 = (int *)s___AdamSource_DaviRC_h_0068d638;
      pcStack_168 = s_m_Pointer_0068d62c;
      pcStack_16c = (char *)0x4db9b5;
      pcVar4 = (code *)FUN_005a07f0();
      pcStack_16c = (char *)0x4db9b7;
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x18);
      piStack_160 = (int *)0x4db9cf;
      FUN_004040a0();
    }
    FUN_004f2570();
    FUN_004f3250();
    local_4 = 0xffffffff;
    FUN_0057d310();
  }
  ExceptionList = local_c;
  return;
}

