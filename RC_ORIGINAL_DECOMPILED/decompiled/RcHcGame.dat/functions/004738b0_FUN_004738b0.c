/*
 * FUN_004738b0 at 004738b0
 * undefined FUN_004738b0(void)
 * Address ranges: 004738b0-00473ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004738b0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_30);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar8 = *piVar3;
  if (*(int *)(iVar8 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar1 = *(undefined4 *)(iVar8 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_30 != 0) &&
     (iVar8 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  if (*(char *)(param_1 + 0x149a8) != '\0') {
    if (*(int *)(param_1 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_28 = *puVar9;
          puVar9 = puVar9 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = 3;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar5 = FUN_0050aa70(0,1,0);
    FUN_005b6e90(uVar1,param_1 + 0x130,4,uVar5);
  }
  if (*(char *)(param_1 + 0x149c4) != '\0') {
    if (*(int *)(param_1 + 0x100) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_18 = *puVar9;
          puVar9 = puVar9 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar5 = FUN_0050aa70(0,1,0);
    FUN_005b6e90(uVar1,param_1 + 0x1c0,4,uVar5);
  }
  ExceptionList = pvStack_c;
  return;
}

