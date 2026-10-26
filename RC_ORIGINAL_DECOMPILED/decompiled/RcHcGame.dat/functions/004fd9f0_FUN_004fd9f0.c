/*
 * FUN_004fd9f0 at 004fd9f0
 * undefined FUN_004fd9f0(void)
 * Address ranges: 004fd9f0-004fdb81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fd9f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635720;
  pvStack_c = ExceptionList;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    ExceptionList = &pvStack_c;
    if (param_2 < iVar2) goto LAB_004fdac3;
  }
  local_2c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
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
    puVar4 = (undefined4 *)&DAT_006b3f70;
    puVar7 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar5) = 0;
    local_24 = uVar5;
  }
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviSortedList_h_00690798,0x6a,local_2c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004fdac3:
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_2;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x6b,local_1c);
    (*pcVar3)();
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 4) + param_2 * 4;
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar4 = (undefined4 *)(iVar2 + 4);
  if (puVar4 != puVar7) {
    iVar2 = iVar2 - (int)puVar4;
    do {
      *(undefined4 *)(iVar2 + (int)puVar4) = *puVar4;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar7);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  ExceptionList = pvStack_c;
  return;
}

