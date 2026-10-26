/*
 * FUN_0049a8d0 at 0049a8d0
 * undefined FUN_0049a8d0(void)
 * Address ranges: 0049a8d0-0049ab5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a8d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_b0 [4];
  undefined4 *local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [4];
  char *local_9c;
  uint local_98;
  undefined4 local_94;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c75c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_RCSource_RcSubL_00694af8,0x59);
  local_4 = 0;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar8 = s_General_00690810;
    pcVar10 = local_9c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_9c[uVar6] = '\0';
    local_98 = uVar6;
  }
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_00690804;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar9 = (undefined4 *)&DAT_00690804;
    puVar11 = local_ac;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined1 *)((int)local_ac + uVar6) = 0;
    local_a8 = uVar6;
  }
  local_4._0_1_ = 2;
  uVar2 = FUN_0043b0a0(local_88);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar3 = FUN_005ac9d0(local_b0,local_a0,0,uVar2,0);
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  FUN_005acca0();
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_84 + -1));
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (local_ac != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_ac + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_ac + -1));
    }
    else {
      *(char *)((int)local_ac + -1) = cVar1 + -1;
    }
  }
  local_ac = (undefined4 *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_4 = local_4 & 0xffffff00;
  if (local_9c != (char *)0x0) {
    cVar1 = local_9c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_9c + -1);
    }
    else {
      local_9c[-1] = cVar1 + -1;
    }
  }
  local_9c = (char *)0x0;
  local_98 = 0;
  local_94 = 0;
  if (iVar5 == 0) {
    FUN_004ff070();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
    FUN_005ad1a0();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

