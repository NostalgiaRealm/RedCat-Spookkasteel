/*
 * FUN_004fd210 at 004fd210
 * undefined FUN_004fd210(void)
 * Address ranges: 004fd210-004fd454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fd210(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
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
  puStack_8 = &LAB_00635658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_2c[0] = 0;
    uVar5 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_Node__0_0069c70c,s___AdamSource_DaviLinkedList_h_00699ef4,0xf2
                                  ,local_2c);
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
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  bVar10 = param_2 == *param_1;
  param_2._0_1_ = (undefined1)iVar2;
  if (bVar10) {
    if (iVar1 != 0) {
      local_2c[0] = (undefined1)param_2;
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
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_prev__0_0069d6b0,s___AdamSource_DaviLinkedList_h_00699ef4,
                                    0x106,local_2c);
      (*pcVar4)();
      if (local_28 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)local_28 + -1);
        if ((cVar3 != '\0') && (cVar3 != -1)) {
          *(char *)((int)local_28 + -1) = cVar3 + -1;
          *param_1 = iVar2;
          ExceptionList = pvStack_c;
          return;
        }
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
    }
    *param_1 = iVar2;
  }
  else if (iVar1 == 0) {
    auStack_1c[0] = (undefined1)param_2;
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
    local_4 = 2;
    pcVar4 = (code *)FUN_005a07f0(s_prev__0_0069d6a8,s___AdamSource_DaviLinkedList_h_00699ef4,0x10b,
                                  auStack_1c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return;
}

