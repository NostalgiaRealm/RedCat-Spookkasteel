/*
 * FUN_005ab260 at 005ab260
 * undefined FUN_005ab260(void)
 * Address ranges: 005ab260-005ab443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ab260(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645b40;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cad74 != '\0') {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    cVar3 = FUN_00401940(uVar5,1);
    if (cVar3 != '\0') {
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
      *(undefined1 *)((int)local_28 + uVar5) = 0;
      local_24 = uVar5;
    }
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s___MODULE_DaviObjectBusy_006a8c88,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0x1c,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)local_28 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar3 + -1;
      }
    }
  }
  DAT_006cad74 = 1;
  FUN_005ab230();
  piVar2 = DAT_006cad68;
  iVar1 = param_1 + 4;
  if (iVar1 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar3 = FUN_00401940(uVar5,1);
    if (cVar3 != '\0') {
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
      *(undefined1 *)((int)puStack_18 + uVar5) = 0;
      uStack_14 = uVar5;
    }
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_Node__0_0069c70c,s___AdamSource_DaviLinkedList_h_00699ef4,0xda
                                  ,auStack_1c);
    (*pcVar4)();
    if (puStack_18 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)puStack_18 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_18 + -1));
      }
      else {
        *(char *)((int)puStack_18 + -1) = cVar3 + -1;
      }
    }
  }
  if (*piVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(int *)(param_1 + 8) = *piVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(*piVar2 + 8) = iVar1;
  }
  *piVar2 = iVar1;
  DAT_006cad6c = DAT_006cad6c + 1;
  DAT_006cad74 = 0;
  ExceptionList = pvStack_c;
  return;
}

