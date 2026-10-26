/*
 * FUN_0042d750 at 0042d750
 * undefined FUN_0042d750(void)
 * Address ranges: 0042d750-0042d876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042d750(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006234c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar4 = FUN_00401940(uVar6,1);
    if (cVar4 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
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
      *(undefined1 *)((int)local_18 + uVar6) = 0;
      local_14 = uVar6;
    }
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_a_Button_006900ac,s_D__Work_RCHorror_RCSource_RCTarg_00690034,
                                  0x1f2,local_1c);
    (*pcVar5)();
    if (local_18 != (undefined4 *)0x0) {
      cVar4 = *(char *)((int)local_18 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar4 + -1;
      }
    }
  }
  piVar1 = *(int **)(param_1 + 0x30);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    if (piVar3[2] == param_2) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_005fe5f0(piVar3);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      piVar3 = piVar2;
    }
    else {
      piVar3 = (int *)*piVar3;
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  ExceptionList = pvStack_c;
  return;
}

