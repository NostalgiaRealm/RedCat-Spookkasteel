/*
 * FUN_00566ce0 at 00566ce0
 * undefined FUN_00566ce0(void)
 * Address ranges: 00566ce0-00566fcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00566ce0(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char cStack_36;
  undefined1 uStack_35;
  int iStack_34;
  void *pvStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064013b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_2c[0] = (undefined1)param_2;
    uVar7 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_World____0_006a3de0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a3df0,0x53,local_2c);
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
  pvStack_30 = operator_new(0x14);
  local_4 = 1;
  if (pvStack_30 == (void *)0x0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = FUN_00566b00(param_2);
  }
  local_4 = 0xffffffff;
  if (iStack_34 == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar7) = 0;
      local_24 = uVar7;
    }
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006a3df0,0x57
                                  ,local_2c);
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
  uVar3 = FUN_005a1d60();
  if (*(char *)(param_1 + 0x18) != '\0') {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 3;
    pcVar2 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar4 = FUN_005674e0(uVar3,&cStack_36);
  if (cStack_36 != '\0') {
    FUN_00409810(&DAT_006b3f70,&uStack_35);
    local_4 = 4;
    pcVar2 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                  auStack_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_004f15f0(*(int *)(param_1 + 4) + iVar4 * 4,&iStack_34);
  iVar4 = FUN_005a1d60();
  puVar5 = *(undefined1 **)(iVar4 + 4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  iVar4 = FUN_005b9ce0(*(undefined4 *)(param_1 + 0x1c),puVar5);
  if (iVar4 != 0) {
    for (iVar6 = FUN_005cc780(iVar4,0); iVar6 != 0; iVar6 = FUN_005cc780(iVar4,iVar6)) {
      uVar3 = FUN_005cc290(iVar6);
      FUN_00566b80(uVar3);
    }
  }
  ExceptionList = pvStack_c;
  return iStack_34;
}

