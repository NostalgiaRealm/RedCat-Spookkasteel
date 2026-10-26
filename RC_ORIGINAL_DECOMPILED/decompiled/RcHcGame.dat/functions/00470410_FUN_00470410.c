/*
 * FUN_00470410 at 00470410
 * undefined FUN_00470410(void)
 * Address ranges: 00470410-0047066a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00470410(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int local_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006282d0;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x364) != '\0') {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0xf8) == 0) {
      ExceptionList = &local_c;
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
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_004042e0(&local_40);
    local_4 = 1;
    if (*piVar4 == 0) {
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
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_38 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_38 = puStack_38 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_38 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_38 = (undefined4 *)((int)puStack_38 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_3c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    iVar9 = *piVar4;
    if (*(int *)(iVar9 + 0x5c) == 0) {
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
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_28 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    uVar1 = *(undefined4 *)(iVar9 + 0x5c);
    uVar5 = FUN_0050aa70(0,1,0);
    FUN_005b6e90(uVar1,param_1 + 0x114,4,uVar5);
    local_4 = 0xffffffff;
    if ((local_40 != 0) &&
       (iVar9 = *(int *)(local_40 + 0x14) + -1, *(int *)(local_40 + 0x14) = iVar9, iVar9 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

