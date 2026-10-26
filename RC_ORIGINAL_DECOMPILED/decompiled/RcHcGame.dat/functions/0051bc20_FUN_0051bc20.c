/*
 * FUN_0051bc20 at 0051bc20
 * undefined FUN_0051bc20(void)
 * Address ranges: 0051bc20-0051c156
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051bc20(int *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 unaff_EBX;
  int *piVar11;
  char *pcVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_90;
  int local_88;
  undefined1 local_84;
  int iStack_80;
  undefined1 uStack_78;
  undefined1 uStack_68;
  undefined1 uStack_58;
  undefined1 uStack_48;
  undefined1 auStack_28 [20];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00638938;
  pvStack_14 = ExceptionList;
  piVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_14;
  if (DAT_006c8de0 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    piVar2 = (int *)FUN_0055b280();
  }
  local_88 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    local_88 = FUN_004bc480();
  }
  local_88 = local_88 + 0x88;
  local_84 = uStack_a0._2_1_;
  FUN_004040a0();
  local_c = 0;
  uStack_a0 = 0x10000;
  if (param_2 != '\0') {
    DVar3 = timeGetTime();
    param_1[0x18] = DVar3;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (**(code **)(*param_1 + 0x2c))();
    (**(code **)(*param_1 + 0x24))();
  }
  (**(code **)(*param_1 + 0x30))();
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_004bef70();
  piVar4 = (int *)FUN_0051b2f0();
  piVar10 = (int *)param_1[0x1b];
  param_1[0x1a] = (int)piVar4;
  piVar11 = param_1;
  if (piVar10 != piVar4) {
    do {
      if ((uStack_a0._2_1_ != '\0') || ((int)piVar10 % 10 == 0)) {
        uStack_a0 = 0;
        FUN_005630f0();
        cVar1 = FUN_00592e60();
        if (cVar1 != '\0') {
          FUN_00592f50();
        }
        (**(code **)(*piVar11 + 0x34))();
        (**(code **)(*piVar11 + 0x28))();
        iVar5 = FUN_00515ff0();
        iVar6 = *(int *)(iVar5 + 100);
        if (iVar6 == -0x80000000) {
          iVar6 = FUN_0060af10();
          *(int *)(iVar5 + 100) = iVar6;
        }
        if (iVar6 != 0) {
          uStack_a0 = 0;
          while( true ) {
            if (DAT_006b993c == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = DAT_006b9940 - DAT_006b993c >> 4;
            }
            piVar10 = param_1;
            if (iVar6 <= uStack_a0) break;
            uVar14 = (undefined1)((uint)unaff_EBX >> 0x18);
            if (uStack_a0 == 0) {
              iVar6 = piVar11[0x18];
              iStack_90 = piVar2[0x19];
              if ((iStack_90 == -1) || (iVar6 == -1)) {
                iStack_90 = 0;
              }
              else {
                uVar13 = (undefined1)((uint)unaff_EBX >> 0x10);
                if (iStack_90 < iVar6) {
                  uStack_48 = uVar13;
                  FUN_004040a0();
                  iVar5 = -1;
                  pcVar12 = &DAT_006b3f70;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    cVar1 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar1 != '\0');
                  FUN_004040f0(&DAT_006b3f70);
                  puStack_10._0_1_ = 1;
                  pcVar7 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                                s___AdamSource_AdamClock_h_0068e22c,0x7d);
                  (*pcVar7)();
                  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                  FUN_004040a0();
                }
                iStack_90 = iStack_90 - iVar6;
                if (iStack_90 == -1) {
                  uStack_58 = uVar13;
                  FUN_004040a0();
                  iVar6 = -1;
                  pcVar12 = &DAT_006b3f70;
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    cVar1 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar1 != '\0');
                  FUN_004040f0(&DAT_006b3f70);
                  puStack_10._0_1_ = 2;
                  pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                                s___AdamSource_AdamClock_h_0068e22c,0x8a);
                  (*pcVar7)();
                  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                  FUN_004040a0();
                }
              }
              iVar6 = FUN_00442d80();
              if (iVar6 < 1) {
                FUN_00409810(&DAT_006b3f70);
                puStack_10._0_1_ = 3;
                pcVar7 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<GetStackSi_0069f544,
                                              s_D__Work_RCHorror_AdamSource_Adam_0069f56c,0x45);
                (*pcVar7)();
                puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                FUN_004040a0();
              }
              puVar8 = *(undefined1 **)(DAT_006b993c + 4);
              if (puVar8 == (undefined1 *)0x0) {
                puVar8 = &DAT_0064a3b4;
              }
              uVar9 = FUN_005ae390(auStack_28,s__s____2f_seconds_0069f530,puVar8,
                                   (double)((float)iStack_90 * 0.001));
              puStack_10._0_1_ = 4;
              FUN_0040cc00(uVar9,0);
              puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
              FUN_004040a0();
              piVar11 = piVar2;
            }
            else {
              if ((uStack_a0 < 0) || (iVar6 = FUN_00442d80(), iVar6 <= uStack_a0)) {
                uStack_78 = uVar14;
                FUN_004040a0();
                iVar6 = -1;
                pcVar12 = &DAT_006b3f70;
                do {
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                FUN_004040f0(&DAT_006b3f70);
                puStack_10._0_1_ = 5;
                pcVar7 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<GetStackSi_0069f544,
                                              s_D__Work_RCHorror_AdamSource_Adam_0069f56c,0x45);
                (*pcVar7)();
                puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                FUN_004040a0();
                piVar11 = piVar2;
              }
              FUN_0040cc00(uStack_a0 * 0x10 + DAT_006b993c,0);
            }
            if (*(char *)(iStack_9c + 0x125) == '\0') {
              uStack_68 = uVar14;
              FUN_004040a0();
              iVar6 = -1;
              pcVar12 = &DAT_006b3f70;
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0(&DAT_006b3f70);
              puStack_10._0_1_ = 6;
              pcVar7 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                            s___AdamSource_AdamEngine_h_0068eb58,0x12d);
              (*pcVar7)();
              puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
              FUN_004040a0();
              piVar11 = piVar2;
            }
            FUN_005600c0(0,*(int *)(iStack_9c + 0x44) + (uStack_a0 * 5 + 5) * -4,&local_88);
            uStack_a0 = uStack_a0 + 1;
          }
        }
        FUN_0052b470(&stack0xffffff4c);
        (**(code **)(*piVar11 + 0x10))();
        FUN_005637b0();
      }
      piVar10 = (int *)(((int)piVar10 + 1) % 100);
    } while (piVar10 != (int *)piVar11[0x1a]);
  }
  piVar11[0x1b] = piVar11[0x1a];
  if (iStack_80 != 0) {
    cVar1 = *(char *)(iStack_80 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_80 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_005fe5f0();
  }
  ExceptionList = pvStack_14;
  return;
}

