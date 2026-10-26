/*
 * FUN_0042d3a0 at 0042d3a0
 * undefined FUN_0042d3a0(void)
 * Address ranges: 0042d3a0-0042d4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042d3a0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623468;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Actor_006900a4,s_D__Work_RCHorror_RCSource_RCTarg_00690034,
                                  0x1d1,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  piVar8 = (int *)piVar1[1];
  piVar4 = operator_new(0xc);
  piVar7 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar7 = piVar4;
  }
  *piVar4 = (int)piVar7;
  if (piVar8 == (int *)0x0) {
    piVar8 = piVar4;
  }
  piVar4[1] = (int)piVar8;
  piVar1[1] = (int)piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = param_2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  ExceptionList = pvStack_c;
  return;
}

