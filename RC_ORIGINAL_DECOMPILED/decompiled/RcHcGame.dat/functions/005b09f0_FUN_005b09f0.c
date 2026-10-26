/*
 * FUN_005b09f0 at 005b09f0
 * undefined FUN_005b09f0(void)
 * Address ranges: 005b09f0-005b0b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005b09f0(undefined1 *param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646148;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6 - 1;
  local_4 = 0;
  cVar3 = FUN_00401940(uVar6,1);
  if (cVar3 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar9 = local_18;
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
    FUN_00404190(uVar6);
  }
  if (*param_3 < *(uint *)(param_2 + 8)) {
    do {
      if (*(int *)(param_2 + 4) == 0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)(*(int *)(param_2 + 4) + *param_3);
      }
    } while ((*pcVar4 == ' ') &&
            (uVar6 = *param_3, *param_3 = uVar6 + 1, uVar6 + 1 < *(uint *)(param_2 + 8)));
    if (*param_3 < *(uint *)(param_2 + 8)) {
      do {
        iVar2 = *(int *)(param_2 + 4);
        if (iVar2 == 0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)(iVar2 + *param_3);
        }
        if (*pcVar4 == ' ') break;
        if (iVar2 == 0) {
          puVar5 = &DAT_0064a3b4;
        }
        else {
          puVar5 = (undefined1 *)(iVar2 + *param_3);
        }
        uVar1 = *puVar5;
        if (-local_14 - 1U < 2) {
          FUN_005fe5fb();
        }
        iVar2 = local_14 + 1;
        cVar3 = FUN_00401940(iVar2,0);
        if (cVar3 != '\0') {
          *(undefined1 *)(local_14 + (int)local_18) = uVar1;
          *(undefined1 *)((int)local_18 + iVar2) = 0;
          local_14 = iVar2;
        }
        uVar6 = *param_3;
        *param_3 = uVar6 + 1;
      } while (uVar6 + 1 < *(uint *)(param_2 + 8));
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != (undefined4 *)0x0) {
    cVar3 = *(char *)((int)local_18 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar3 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

