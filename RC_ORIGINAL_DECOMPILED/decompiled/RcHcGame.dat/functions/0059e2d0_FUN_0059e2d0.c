/*
 * FUN_0059e2d0 at 0059e2d0
 * undefined FUN_0059e2d0(void)
 * Address ranges: 0059e2d0-0059eb00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0059e2d0(undefined1 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int iVar4;
  int *extraout_ECX_00;
  uint uVar5;
  int *piVar6;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar7;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  int iVar11;
  int iVar12;
  int *piStack_c4;
  int *piStack_c0;
  int local_a4;
  undefined1 *local_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  uint local_94;
  int *piStack_90;
  int local_8c;
  char *pcStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int local_78;
  char *pcStack_74;
  int iStack_68;
  int *piStack_64;
  int *piStack_60;
  int iStack_5c;
  char *pcStack_58;
  int aiStack_4c [4];
  int aiStack_3c [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644b1f;
  pvStack_c = ExceptionList;
  local_94 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_a0 = param_1;
  FUN_0059b1c0();
  local_4._0_1_ = 1;
  piStack_c0 = extraout_ECX;
  if (param_2 == 0) {
    piStack_c0 = (int *)0x59e330;
    FUN_004040a0();
    iVar4 = -1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    piStack_c0 = (int *)&DAT_006b3f70;
    piStack_c4 = (int *)0x59e34e;
    FUN_004040f0();
    local_4._0_1_ = 2;
    piStack_c0 = (int *)0xb6;
    piStack_c4 = (int *)s___AdamSource_DaviRC_h_0068d638;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    piStack_c0 = (int *)0x59e387;
    FUN_004040a0();
    piStack_c0 = extraout_ECX_00;
  }
  if (*(int *)(param_2 + 0x5c) == 0) {
    piStack_c0 = (int *)0x59e3a9;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    piVar6 = (int *)(~uVar5 - 1);
    piStack_c4 = (int *)0x59e3c6;
    piStack_c0 = piVar6;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      pcVar8 = &DAT_006b3f70;
      pcVar9 = pcStack_88;
      for (uVar5 = (uint)piVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = (uint)piVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      piStack_c0 = (int *)0x59e3ed;
      FUN_00404190();
    }
    local_4._0_1_ = 3;
    piStack_c0 = (int *)0x296;
    piStack_c4 = (int *)s_D__Work_RCHorror_AdamSource_Adam_006a72cc;
    pcVar2 = (code *)FUN_005a07f0(s_a_SubLevel_>TestGenesisObject___006a7630);
    (*pcVar2)();
    local_4._0_1_ = 1;
    piStack_c0 = (int *)0x59e426;
    FUN_004040a0();
    piStack_c0 = extraout_ECX_01;
  }
  puStack_98 = (undefined1 *)&piStack_c0;
  piStack_c4 = &param_2;
  FUN_00449760();
  piStack_c4 = (int *)0x59e444;
  piStack_64 = (int *)FUN_0041e8e0();
  if (piStack_64 == (int *)0x0) {
    piStack_c0 = (int *)0x59e467;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = s_no_GrobberPathPoints_to_create_w_006a75fc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    piVar6 = (int *)(~uVar5 - 1);
    piStack_c4 = (int *)0x59e484;
    piStack_c0 = piVar6;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      pcVar8 = s_no_GrobberPathPoints_to_create_w_006a75fc;
      for (uVar5 = (uint)piVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcStack_88 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcStack_88 = pcStack_88 + 4;
      }
      for (uVar5 = (uint)piVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcStack_88 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcStack_88 = pcStack_88 + 1;
      }
      piStack_c0 = (int *)0x59e4ab;
      FUN_00404190();
    }
    local_4._0_1_ = 4;
    piStack_c0 = (int *)0x29d;
    piStack_c4 = (int *)s_D__Work_RCHorror_AdamSource_Adam_006a72cc;
    FUN_005aff20();
    local_4._0_1_ = 1;
    piStack_c0 = (int *)0x59e4dd;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005630e0();
    local_4 = 0xffffffff;
    if (param_2 != 0) {
      iVar4 = *(int *)(param_2 + 0x14) + -1;
      *(int *)(param_2 + 0x14) = iVar4;
      if (iVar4 == 0) {
        piStack_c0 = (int *)0x59e51c;
        FUN_005abfc0();
      }
    }
    uVar3 = 0;
  }
  else {
    iStack_9c = 0;
    piVar6 = extraout_ECX_02;
    if (0 < (int)piStack_64) {
      do {
        piStack_c0 = (int *)&DAT_006ba5c8;
        puStack_98 = (undefined1 *)&piStack_c4;
        piStack_c4 = piVar6;
        FUN_00449760(&param_2);
        piVar6 = (int *)FUN_005a0490();
        iVar4 = FUN_0059aed0();
        if (*(float *)(iVar4 + 0x2e8) == 0.0) {
          piStack_c0 = (int *)(iVar4 + 0x29c);
          piStack_c4 = (int *)0x59e580;
          fVar10 = (float10)FUN_005ad390();
          *(float *)(iVar4 + 0x2e8) = (float)fVar10;
          piStack_60 = (int *)(float)fVar10;
        }
        else {
          piStack_60 = *(int **)(iVar4 + 0x2e8);
        }
        piStack_c0 = piStack_60;
        piStack_c4 = piVar6;
        FUN_0059c810(&piStack_90);
        local_4._0_1_ = 5;
        cVar1 = FUN_0059b1f0();
        if (cVar1 != '\0') {
          piStack_c0 = (int *)0x59e5cc;
          FUN_0059df90();
          FUN_00597fb0();
          fVar10 = (float10)FUN_005b30a0();
          if ((float10)1.0 <= fVar10) {
            piStack_c0 = piStack_90;
            piStack_c4 = (int *)0x59e6fd;
            FUN_0059df90();
            piStack_c0 = (int *)0x59e704;
            puStack_98 = (undefined1 *)FUN_0059a1b0();
            local_4 = CONCAT31(local_4._1_3_,9);
            piStack_c0 = (int *)0x59e723;
            FUN_004040a0();
            uVar5 = 0xffffffff;
            pcVar8 = s_Found_a_way_point_that_is_too_cl_006a7594;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            piVar7 = (int *)(~uVar5 - 1);
            piStack_c4 = (int *)0x59e740;
            piStack_c0 = piVar7;
            cVar1 = FUN_00401940();
            if (cVar1 != '\0') {
              pcVar8 = s_Found_a_way_point_that_is_too_cl_006a7594;
              pcVar9 = pcStack_74;
              for (uVar5 = (uint)piVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar5 = (uint)piVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              }
              piStack_c0 = (int *)0x59e767;
              FUN_00404190();
            }
            piStack_c0 = &local_78;
            piStack_c4 = aiStack_3c;
            local_4._0_1_ = 10;
            uVar3 = FUN_0044e370();
            local_4._0_1_ = 0xb;
            FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x2b6,uVar3);
            local_4._0_1_ = 10;
            piStack_c0 = (int *)0x59e7b4;
            FUN_004040a0();
            local_4._0_1_ = 9;
            piStack_c0 = (int *)0x59e7c7;
            FUN_004040a0();
            local_4._0_1_ = 5;
            piStack_c0 = (int *)0x59e7dd;
            FUN_004040a0();
            param_1 = local_a0;
          }
          else {
            piStack_c0 = piStack_90;
            piStack_c4 = (int *)0x59e601;
            FUN_0059df90();
            piStack_c0 = (int *)0x59e608;
            puStack_98 = (undefined1 *)FUN_0059a1b0();
            local_4 = CONCAT31(local_4._1_3_,6);
            piStack_c0 = (int *)0x59e627;
            FUN_004040a0();
            uVar5 = 0xffffffff;
            pcVar8 = s_Found_two_way_points_at_the_same_006a75d0;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            piVar7 = (int *)(~uVar5 - 1);
            piStack_c4 = (int *)0x59e648;
            piStack_c0 = piVar7;
            piStack_7c = piVar7;
            cVar1 = FUN_00401940();
            if (cVar1 != '\0') {
              pcVar8 = s_Found_two_way_points_at_the_same_006a75d0;
              pcVar9 = pcStack_58;
              for (uVar5 = (uint)piVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar5 = (uint)piVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              }
              piStack_c0 = (int *)0x59e671;
              FUN_00404190();
            }
            piStack_c0 = &iStack_5c;
            piStack_c4 = aiStack_4c;
            local_4._0_1_ = 7;
            uVar3 = FUN_0044e370();
            local_4._0_1_ = 8;
            FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x2b1,uVar3);
            local_4._0_1_ = 7;
            piStack_c0 = (int *)0x59e6bb;
            FUN_004040a0();
            local_4._0_1_ = 6;
            piStack_c0 = (int *)0x59e6ce;
            FUN_004040a0();
            local_4._0_1_ = 5;
            piStack_c0 = (int *)0x59e6e4;
            FUN_004040a0();
          }
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
        if (iVar4 == 0) {
          iStack_68 = 0;
        }
        else {
          iStack_68 = *(int *)(*(int *)(param_1 + 0x18) + 8) - iVar4 >> 2;
        }
        piStack_c0 = (int *)0x59e807;
        puStack_98 = operator_new(0xac);
        local_4._0_1_ = 0xc;
        if (puStack_98 != (undefined1 *)0x0) {
          piStack_c0 = (int *)piVar6[3];
          pcStack_88 = (char *)0x0;
          uStack_84 = 0;
          uStack_80 = 0;
          iVar4 = -1;
          piVar7 = piStack_c0;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            iVar12 = *piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
          } while ((char)iVar12 != '\0');
          piStack_c4 = (int *)0x59e850;
          FUN_004040f0();
          local_94 = local_94 | 1;
          piStack_7c = (int *)&piStack_c0;
          piStack_c4 = &iStack_68;
          local_4 = CONCAT31(local_4._1_3_,0xd);
          FUN_0059b1d0();
          iVar4 = piVar6[2];
          iVar12 = piVar6[1];
          piStack_c4 = &local_8c;
          local_4 = 0xd;
          iVar11 = *piVar6;
          FUN_00421430(iVar11,iVar12,iVar4);
          uVar3 = FUN_004fcb90();
          FUN_00597c00(uVar3,iVar11,iVar12,iVar4);
        }
        local_4 = 5;
        if ((local_94 & 1) != 0) {
          local_94 = local_94 & 0xfffffffe;
          if (pcStack_88 != (char *)0x0) {
            cVar1 = pcStack_88[-1];
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              piStack_c0 = (int *)0x59e8ee;
              FUN_005fe5f0();
            }
            else {
              pcStack_88[-1] = cVar1 + -1;
            }
          }
          pcStack_88 = (char *)0x0;
          uStack_84 = 0;
          uStack_80 = 0;
        }
        piStack_c0 = (int *)0x59e90a;
        FUN_00599540();
        piStack_c0 = (int *)0x59e915;
        FUN_0059a6f0();
        piStack_c0 = (int *)0x59e91d;
        FUN_0059c350();
        local_4._0_1_ = 1;
        FUN_005630e0();
        iStack_9c = iStack_9c + 1;
        piVar6 = piStack_64;
      } while (iStack_9c < (int)piStack_64);
    }
    piVar7 = piStack_64;
    iStack_9c = 0;
    if (0 < (int)piStack_64) {
      do {
        piStack_c0 = (int *)&DAT_006ba5c8;
        local_a0 = (undefined1 *)&piStack_c4;
        piStack_c4 = piVar6;
        FUN_00449760(&param_2);
        iVar4 = FUN_005a0490();
        local_a0 = &stack0xffffff44;
        piStack_c0 = &iStack_9c;
        piStack_c4 = (int *)0x59e987;
        FUN_0059b1d0();
        piStack_c0 = (int *)0x59e98e;
        FUN_0059df90();
        piVar6 = extraout_ECX_03;
        if (*(int **)(iVar4 + 0x18) != (int *)0x0) {
          piStack_c4 = &local_a4;
          local_a0 = (undefined1 *)&piStack_c4;
          piStack_c0 = *(int **)(iVar4 + 0x18);
          FUN_00449760(&param_2);
          FUN_0059e1b0();
          piStack_c0 = (int *)0x59e9c4;
          FUN_00598c80();
          piStack_c0 = (int *)0x59e9d1;
          FUN_0059b1d0();
          piVar6 = extraout_ECX_04;
        }
        if (*(int **)(iVar4 + 0x1c) != (int *)0x0) {
          local_a0 = (undefined1 *)&piStack_c4;
          piStack_c4 = piVar6;
          piStack_c0 = *(int **)(iVar4 + 0x1c);
          FUN_00449760(&param_2);
          FUN_0059e1b0();
          piStack_c0 = (int *)0x59ea05;
          FUN_00598c80();
          piStack_c0 = (int *)0x59ea12;
          FUN_0059b1d0();
          piVar6 = extraout_ECX_05;
        }
        if (*(int **)(iVar4 + 0x20) != (int *)0x0) {
          piStack_c4 = &local_a4;
          local_a0 = (undefined1 *)&piStack_c4;
          piStack_c0 = *(int **)(iVar4 + 0x20);
          FUN_00449760(&param_2);
          FUN_0059e1b0();
          piStack_c0 = (int *)0x59ea46;
          FUN_00598c80();
          piStack_c0 = (int *)0x59ea53;
          FUN_0059b1d0();
          piVar6 = extraout_ECX_06;
        }
        if (*(int **)(iVar4 + 0x24) != (int *)0x0) {
          local_a0 = (undefined1 *)&piStack_c4;
          piStack_c4 = piVar6;
          piStack_c0 = *(int **)(iVar4 + 0x24);
          FUN_00449760(&param_2);
          FUN_0059e1b0();
          piStack_c0 = (int *)0x59ea87;
          FUN_00598c80();
          piStack_c0 = (int *)0x59ea94;
          FUN_0059b1d0();
          piVar6 = extraout_ECX_07;
        }
        iStack_9c = iStack_9c + 1;
      } while (iStack_9c < (int)piVar7);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005630e0();
    local_4 = 0xffffffff;
    if (param_2 != 0) {
      iVar4 = *(int *)(param_2 + 0x14) + -1;
      *(int *)(param_2 + 0x14) = iVar4;
      if (iVar4 == 0) {
        piStack_c0 = (int *)0x59eae4;
        FUN_005abfc0();
      }
    }
    uVar3 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

