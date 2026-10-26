/*
 * FUN_0056b7f0 at 0056b7f0
 * undefined FUN_0056b7f0(void)
 * Address ranges: 0056b7f0-0056b9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056b7f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_ac [4];
  undefined4 *local_a8;
  uint local_a4;
  undefined1 local_9c [4];
  char *local_98;
  uint local_94;
  undefined4 local_8c;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006408a1;
  local_c = ExceptionList;
  local_8c = 0;
  ExceptionList = &local_c;
  FUN_0043b0a0(local_88);
  local_4 = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = s_General_00690810;
    pcVar9 = local_98;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_98[uVar5] = '\0';
    local_94 = uVar5;
  }
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_00690804;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_00690804;
    puVar10 = local_a8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)local_a8 + uVar5) = 0;
    local_a4 = uVar5;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_005ac9d0(local_ac,local_9c,0,local_88,0);
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0(1);
  if (local_98 != (char *)0x0) {
    cVar1 = local_98[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_98 + -1);
    }
    else {
      local_98[-1] = cVar1 + -1;
    }
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 2;
  param_1[4] = iVar4;
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_84 + -1);
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

