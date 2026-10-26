/*
 * FUN_004af180 at 004af180
 * undefined FUN_004af180(void)
 * Address ranges: 004af180-004affe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004af180(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  float fVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 extraout_ECX;
  float *pfVar16;
  char *pcVar17;
  undefined4 *puVar18;
  float10 fVar19;
  undefined8 uStack_208;
  undefined1 local_1ed;
  undefined1 *puStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined1 *puStack_1dc;
  undefined1 auStack_1d8 [4];
  undefined4 *puStack_1d4;
  double local_1c8;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int local_18c;
  undefined1 auStack_188 [4];
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [4];
  undefined4 *puStack_15c;
  uint uStack_158;
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e573;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_18c = param_1;
  if (param_5 != (int *)0x0) {
    puVar4 = *(undefined1 **)(param_1 + 0x54);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uStack_208 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x58),puVar4);
    ExceptionList = &pvStack_c;
    iVar5 = FUN_004251b0(0);
    if (iVar5 == 0) goto LAB_004af271;
  }
  local_1bc = CONCAT31(local_1bc._1_3_,local_1ed);
  uStack_208 = 2.42664986171999e-317;
  FUN_004040a0();
  uVar14 = 0xffffffff;
  pcVar17 = &DAT_006b3f70;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar3 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar3 != '\0');
  uVar14 = ~uVar14 - 1;
  uStack_208 = (double)CONCAT44(1,uVar14);
  cVar3 = FUN_00401940();
  if (cVar3 != '\0') {
    puVar7 = (undefined4 *)&DAT_006b3f70;
    puVar18 = local_1b8;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar18 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar18 = puVar18 + 1;
    }
    for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    uStack_208 = (double)CONCAT44(uVar14,0x4af22e);
    FUN_00404190();
  }
  local_4 = 0;
  uStack_208 = (double)CONCAT44(&local_1bc,0x3c);
  pcVar6 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Game_006961d8);
  (*pcVar6)();
  local_4 = 0xffffffff;
  uStack_208 = 2.12442250752585e-314;
  FUN_004040a0();
LAB_004af271:
  if (param_5 != (int *)0x0) {
    uStack_208 = (double)CONCAT44(&local_1c8,0x4af285);
    puVar7 = (undefined4 *)(**(code **)(*param_5 + 0x48))();
    uStack_1a4 = *puVar7;
    uStack_1a0 = puVar7[1];
    uStack_19c = puVar7[2];
    if (DAT_006c8de0 == 0) {
      uStack_208 = (double)CONCAT44(0x4af2a7,(undefined1 *)uStack_208);
      FUN_0055b280();
    }
    uStack_208 = (double)CONCAT44(&puStack_1ec,0x4af2b3);
    piVar8 = (int *)FUN_004b0050();
    local_4 = 1;
    if (*piVar8 == 0) {
      uStack_208 = 2.42676794340935e-317;
      FUN_004040a0();
      uVar14 = 0xffffffff;
      pcVar17 = &DAT_006b3f70;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar3 != '\0');
      uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
      FUN_004040f0();
      local_4._0_1_ = 2;
      uStack_208 = (double)CONCAT44(auStack_1d8,0xb6);
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_208 = 2.12442260189239e-314;
      FUN_004040a0();
    }
    iVar5 = *piVar8;
    local_4 = 0xffffffff;
    uStack_140 = *(undefined4 *)(iVar5 + 0x210);
    uStack_13c = *(undefined4 *)(iVar5 + 0x214);
    uStack_138 = *(undefined4 *)(iVar5 + 0x218);
    if ((puStack_1ec != (undefined1 *)0x0) &&
       (iVar5 = *(int *)(puStack_1ec + 0x14), *(int *)(puStack_1ec + 0x14) = iVar5 + -1,
       iVar5 + -1 == 0)) {
      uStack_208 = 2.4268504523722e-317;
      FUN_005abfc0();
    }
    uStack_208 = (double)CONCAT44(0x4af390,(undefined1 *)uStack_208);
    fVar19 = (float10)FUN_005b30a0();
    fStack_1e8 = (float)fVar19;
    if (fVar19 <= (float10)*(int *)(param_1 + 0x60)) {
      uStack_208 = (double)CONCAT44(&uStack_140,&uStack_1a4);
      puStack_1ec = &stack0xfffffdf4;
      FUN_004042e0(&stack0xfffffdf4);
      cVar3 = FUN_00594df0();
      if (cVar3 != '\0') {
        uStack_208 = (double)CONCAT44(&puStack_1ec,0x4af3e5);
        piVar8 = (int *)FUN_004042e0();
        local_4 = 3;
        if (*piVar8 == 0) {
          uStack_208 = 2.42691912749697e-317;
          FUN_004040a0();
          uVar14 = 0xffffffff;
          pcVar17 = &DAT_006b3f70;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar3 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar3 != '\0');
          uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
          FUN_004040f0();
          local_4._0_1_ = 4;
          uStack_208 = (double)CONCAT44(auStack_1d8,0xb6);
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
          (*pcVar6)();
          local_4 = CONCAT31(local_4._1_3_,3);
          uStack_208 = 2.12442275307648e-314;
          FUN_004040a0();
        }
        local_4 = 0xffffffff;
        iVar5 = *(int *)(*piVar8 + 0x360);
        if ((puStack_1ec != (undefined1 *)0x0) &&
           (iVar9 = *(int *)(puStack_1ec + 0x14), *(int *)(puStack_1ec + 0x14) = iVar9 + -1,
           iVar9 + -1 == 0)) {
          uStack_208 = 2.4269873085561e-317;
          FUN_005abfc0();
        }
        if (iVar5 != 0) {
          if (param_3 == -1) {
            uStack_208 = 2.427005588985e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar3 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar3 != '\0');
            uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
            FUN_004040f0();
            local_4 = 5;
            uStack_208 = (double)CONCAT44(auStack_1d8,0x8a);
            pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214);
            (*pcVar6)();
            local_4 = 0xffffffff;
            uStack_208 = 2.12442284250236e-314;
            FUN_004040a0();
          }
          fStack_1e0 = (1.0 - fStack_1e8 / (float)*(int *)(param_1 + 0x60)) * (float)param_3 *
                       *(float *)(param_1 + 100) * 0.001;
          uStack_208 = (double)CONCAT44(0x4af53d,(undefined1 *)uStack_208);
          iVar9 = FUN_005171f0();
          iVar5 = *(int *)(iVar9 + 100);
          if (iVar5 == -0x80000000) {
            puVar4 = *(undefined1 **)(iVar9 + 0x18);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0064a3b4;
            }
            uStack_208 = (double)CONCAT44(puVar4,0x4af55b);
            iVar5 = FUN_0060af10();
            *(int *)(iVar9 + 100) = iVar5;
          }
          if (iVar5 != 0) {
            uStack_208 = (double)fStack_1e8;
            uVar10 = FUN_005ae390(auStack_150,s_PlayerTotal___f_Time___d_Damage__006966e8,
                                  (double)*(float *)(param_1 + 100),param_3,(double)fStack_1e0);
            local_4 = 6;
            FUN_005aff00(uVar10);
            local_4 = 0xffffffff;
            uStack_208 = 2.12442293044605e-314;
            FUN_004040a0();
          }
          if (0.0 < fStack_1e0) {
            uStack_208 = (double)ZEXT48(param_5);
            FUN_00503fc0();
          }
        }
      }
    }
    iStack_184 = 0;
    iStack_180 = 0;
    uStack_17c = 0;
    local_4 = 7;
    uStack_208 = 2.42718295855185e-317;
    FUN_00514e80();
    puStack_1ec = *(undefined1 **)(param_1 + 0x60);
    puStack_1dc = (undefined1 *)&uStack_208;
    uStack_208 = (double)CONCAT44(&fStack_e0,extraout_ECX);
    fStack_e0 = (float)-(int)puStack_1ec;
    fStack_d4 = (float)(int)puStack_1ec;
    local_4 = 8;
    fStack_dc = fStack_e0;
    fStack_d8 = fStack_e0;
    fStack_d0 = fStack_d4;
    fStack_cc = fStack_d4;
    FUN_004042e0();
    FUN_005545f0();
    uStack_208 = (double)CONCAT44(0xffffffff,auStack_188);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_00554b60();
    iStack_1ac = 0;
    while( true ) {
      iVar5 = iStack_1ac;
      if (iStack_184 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iStack_180 - iStack_184 >> 2;
      }
      if (iVar9 <= iStack_1ac) break;
      if (iStack_1ac < 0) {
LAB_004af6e8:
        uStack_208 = 2.42729362925652e-317;
        FUN_004040a0();
        uVar14 = 0xffffffff;
        pcVar17 = &DAT_006b3f70;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar3 != '\0');
        uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
        FUN_004040f0();
        local_4._0_1_ = 10;
        uStack_208 = (double)CONCAT44(auStack_128,0x8b);
        pcVar6 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,9);
        uStack_208 = 2.12442313202483e-314;
        FUN_004040a0();
      }
      else {
        uStack_208 = (double)CONCAT44(0x4af6e4,(undefined1 *)uStack_208);
        iVar9 = FUN_0044e4c0();
        if (iVar9 <= iVar5) goto LAB_004af6e8;
      }
      piVar8 = *(int **)(iStack_184 + iVar5 * 4);
      uStack_208 = (double)CONCAT44(auStack_30,0x4af77b);
      piStack_1a8 = piVar8;
      pfVar11 = (float *)FUN_0049bc80();
      fStack_198 = *pfVar11;
      fStack_194 = pfVar11[1];
      fStack_190 = pfVar11[2];
      uStack_208 = (double)CONCAT44(&fStack_198,&uStack_1a4);
      local_1c8 = (double)CONCAT44(local_1c8._4_4_,&stack0xfffffdf4);
      FUN_004042e0(&stack0xfffffdf4);
      cVar3 = FUN_00594df0();
      if (cVar3 == '\0') {
        pfVar11 = (float *)(piVar8 + 0x47);
        pfVar16 = afStack_f8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar16 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          pfVar16 = pfVar16 + 1;
        }
        fStack_c8 = afStack_f8[0] + fStack_198;
        fStack_c4 = afStack_f8[1] + fStack_194;
        local_1c8 = (double)CONCAT44(local_1c8._4_4_,fStack_c4);
        fStack_1e0 = afStack_f8[2] + fStack_190;
        iVar5 = 0;
        pfVar11 = &fStack_c8;
        fStack_1e4 = fStack_e4 + fStack_190;
        fStack_1e8 = fStack_e8 + fStack_194;
        fStack_98 = afStack_f8[3] + fStack_198;
        fStack_c0 = fStack_1e0;
        fStack_bc = fStack_c8;
        fStack_b8 = fStack_c4;
        fStack_b4 = fStack_1e4;
        fStack_b0 = fStack_c8;
        fStack_ac = fStack_1e8;
        fStack_a8 = fStack_1e0;
        fStack_a4 = fStack_c8;
        fStack_a0 = fStack_1e8;
        fStack_9c = fStack_1e4;
        fStack_94 = fStack_c4;
        fStack_90 = fStack_1e0;
        fStack_8c = fStack_98;
        fStack_88 = fStack_c4;
        fStack_84 = fStack_1e4;
        fStack_80 = fStack_98;
        fStack_7c = fStack_1e8;
        fStack_78 = fStack_1e0;
        fStack_74 = fStack_98;
        fStack_70 = fStack_1e8;
        fStack_6c = fStack_1e4;
        do {
          uStack_208 = (double)CONCAT44(pfVar11,&uStack_1a4);
          local_1c8 = (double)CONCAT44(local_1c8._4_4_,&stack0xfffffdf4);
          FUN_004042e0(&stack0xfffffdf4);
          cVar3 = FUN_00594df0();
          if (cVar3 != '\0') break;
          iVar5 = iVar5 + 1;
          pfVar11 = pfVar11 + 3;
        } while (iVar5 < 8);
      }
      uStack_208 = (double)CONCAT44(0x4af933,(undefined1 *)uStack_208);
      iVar9 = FUN_005171f0();
      iVar5 = *(int *)(iVar9 + 100);
      if (iVar5 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar9 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uStack_208 = (double)CONCAT44(puVar4,0x4af951);
        iVar5 = FUN_0060af10();
        *(int *)(iVar9 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        local_1bc = 0x437f0000;
        local_1b8 = (undefined4 *)0x0;
        if (cVar3 != '\0') {
          local_1bc = 0;
          local_1b8 = (undefined4 *)0x437f0000;
        }
        uStack_1b0 = 0x437f0000;
        uStack_1b4 = 0;
        uStack_208 = (double)CONCAT44(&puStack_1ec,0x4af9af);
        piVar8 = (int *)FUN_004042e0();
        local_4._0_1_ = 0xb;
        if (*piVar8 == 0) {
          uStack_208 = 2.42765281498105e-317;
          FUN_004040a0();
          uVar14 = 0xffffffff;
          pcVar17 = &DAT_006b3f70;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar1 != '\0');
          uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
          FUN_004040f0();
          local_4._0_1_ = 0xc;
          uStack_208 = (double)CONCAT44(auStack_108,0xb6);
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
          (*pcVar6)();
          local_4._0_1_ = 0xb;
          uStack_208 = 2.12442349121056e-314;
          FUN_004040a0();
        }
        iVar5 = *piVar8;
        if (*(int *)(iVar5 + 0x5c) == 0) {
          uStack_208 = 2.42771704351501e-317;
          FUN_004040a0();
          uVar14 = 0xffffffff;
          pcVar17 = &DAT_006b3f70;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar1 != '\0');
          uStack_208 = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
          FUN_004040f0();
          local_4._0_1_ = 0xd;
          uStack_208 = (double)CONCAT44(auStack_118,0x144);
          pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8);
          (*pcVar6)();
          local_4._0_1_ = 0xb;
          uStack_208 = 2.12442355543909e-314;
          FUN_004040a0();
        }
        uVar10 = *(undefined4 *)(iVar5 + 0x5c);
        uStack_208 = (double)CONCAT44(0x4afac2,(undefined1 *)uStack_208);
        uVar12 = FUN_005b0300();
        uStack_208 = (double)CONCAT44(uVar12,0x3fc00000);
        FUN_005b04b0(uVar10,&uStack_1a4,&fStack_198,local_1bc,local_1b8,uStack_1b4,uStack_1b0,
                     local_1bc,local_1b8,uStack_1b4);
        local_4 = CONCAT31(local_4._1_3_,9);
        if (puStack_1ec != (undefined1 *)0x0) {
          iVar5 = *(int *)(puStack_1ec + 0x14);
          *(int *)(puStack_1ec + 0x14) = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            uStack_208 = 2.42782820828532e-317;
            FUN_005abfc0();
          }
          puStack_1ec = (undefined1 *)0x0;
        }
      }
      if (cVar3 != '\0') {
        if (*(int *)(local_18c + 0x68) != 0) {
          uStack_208 = (double)CONCAT44(piStack_1a8,0x4afb60);
          cVar3 = FUN_0050a650();
        }
        piVar8 = piStack_1a8;
        if (cVar3 != '\0') {
          uStack_208._4_4_ = auStack_68;
          uStack_208._0_4_ = auStack_18;
          (**(code **)(*piStack_1a8 + 0x48))();
          FUN_005b3000();
          uStack_208._0_4_ = auStack_60;
          (**(code **)(*piVar8 + 0x48))();
          uStack_208 = (double)CONCAT44(uStack_208._4_4_,0x4afbba);
          FUN_005b3000();
          uStack_208 = (double)CONCAT44(&fStack_16c,0x4afbd2);
          FUN_005b2fe0();
          uStack_208 = (double)CONCAT44(&fStack_178,0x4afbea);
          FUN_005b2fe0();
          if (0.0 <= fStack_178 * fStack_16c) {
            fVar2 = ABS(fStack_178);
            local_1c8 = (double)fVar2;
            fStack_134 = ABS(fStack_16c);
            if (fVar2 <= ABS(fStack_16c)) {
              fStack_134 = fVar2;
            }
          }
          else {
            fStack_134 = 0.0;
          }
          if (0.0 <= fStack_174 * fStack_168) {
            fVar2 = ABS(fStack_174);
            local_1c8 = (double)fVar2;
            fStack_130 = ABS(fStack_168);
            if (fVar2 <= ABS(fStack_168)) {
              fStack_130 = fVar2;
            }
          }
          else {
            fStack_130 = 0.0;
          }
          if (0.0 <= fStack_170 * fStack_164) {
            fVar2 = ABS(fStack_170);
            local_1c8 = (double)fVar2;
            fStack_12c = ABS(fStack_164);
            if (fVar2 <= ABS(fStack_164)) {
              fStack_12c = fVar2;
            }
          }
          else {
            fStack_12c = 0.0;
          }
          uStack_208 = (double)CONCAT44(0x4afce9,(undefined1 *)uStack_208);
          fVar19 = (float10)FUN_005b2fd0();
          fStack_1e8 = (float)fVar19;
          if (param_3 == -1) {
            uStack_208 = 2.42805992507322e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar3 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar3 != '\0');
            uVar14 = ~uVar14 - 1;
            uStack_208 = (double)CONCAT44(1,uVar14);
            cVar3 = FUN_00401940();
            if (cVar3 != '\0') {
              puVar7 = (undefined4 *)&DAT_006b3f70;
              puVar18 = puStack_1d4;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *puVar18 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar18 = puVar18 + 1;
              }
              for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined1 *)puVar18 = *(undefined1 *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
              uStack_208 = (double)CONCAT44(uVar14,0x4afd53);
              FUN_00404190();
            }
            local_4._0_1_ = 0xe;
            uStack_208 = (double)CONCAT44(auStack_1d8,0x8a);
            pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214);
            (*pcVar6)();
            local_4 = CONCAT31(local_4._1_3_,9);
            uStack_208 = 2.12442391215449e-314;
            FUN_004040a0();
          }
          iVar9 = local_18c;
          fStack_1e4 = (1.0 - fStack_1e8 / (float)*(int *)(local_18c + 0x60)) * (float)param_3 *
                       *(float *)(local_18c + 100) * 0.001;
          uStack_208 = (double)CONCAT44(0x4afdb6,(undefined1 *)uStack_208);
          iVar13 = FUN_005171f0();
          iVar5 = *(int *)(iVar13 + 100);
          if (iVar5 == -0x80000000) {
            puVar4 = *(undefined1 **)(iVar13 + 0x18);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0064a3b4;
            }
            uStack_208 = (double)CONCAT44(puVar4,0x4afdd6);
            iVar5 = FUN_0060af10();
            *(int *)(iVar13 + 100) = iVar5;
          }
          if (iVar5 != 0) {
            uStack_208 = (double)fStack_1e8;
            uVar10 = FUN_005ae390(auStack_150,s_EnemyTotal___f_Time___d_Damage____006966b0,
                                  (double)*(float *)(iVar9 + 100),param_3,(double)fStack_1e4);
            local_4._0_1_ = 0xf;
            FUN_005aff00(uVar10);
            local_4 = CONCAT31(local_4._1_3_,9);
            if (iStack_14c != 0) {
              cVar3 = *(char *)(iStack_14c + -1);
              if ((cVar3 == '\0') || (cVar3 == -1)) {
                uStack_208 = (double)CONCAT44((char *)(iStack_14c + -1),0x4afe56);
                FUN_005fe5f0();
              }
              else {
                *(char *)(iStack_14c + -1) = cVar3 + -1;
              }
            }
            iStack_14c = 0;
            uStack_148 = 0;
            uStack_144 = 0;
          }
          if (0.0 < fStack_1e4) {
            uStack_208 = (double)CONCAT44(&puStack_1dc,0x4afe94);
            piVar8 = (int *)FUN_004042e0();
            local_4._0_1_ = 0x10;
            if (*piVar8 == 0) {
              uStack_208 = 2.42827385549787e-317;
              FUN_004040a0();
              uVar14 = 0xffffffff;
              pcVar17 = &DAT_006b3f70;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar3 != '\0');
              uVar14 = ~uVar14 - 1;
              uStack_208 = (double)CONCAT44(1,uVar14);
              cVar3 = FUN_00401940();
              if (cVar3 != '\0') {
                puVar7 = (undefined4 *)&DAT_006b3f70;
                puVar18 = puStack_15c;
                for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *puVar18 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar18 = puVar18 + 1;
                }
                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined1 *)puVar18 = *(undefined1 *)puVar7;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                }
                *(undefined1 *)((int)puStack_15c + uVar14) = 0;
                uStack_158 = uVar14;
              }
              local_4._0_1_ = 0x11;
              uStack_208 = (double)CONCAT44(auStack_160,0xb6);
              pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
              (*pcVar6)();
              local_4._0_1_ = 0x10;
              uStack_208 = 2.12442413646029e-314;
              FUN_004040a0();
            }
            uStack_208 = (double)(ulonglong)*(uint *)(*piVar8 + 0x360);
            FUN_00503fc0();
            local_4 = CONCAT31(local_4._1_3_,9);
            if (puStack_1dc != (undefined1 *)0x0) {
              iVar5 = *(int *)(puStack_1dc + 0x14);
              *(int *)(puStack_1dc + 0x14) = iVar5 + -1;
              if (iVar5 + -1 == 0) {
                uStack_208 = 2.4283776092835e-317;
                FUN_005abfc0();
              }
              puStack_1dc = (undefined1 *)0x0;
            }
          }
        }
      }
      iStack_1ac = iStack_1ac + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,8);
    uStack_208 = (double)CONCAT44(0x4affbf,(undefined1 *)uStack_208);
    FUN_00554630();
    uStack_208 = (double)CONCAT44(iStack_184,0x4affc9);
    FUN_005fe5f0();
  }
  ExceptionList = pvStack_c;
  return;
}

