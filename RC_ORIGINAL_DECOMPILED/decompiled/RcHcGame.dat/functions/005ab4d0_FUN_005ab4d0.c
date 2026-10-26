/*
 * FUN_005ab4d0 at 005ab4d0
 * undefined FUN_005ab4d0(void)
 * Address ranges: 005ab4d0-005ab758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ab4d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645b70;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650104;
  FUN_005ab230();
  if (DAT_006cad74 != '\0') {
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar6 = ~uVar6 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar4 = FUN_00401940(uVar6,1);
    if (cVar4 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar6) = 0;
      local_24 = uVar6;
    }
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s___MODULE_DaviObjectBusy_006a8c88,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0x9a,local_2c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar4 = *(char *)((int)local_28 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar4 + -1;
      }
    }
  }
  piVar3 = DAT_006cad68;
  DAT_006cad74 = 1;
  if (param_1 == (undefined4 *)0xfffffffc) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 1;
    pcVar5 = (code *)FUN_005a07f0(s_a_Node__0_0069c70c,s___AdamSource_DaviLinkedList_h_00699ef4,0xf2
                                  ,local_2c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar1 = param_1[3];
  iVar2 = param_1[2];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  if (param_1 + 1 == (undefined4 *)*piVar3) {
    if (iVar1 != 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 2;
      pcVar5 = (code *)FUN_005a07f0(s_prev__0_0069d6b0,s___AdamSource_DaviLinkedList_h_00699ef4,
                                    0x106,local_2c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    *piVar3 = iVar2;
  }
  else if (iVar1 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 3;
    pcVar5 = (code *)FUN_005a07f0(s_prev__0_0069d6a8,s___AdamSource_DaviLinkedList_h_00699ef4,0x10b,
                                  auStack_1c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  DAT_006cad74 = 0;
  DAT_006cad70 = DAT_006cad70 + 1;
  ExceptionList = pvStack_c;
  return;
}

