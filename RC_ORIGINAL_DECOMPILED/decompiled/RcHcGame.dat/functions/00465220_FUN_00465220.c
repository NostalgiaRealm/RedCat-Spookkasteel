/*
 * FUN_00465220 at 00465220
 * undefined FUN_00465220(void)
 * Address ranges: 00465220-004654ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00465220(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627720;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
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
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar8 = *piVar2;
    if (*(int *)(iVar8 + 0x5c) == 0) {
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
                                    ,0x144,local_1c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_30 = *(undefined4 *)(iVar8 + 0x5c);
    local_4 = 0xffffffff;
    if ((local_34 != 0) &&
       (iVar8 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0(0);
    }
    iVar8 = param_1 + 0xfc;
    local_34 = 10;
    do {
      if (*(int *)(param_1 + 0xf8) == 0) {
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
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar10 = local_28;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined1 *)((int)local_28 + uVar5) = 0;
          uStack_24 = uVar5;
        }
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        if (local_28 != (undefined4 *)0x0) {
          cVar1 = *(char *)((int)local_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)((int)local_28 + -1));
          }
          else {
            *(char *)((int)local_28 + -1) = cVar1 + -1;
          }
        }
        local_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
      }
      uVar4 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_30,iVar8,3,uVar4);
      iVar8 = iVar8 + 0x90;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  ExceptionList = local_c;
  return;
}

