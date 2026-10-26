/*
 * FUN_004e2d60 at 004e2d60
 * undefined FUN_004e2d60(void)
 * Address ranges: 004e2d60-004e308f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004e2d60(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvVar3 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632930;
  local_c = ExceptionList;
  fVar1 = *(float *)(param_1 + 0x160);
  uVar7 = CONCAT22((short)((uint)ExceptionList >> 0x10),
                   (ushort)(fVar1 < param_2) << 8 | (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                   (ushort)(fVar1 == param_2) << 0xe);
  if ((fVar1 == param_2) == 0) {
    ExceptionList = &local_c;
    *(float *)(param_1 + 0x160) = param_2;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar4 = __ftol();
      if (iVar4 < 1) {
        if (*(int *)(param_1 + 0x140) != 0) {
          piVar5 = (int *)FUN_004042e0(&local_30);
          local_4 = 0;
          if (*piVar5 == 0) {
            local_2c[0] = param_2._0_1_;
            FUN_004040a0(0);
            uVar8 = 0xffffffff;
            pcVar9 = &DAT_006b3f70;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
            local_4._0_1_ = 1;
            pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,local_2c);
            (*pcVar6)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          iVar4 = *piVar5;
          if (*(int *)(iVar4 + 0x5c) == 0) {
            local_1c[0] = param_2._0_1_;
            FUN_004040a0(0);
            uVar8 = 0xffffffff;
            pcVar9 = &DAT_006b3f70;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
            local_4._0_1_ = 2;
            pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                          s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,local_1c);
            (*pcVar6)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          FUN_005b7d00(*(undefined4 *)(iVar4 + 0x5c),*(undefined4 *)(param_1 + 0x140));
          local_4 = 0xffffffff;
          if ((local_30 != 0) &&
             (iVar4 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar4, iVar4 == 0)
             ) {
            FUN_005abfc0(0);
          }
          *(undefined4 *)(param_1 + 0x140) = 0;
          DAT_006b94bc = DAT_006b94bc + -1;
          uVar7 = FUN_004e2a30();
          ExceptionList = local_c;
          return uVar7;
        }
      }
      else if (*(int *)(param_1 + 0x140) == 0) {
        piVar5 = (int *)FUN_004042e0(&param_2);
        local_4 = 3;
        if (*piVar5 == 0) {
          local_1c[0] = param_2._0_1_;
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
          local_4._0_1_ = 4;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_1c);
          (*pcVar6)();
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_004040a0(1);
        }
        iVar4 = *piVar5;
        if (*(int *)(iVar4 + 0x5c) == 0) {
          local_2c[0] = param_2._0_1_;
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
          local_4._0_1_ = 5;
          pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                        s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,local_2c);
          (*pcVar6)();
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_004040a0(1);
        }
        uVar7 = FUN_005b7cf0(*(undefined4 *)(iVar4 + 0x5c));
        *(undefined4 *)(param_1 + 0x140) = uVar7;
        local_4 = 0xffffffff;
        if (param_2 != 0.0) {
          iVar4 = *(int *)((int)param_2 + 0x14) + -1;
          *(int *)((int)param_2 + 0x14) = iVar4;
          if (iVar4 == 0) {
            FUN_005abfc0(0);
          }
          param_2 = 0.0;
        }
        if (*(int *)(param_1 + 0x140) != 0) {
          DAT_006b94bc = DAT_006b94bc + 1;
          FUN_004e2720();
        }
      }
      uVar7 = FUN_004e2a30();
      ExceptionList = local_c;
      return uVar7;
    }
  }
  ExceptionList = pvVar3;
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}

