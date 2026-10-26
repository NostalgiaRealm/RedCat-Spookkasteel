/*
 * FUN_004fd6a0 at 004fd6a0
 * undefined FUN_004fd6a0(void)
 * Address ranges: 004fd6a0-004fd88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fd6a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006356e0;
  pvStack_c = ExceptionList;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    ExceptionList = &pvStack_c;
    if (param_2 < iVar4) goto LAB_004fd773;
  }
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar3 = FUN_00401940(uVar7,1);
  if (cVar3 != '\0') {
    puVar9 = (undefined4 *)&DAT_006b3f70;
    puVar11 = local_18;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar7) = 0;
    local_14 = uVar7;
  }
  local_4 = 0;
  pcVar5 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviSortedList_h_00690798,0x6a,local_1c);
  (*pcVar5)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004fd773:
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    local_2c[0] = (undefined1)param_2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 1;
    pcVar5 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x6b,local_2c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar3 = *(char *)(local_28 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar3 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  piVar10 = *(int **)(param_1 + 8);
  piVar1 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  while (piVar2 = piVar1, piVar1 = piVar2 + 1, piVar1 != piVar10) {
    iVar4 = *piVar2;
    if (iVar4 != *piVar1) {
      if ((iVar4 != 0) &&
         (iVar6 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      *piVar2 = *piVar1;
      FUN_005844b0();
    }
  }
  piVar1 = *(int **)(param_1 + 8);
  for (piVar10 = piVar1 + -1; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    if (*piVar10 != 0) {
      FUN_004098d0();
      *piVar10 = 0;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  ExceptionList = pvStack_c;
  return;
}

