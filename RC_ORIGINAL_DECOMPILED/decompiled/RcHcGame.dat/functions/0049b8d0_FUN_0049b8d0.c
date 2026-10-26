/*
 * FUN_0049b8d0 at 0049b8d0
 * undefined FUN_0049b8d0(void)
 * Address ranges: 0049b8d0-0049bb01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049b8d0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte bVar10;
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
  puStack_8 = &LAB_0062c8d8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) != 0) {
    bVar10 = *(char *)(param_1 + 0x208) != '\0';
    if (*(char *)(param_1 + 0x20a) != '\0') {
      bVar10 = bVar10 | 4;
    }
    if (*(char *)(param_1 + 0x20b) != '\0') {
      bVar10 = bVar10 | 8;
    }
    if (*(char *)(param_1 + 0x209) != '\0') {
      bVar10 = bVar10 | 2;
    }
    if (*(char *)(param_1 + 0x20c) != '\0') {
      bVar10 = bVar10 | 0x10;
    }
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
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
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar9 = puStack_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
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
    FUN_005b9b70(*(undefined4 *)(iVar7 + 0x5c),*(undefined4 *)(param_1 + 0x114),bVar10);
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar7 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

