/*
 * FUN_004f3fd0 at 004f3fd0
 * undefined FUN_004f3fd0(void)
 * Address ranges: 004f3fd0-004f41aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004f3fd0(int param_1)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063485b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x420) == 0) {
    ExceptionList = &local_c;
    if (*(char *)(param_1 + 0x2c) != '\0') {
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      local_28 = (undefined4 *)0x0;
      local_24 = 0;
      local_20 = 0;
      ExceptionList = &local_c;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = local_28;
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
        FUN_00404190(uVar5);
      }
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s__m_Destroying_0069c694,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069c628,0xfc,local_2c);
      (*pcVar2)();
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
    }
    pvVar3 = operator_new(0x20);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0059c100();
    }
    uVar5 = 0xffffffff;
    local_4 = 0xffffffff;
    *(int *)(param_1 + 0x420) = iVar4;
    if (iVar4 == 0) {
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      puStack_18 = (undefined4 *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = puStack_18;
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
        FUN_00404190(uVar5);
      }
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_WayPointSystem__0_0069c680,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069c628,0xfe,auStack_1c);
      (*pcVar2)();
      if (puStack_18 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_18 + -1));
        }
        else {
          *(char *)((int)puStack_18 + -1) = cVar1 + -1;
        }
      }
    }
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x420);
}

