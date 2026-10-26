/*
 * FUN_004b2d00 at 004b2d00
 * undefined FUN_004b2d00(void)
 * Address ranges: 004b2d00-004b356d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_004b2d00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void *pvVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  char *pcVar22;
  undefined4 *puVar23;
  float10 fVar24;
  int iStack_a4;
  int iStack_94;
  undefined4 *puStack_8c;
  undefined4 *puStack_68;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e9f3;
  pvStack_c = ExceptionList;
  bVar5 = false;
  bVar4 = false;
  ExceptionList = &pvStack_c;
  if (param_5 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x54);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    iVar8 = FUN_004251b0(0,*(undefined4 *)(param_5 + 100),puVar7);
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_004b2dc7;
    }
  }
  FUN_004040a0();
  iVar8 = -1;
  pcVar22 = &DAT_006b3f70;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar6 = *pcVar22;
    pcVar22 = pcVar22 + 1;
  } while (cVar6 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  local_4 = 0;
  pcVar9 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Game_006961d8,
                                s_D__Work_RCHorror_AdamSource_Adam_00696ca4,0x3b);
  (*pcVar9)();
  local_4 = 0xffffffff;
  iVar8 = FUN_004040a0();
LAB_004b2dc7:
  if (param_5 != 0) {
    iVar20 = *(int *)(param_1 + 0x90);
    iStack_94 = *(int *)(param_1 + 0x8c);
    if (iStack_94 < iVar20) {
      iVar10 = FUN_0060a4a0();
      iVar20 = (iVar20 - iStack_94) + 1;
      iVar8 = iVar10 / iVar20;
      iStack_94 = iVar10 % iVar20 + iStack_94;
    }
    else if (iVar20 < iStack_94) {
      iVar10 = FUN_0060a4a0();
      iVar19 = (iStack_94 - iVar20) + 1;
      iVar8 = iVar10 / iVar19;
      iStack_94 = iVar10 % iVar19 + iVar20;
    }
    if (-1 < iStack_94 + -1) {
      do {
        if (*(char *)(param_1 + 0x31) != '\0') {
          if (param_2 == -1) {
            FUN_004040a0();
            iVar8 = -1;
            pcVar22 = &DAT_006b3f70;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              cVar6 = *pcVar22;
              pcVar22 = pcVar22 + 1;
            } while (cVar6 != '\0');
            FUN_004040f0(&DAT_006b3f70);
            local_4 = 1;
            pcVar9 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                          s___AdamSource_AdamClock_h_0068e22c,0x8a);
            (*pcVar9)();
            local_4 = 0xffffffff;
            FUN_004040a0();
          }
          uVar11 = FUN_005ae390(auStack_2c,s_Generate_rubble_after__f_seconds_00696c80,
                                (double)((float)param_2 * 0.001));
          local_4 = 2;
          FUN_005aff00(uVar11);
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        uVar12 = FUN_0060a4a0();
        uVar12 = uVar12 & 0x80000001;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
        }
        iVar8 = FUN_0060a4a0();
        uVar13 = FUN_0060a4a0();
        uVar13 = uVar13 & 0x80000001;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
        }
        iVar20 = FUN_0060a4a0();
        uVar14 = FUN_0060a4a0();
        uVar14 = uVar14 & 0x80000001;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
        }
        iVar10 = FUN_0060a4a0();
        FUN_005b2f20();
        FUN_0060a4a0();
        FUN_005b2fa0();
        fVar24 = (float10)FUN_005b2e40();
        if (fVar24 < (float10)0.0) {
          FUN_005b2fa0();
        }
        pvVar15 = operator_new(0x1a0);
        local_4 = 3;
        if (pvVar15 == (void *)0x0) {
          piVar16 = (int *)0x0;
        }
        else {
          FUN_004040a0();
          uVar17 = 0xffffffff;
          pcVar22 = (char *)&DAT_00696c74;
          do {
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            cVar6 = *pcVar22;
            pcVar22 = pcVar22 + 1;
          } while (cVar6 != '\0');
          uVar17 = ~uVar17 - 1;
          cVar6 = FUN_00401940(uVar17);
          if (cVar6 != '\0') {
            puVar21 = &DAT_00696c74;
            puVar23 = puStack_8c;
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *puVar23 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar23 = *(undefined1 *)puVar21;
              puVar21 = (undefined4 *)((int)puVar21 + 1);
              puVar23 = (undefined4 *)((int)puVar23 + 1);
            }
            FUN_00404190();
          }
          local_4 = CONCAT31(local_4._1_3_,4);
          uVar11 = FUN_005033a0(auStack_1c);
          bVar5 = true;
          bVar4 = true;
          local_4 = 5;
          piVar16 = (int *)FUN_005914f0(uVar11);
        }
        local_4 = 6;
        if (bVar4) {
          bVar4 = false;
          FUN_004040a0();
        }
        local_4 = 0xffffffff;
        if (bVar5) {
          bVar5 = false;
          FUN_004040a0();
        }
        FUN_0060a4a0();
        FUN_0060a4a0();
        FUN_0060a4a0();
        (**(code **)(*piVar16 + 0x4c))();
        if (*(char *)((int)piVar16 + 0x14b) != '\0') {
          FUN_004040a0();
          iVar19 = -1;
          pcVar22 = &DAT_006b3f70;
          do {
            if (iVar19 == 0) break;
            iVar19 = iVar19 + -1;
            cVar6 = *pcVar22;
            pcVar22 = pcVar22 + 1;
          } while (cVar6 != '\0');
          FUN_004040f0(&DAT_006b3f70);
          local_4 = 8;
          pcVar9 = (code *)FUN_005a07f0(s___m_FreezeVelocity_00691370,
                                        s_D__Work_RCHorror_AdamSource_Adam_00696c48,0x3e);
          (*pcVar9)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        piVar16[99] = (int)(float)(int)(((-(uint)(uVar12 != 0) & 0xfffffffe) + 1) *
                                       (iVar8 % 0xf + 2));
        piVar16[100] = (int)((float)(int)(((-(uint)(uVar13 != 0) & 0xfffffffe) + 1) *
                                         (iVar20 % 0xf + 2)) * 1.5);
        piVar16[0x65] =
             (int)(float)(int)(((-(uint)(uVar14 != 0) & 0xfffffffe) + 1) * (iVar10 % 0xf + 2));
        piVar16[0x66] = *(int *)(param_1 + 0x80);
        if (*(int *)(param_1 + 0xac) != 0) {
          piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x14);
          *piVar1 = *piVar1 + 1;
        }
        FUN_00437280();
        FUN_0060a4a0();
        iVar8 = __ftol();
        if ((iVar8 != -1) && (iVar8 < 0)) {
          FUN_00409810(&DAT_006b3f70);
          local_4 = 9;
          pcVar9 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                        s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
          (*pcVar9)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        piVar16[0x48] = iVar8;
        piVar16[0x49] = -1;
        piVar16[0x4a] = 0x3f800000;
        *(undefined1 *)(piVar16 + 0x4b) = 1;
        FUN_00502350();
        fVar2 = *(float *)(param_1 + 0x6c);
        fVar3 = *(float *)(param_1 + 0x68);
        iVar8 = FUN_0060a4a0();
        piVar16[0x4c] = (int)((fVar2 - fVar3) * (float)(iVar8 % 10000) * 0.0001 + fVar3);
        piVar16[0x5f] = *(int *)(param_1 + 0x70);
        piVar16[0x60] = *(int *)(param_1 + 0x74);
        piVar16[0x61] = *(int *)(param_1 + 0x78);
        piVar16[0x62] = *(int *)(param_1 + 0x7c);
        piVar16 = (int *)FUN_004042e0();
        local_4 = 10;
        if (*piVar16 == 0) {
          FUN_004040a0();
          uVar12 = 0xffffffff;
          pcVar22 = &DAT_006b3f70;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar6 = *pcVar22;
            pcVar22 = pcVar22 + 1;
          } while (cVar6 != '\0');
          uVar12 = ~uVar12 - 1;
          cVar6 = FUN_00401940(uVar12);
          if (cVar6 != '\0') {
            puVar21 = (undefined4 *)&DAT_006b3f70;
            puVar23 = puStack_68;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar23 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar23 = *(undefined1 *)puVar21;
              puVar21 = (undefined4 *)((int)puVar21 + 1);
              puVar23 = (undefined4 *)((int)puVar23 + 1);
            }
            FUN_00404190();
          }
          local_4._0_1_ = 0xb;
          pcVar9 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar9)();
          local_4 = CONCAT31(local_4._1_3_,10);
          FUN_004040a0();
        }
        FUN_004f41c0();
        local_4 = 0xffffffff;
        if (iStack_a4 != 0) {
          iVar8 = *(int *)(iStack_a4 + 0x14) + -1;
          *(int *)(iStack_a4 + 0x14) = iVar8;
          if (iVar8 == 0) {
            FUN_005abfc0();
          }
          iStack_a4 = 0;
        }
        iStack_94 = iStack_94 + -1;
        iVar8 = 0;
      } while (iStack_94 != 0);
    }
  }
  ExceptionList = pvStack_c;
  return iVar8;
}

