/*
 * FUN_00472ae0 at 00472ae0
 * undefined FUN_00472ae0(void)
 * Address ranges: 00472ae0-00472f0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00472ae0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 **ppuVar7;
  char *pcVar8;
  undefined1 **local_30;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00628540;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    local_30 = *(undefined1 ***)(param_1 + 0xfc);
    ExceptionList = &pvStack_c;
    if (local_30 != (undefined1 **)0x0) {
      local_20 = (undefined1 *)&local_30;
      ExceptionList = &pvStack_c;
      local_30[5] = local_30[5] + 1;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      FUN_00421430();
      cVar2 = FUN_004fbca0();
      if (cVar2 == '\0') {
        local_30 = *(undefined1 ***)(param_1 + 0xfc);
        if (local_30 != (undefined1 **)0x0) {
          local_30[5] = local_30[5] + 1;
        }
        local_4._0_1_ = 1;
        local_20 = (undefined1 *)&local_30;
        FUN_00421430();
        FUN_004fb310();
      }
    }
    if (param_3 != 0) {
      local_30 = *(undefined1 ***)(param_1 + 0x100);
      if (local_30 != (undefined1 **)0x0) {
        local_20 = (undefined1 *)&local_30;
        local_30[5] = local_30[5] + 1;
        local_4._0_1_ = 1;
        FUN_00421430();
        cVar2 = FUN_004fbca0();
        if (cVar2 == '\0') {
          local_30 = *(undefined1 ***)(param_1 + 0x100);
          if (local_30 != (undefined1 **)0x0) {
            local_30[5] = local_30[5] + 1;
          }
          local_4._0_1_ = 1;
          local_20 = (undefined1 *)&local_30;
          FUN_00421430();
          FUN_004fb310();
        }
      }
      if (param_3 != 0) {
        local_30 = *(undefined1 ***)(param_1 + 0x104);
        if (local_30 != (undefined1 **)0x0) {
          local_20 = (undefined1 *)&local_30;
          local_30[5] = local_30[5] + 1;
          local_4._0_1_ = 1;
          FUN_00421430();
          cVar2 = FUN_004fbca0();
          if (cVar2 == '\0') {
            local_30 = *(undefined1 ***)(param_1 + 0x104);
            if (local_30 != (undefined1 **)0x0) {
              local_30[5] = local_30[5] + 1;
            }
            local_4._0_1_ = 1;
            local_20 = (undefined1 *)&local_30;
            FUN_00421430();
            FUN_004fb310();
          }
        }
        if (param_3 != 0) {
          local_30 = *(undefined1 ***)(param_1 + 0x108);
          if (local_30 != (undefined1 **)0x0) {
            local_20 = (undefined1 *)&local_30;
            local_30[5] = local_30[5] + 1;
            local_4._0_1_ = 1;
            FUN_00421430();
            cVar2 = FUN_004fbca0();
            if (cVar2 == '\0') {
              local_30 = *(undefined1 ***)(param_1 + 0x108);
              if (local_30 != (undefined1 **)0x0) {
                local_30[5] = local_30[5] + 1;
              }
              local_4._0_1_ = 1;
              local_20 = (undefined1 *)&local_30;
              FUN_00421430();
              FUN_004fb310();
            }
          }
          if (param_3 != 0) {
            ppuVar7 = (undefined1 **)0x0;
            do {
              local_30 = ppuVar7;
              FUN_00475fe0();
              ppuVar7 = (undefined1 **)((int)ppuVar7 + 1);
            } while ((int)ppuVar7 < 6);
            local_30 = (undefined1 **)0x472cd0;
            FUN_00475030();
            iVar6 = *(int *)(param_1 + 0x1484c);
            if ((iVar6 != -1) && (iVar6 < 0)) {
              local_30 = (undefined1 **)0x0;
              local_1c[0] = (undefined1)param_3;
              FUN_004040a0();
              uVar5 = 0xffffffff;
              pcVar8 = &DAT_006b3f70;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              local_30 = (undefined1 **)(~uVar5 - 1);
              FUN_004040f0(&DAT_006b3f70);
              local_30 = (undefined1 **)local_1c;
              local_4._0_1_ = 10;
              pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                            s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
              (*pcVar3)();
              local_4._0_1_ = 1;
              local_30 = (undefined1 **)0x1;
              FUN_004040a0();
            }
            *(int *)(param_1 + 0x1481c) = iVar6;
            *(undefined4 *)(param_1 + 84000) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x14824) = 0x3f800000;
            *(undefined1 *)(param_1 + 0x14828) = 1;
            iVar6 = *(int *)(param_1 + 0x14850);
            if ((iVar6 != -1) && (iVar6 < 0)) {
              local_30 = (undefined1 **)0x0;
              local_1c[0] = (undefined1)param_3;
              FUN_004040a0();
              uVar5 = 0xffffffff;
              pcVar8 = &DAT_006b3f70;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              local_30 = (undefined1 **)(~uVar5 - 1);
              FUN_004040f0(&DAT_006b3f70);
              local_30 = (undefined1 **)local_1c;
              local_4._0_1_ = 0xb;
              pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                            s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
              (*pcVar3)();
              local_4._0_1_ = 1;
              local_30 = (undefined1 **)0x1;
              FUN_004040a0();
            }
            *(int *)(param_1 + 0x1482c) = iVar6;
            *(undefined4 *)(param_1 + 0x14830) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x14834) = 0x3f800000;
            *(undefined1 *)(param_1 + 0x14838) = 1;
            if ((param_3 != 0) && (*(int *)(param_1 + 0x374) != 0)) {
              local_30 = &local_20;
              piVar4 = (int *)FUN_004042e0();
              local_4._0_1_ = 0xc;
              uVar1 = (undefined1)local_4;
              local_4._0_1_ = 0xc;
              if (*piVar4 == 0) {
                local_30 = (undefined1 **)0x0;
                local_1c[0] = (undefined1)param_3;
                FUN_004040a0();
                uVar5 = 0xffffffff;
                pcVar8 = &DAT_006b3f70;
                do {
                  if (uVar5 == 0) break;
                  uVar5 = uVar5 - 1;
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                local_30 = (undefined1 **)(~uVar5 - 1);
                FUN_004040f0(&DAT_006b3f70);
                local_30 = (undefined1 **)local_1c;
                local_4._0_1_ = 0xd;
                pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                              0xb6);
                (*pcVar3)();
                local_4._0_1_ = 0xc;
                local_30 = (undefined1 **)0x1;
                FUN_004040a0();
                uVar1 = (undefined1)local_4;
              }
              local_4._0_1_ = uVar1;
              local_30 = *(undefined1 ***)(param_1 + 0x374);
              FUN_004f41c0();
              local_4._0_1_ = 1;
              if (local_20 != (undefined1 *)0x0) {
                local_30 = (undefined1 **)0x472eab;
                FUN_004098d0();
                local_20 = (undefined1 *)0x0;
              }
              local_30 = (undefined1 **)0x1;
              FUN_00502350();
            }
          }
        }
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    local_30 = (undefined1 **)0x472ed2;
    FUN_004098d0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar6 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar6, iVar6 == 0)) {
    local_30 = (undefined1 **)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

