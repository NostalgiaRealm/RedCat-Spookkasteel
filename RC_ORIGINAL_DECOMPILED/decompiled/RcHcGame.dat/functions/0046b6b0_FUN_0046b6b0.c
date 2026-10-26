/*
 * FUN_0046b6b0 at 0046b6b0
 * undefined FUN_0046b6b0(void)
 * Address ranges: 0046b6b0-0046b9f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046b6b0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627db8;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(char *)(param_1 + 0xde) != '\0')) {
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_004042e0(&local_34);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_2c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_30 = *(undefined4 *)(iVar7 + 0x5c);
    local_4 = 0xffffffff;
    if ((local_34 != 0) &&
       (iVar7 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
    if ((-1 < *(int *)(param_1 + 0x998)) && (iStack_38 = 0, -1 < *(int *)(param_1 + 0x998))) {
      local_34 = param_1 + 0x11c;
      do {
        if (*(int *)(param_1 + 0x9c4) == 0) {
          FUN_004040a0(0);
          uVar5 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5 - 1;
          cVar1 = FUN_00401940(uVar5,1);
          if (cVar1 != '\0') {
            puVar8 = (undefined4 *)&DAT_006b3f70;
            puVar10 = puStack_28;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            FUN_00404190(uVar5);
          }
          local_4 = 3;
          pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_2c);
          (*pcVar3)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        uVar4 = FUN_0050aa70(0,1,0);
        iVar7 = local_34;
        FUN_005b6e90(uStack_30,local_34,4,uVar4);
        iStack_38 = iStack_38 + 1;
        local_34 = iVar7 + 0xb0;
      } while (iStack_38 <= *(int *)(param_1 + 0x998));
    }
    if (*(char *)(param_1 + 0x9c2) != '\0') {
      if (*(int *)(param_1 + 0x9c8) == 0) {
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puStack_18 = *puVar8;
            puVar8 = puVar8 + 1;
            puStack_18 = puStack_18 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puStack_18 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puStack_18 = (undefined4 *)((int)puStack_18 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar4 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_30,param_1 + 0x65c,4,uVar4);
    }
  }
  ExceptionList = local_c;
  return;
}

