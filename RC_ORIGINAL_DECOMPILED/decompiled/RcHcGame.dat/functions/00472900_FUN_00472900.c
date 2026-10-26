/*
 * FUN_00472900 at 00472900
 * undefined FUN_00472900(void)
 * Address ranges: 00472900-00472adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00472900(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006284b8;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(char *)(param_1 + 0xde) != '\0')) {
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_18 = *puVar6;
          puVar6 = puVar6 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (*(int *)(*piVar2 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar8 = puStack_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar4) = 0;
        uStack_24 = uVar4;
      }
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_2c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (local_30 != 0) {
      iVar9 = *(int *)(local_30 + 0x14) + -1;
      *(int *)(local_30 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      local_30 = 0;
    }
    FUN_004738b0();
    FUN_00473bb0();
    FUN_004742c0();
  }
  ExceptionList = local_c;
  return;
}

