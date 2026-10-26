/*
 * FUN_00402a80 at 00402a80
 * undefined FUN_00402a80(void)
 * Address ranges: 00402a80-00402c14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00402a80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fa98;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1c) == 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_00402c20(local_1c);
    puVar3 = *(undefined1 **)(iVar2 + 4);
    local_4 = 0;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_2c,s_Substate___NULL_for__s_0068d5b0,puVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005aff00(uVar4);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      local_38 = (undefined4 *)0x0;
      local_34 = 0;
      local_30 = 0;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_38;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_38 + uVar6) = 0;
        local_34 = uVar6;
      }
      local_4 = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_SubState____0_0068d574,
                                    s_D__Work_RCHorror_RCSource_RcEnem_0068d584,0x59,local_3c);
      (*pcVar5)();
      if (local_38 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)((int)local_38 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return *(undefined4 *)(param_1 + 0x1c);
        }
        FUN_005fe5f0((char *)((int)local_38 + -1));
      }
    }
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x1c);
}

