/*
 * FUN_004baba0 at 004baba0
 * undefined FUN_004baba0(void)
 * Address ranges: 004baba0-004bad8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004baba0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
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
  puStack_8 = &LAB_0062f458;
  local_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &local_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_0055b280();
  }
  if (*(char *)(iVar2 + 0x121) == '\0') {
    piVar3 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar3 == 0) {
      local_1c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *local_18 = *puVar7;
          puVar7 = puVar7 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x5c) == 0) {
      local_2c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = puStack_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar5) = 0;
        uStack_24 = uVar5;
      }
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_2c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004ba090(param_1 + 0xf8,*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(iVar2 + 0x5c),
                 (float)param_3 * 0.001);
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar2 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

