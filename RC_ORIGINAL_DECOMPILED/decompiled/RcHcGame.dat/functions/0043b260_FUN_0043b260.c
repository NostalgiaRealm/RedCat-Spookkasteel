/*
 * FUN_0043b260 at 0043b260
 * undefined FUN_0043b260(void)
 * Address ranges: 0043b260-0043b440
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043b260(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_a8 [4];
  char *local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined4 *local_94;
  uint local_90;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006243e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&DAT_006908ac;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar8 = &DAT_006908ac;
    puVar10 = local_94;
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
    *(undefined1 *)((int)local_94 + uVar6) = 0;
    local_90 = uVar6;
  }
  local_4 = 0;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_HasRespawn_006908a0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_HasRespawn_006908a0;
    pcVar11 = local_a4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_a4[uVar6] = '\0';
    local_a0 = uVar6;
  }
  local_4._0_1_ = 1;
  uVar2 = FUN_0043b450(local_88);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = FUN_005ac9d0(local_a8,local_98,0,uVar2,0);
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  DAT_006b594c = iVar5 != 0;
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
  if (local_a4 != (char *)0x0) {
    cVar1 = local_a4[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a4 + -1);
    }
    else {
      local_a4[-1] = cVar1 + -1;
    }
  }
  local_a4 = (char *)0x0;
  local_a0 = 0;
  local_9c = 0;
  if (local_94 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_94 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_94 + -1));
    }
    else {
      *(char *)((int)local_94 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

