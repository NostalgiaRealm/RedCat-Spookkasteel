/*
 * FUN_004b4cc0 at 004b4cc0
 * undefined FUN_004b4cc0(void)
 * Address ranges: 004b4cc0-004b5258
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ebe4 slot 3 for .?AVCAdamShockwaveCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ebe4 slot 3 for
   .?AVCAdamShockwaveCell@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004b4cc0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_EBX;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  float fStack_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [4];
  undefined4 *apuStack_dc [3];
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [12];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_88 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062ec42;
  local_c = ExceptionList;
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    ExceptionList = &local_c;
    puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xa0) + 0x48))(&local_f4);
    fStack_ec = (float)*puVar4;
    fStack_e8 = (float)puVar4[1];
    fStack_e4 = (float)puVar4[2];
    pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xa0) + 0x48))(&uStack_b0);
    local_f4 = *pfVar5;
    fStack_f0 = pfVar5[1];
    fStack_ec = pfVar5[2];
    piVar6 = (int *)FUN_004042e0(&fStack_108);
    iStack_4 = 0;
    if (*piVar6 == 0) {
      apuStack_dc[0] = (undefined4 *)CONCAT31(apuStack_dc[0]._1_3_,uStack_10c._3_1_);
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      iStack_4._0_1_ = 1;
      pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    apuStack_dc);
      (*pcVar7)();
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar13 = *piVar6;
    if (*(int *)(iVar13 + 0x5c) == 0) {
      auStack_ac[0] = uStack_10c._3_1_;
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      iStack_4._0_1_ = 2;
      pcVar7 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_ac);
      (*pcVar7)();
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_b0 = *(undefined4 *)(iVar13 + 0x5c);
    iStack_4 = 0xffffffff;
    if (fStack_108 != 0.0) {
      FUN_004098d0();
    }
    iStack_b4 = 0;
    fStack_108 = SQRT(*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) *
                      *(float *)(param_1 + 0x68) +
                      (1.0 - *(float *)(param_1 + 0x68)) * *(float *)(param_1 + 0x74) *
                      *(float *)(param_1 + 0x74)) * 50.0;
    fStack_e4 = fStack_e4 + fStack_108;
    fStack_f0 = fStack_f0 - fStack_108;
    iStack_4 = 3;
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar6 = (int *)FUN_00421750(&fStack_f8);
    iVar13 = *piVar6;
    iVar12 = 0;
    if ((iVar13 != 0) && (iVar12 = iVar13, iStack_b4 = iVar13, iVar13 != 0)) {
      *(int *)(iVar13 + 0x14) = *(int *)(iVar13 + 0x14) + 1;
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,3);
    if ((fStack_f8 != 0.0) &&
       (iVar13 = *(int *)((int)fStack_f8 + 0x14) + -1, *(int *)((int)fStack_f8 + 0x14) = iVar13,
       iVar13 == 0)) {
      FUN_005abfc0(0);
    }
    if (iVar12 != 0) {
      puVar4 = &uStack_cc;
      puVar20 = auStack_ac;
      (**(code **)(**(int **)(param_1 + 0xa0) + 0x48))(puVar20,puVar4);
      FUN_005b2fe0(puVar20);
      FUN_005b2f20();
      FUN_005b2fa0(uStack_10c);
      fStack_100 = -fStack_d0;
      fStack_108 = fStack_c8;
      fStack_104 = 0.0;
      FUN_005b2f20();
      FUN_005b2fa0(uStack_10c);
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      FUN_005b2fa0(uStack_10c);
      fVar16 = *(float *)(param_1 + 0x68);
      puVar9 = auStack_88;
      iVar13 = 4;
      fVar17 = *(float *)(param_1 + 0x7c);
      fVar1 = *(float *)(param_1 + 0x78);
      fVar2 = *(float *)(param_1 + 0x68);
      do {
        puVar9[-1] = 0x437f0000;
        *puVar9 = 0x437f0000;
        puVar9[1] = 0x437f0000;
        puVar9[2] = fVar1 * fVar2 + (1.0 - fVar16) * fVar17;
        puVar9 = puVar9 + 9;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      fStack_a0 = fStack_ec - fStack_108;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_70 = 0x3f800000;
      fStack_9c = fStack_e8 - fStack_104;
      uStack_6c = 0;
      uStack_4c = 0x3f800000;
      uStack_48 = 0x3f800000;
      uStack_28 = 0;
      uStack_24 = 0x3f800000;
      fStack_98 = fStack_e4 - fStack_100;
      fStack_7c = fStack_ec + fStack_108;
      fStack_78 = fStack_104 + fStack_e8;
      fStack_74 = fStack_e4 + fStack_100;
      fStack_58 = fStack_f8 + fStack_108;
      fStack_54 = fStack_104 + local_f4;
      fStack_50 = fStack_f0 + fStack_100;
      fStack_34 = fStack_f8 - fStack_108;
      fStack_30 = local_f4 - fStack_104;
      fStack_2c = fStack_f0 - fStack_100;
      if (*(int *)(param_1 + 0x8c) == 0) {
        auStack_e0[0] = (undefined1)((uint)unaff_EBX >> 0x18);
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        uVar10 = ~uVar10 - 1;
        uStack_fc = uVar10;
        cVar3 = FUN_00401940(uVar10,1);
        if (cVar3 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar15 = apuStack_dc[0];
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar15 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          FUN_00404190(uVar10);
        }
        puStack_8._0_1_ = 6;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_e0);
        (*pcVar7)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
        FUN_004040a0(1);
      }
      uVar8 = FUN_0050aa70(0,1,0x3f800000);
      FUN_005b6e90(iStack_b4,&fStack_a0,4,uVar8);
      fVar16 = fStack_104;
      fVar17 = fStack_100;
      uVar8 = uStack_c4;
      uVar18 = uStack_c0;
      uVar19 = uStack_bc;
      puVar9 = (undefined4 *)
               (**(code **)(**(int **)(param_1 + 0xa0) + 0x48))
                         (auStack_e0,fStack_108,fStack_104,fStack_100,fStack_d0,uStack_cc,fStack_c8,
                          uStack_c4,uStack_c0,uStack_bc,uStack_10c);
      FUN_004b5260(*puVar9,puVar9[1],puVar9[2],fVar16,fVar17,fStack_d0,uStack_cc,fStack_c8,uVar8,
                   uVar18,uVar19,uStack_10c,puVar4);
      iStack_4 = 0xffffffff;
      iVar13 = *(int *)(iVar12 + 0x14) + -1;
      *(int *)(iVar12 + 0x14) = iVar13;
      if (iVar13 == 0) {
        FUN_005abfc0(0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

