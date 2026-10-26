/*
 * FUN_00597a00 at 00597a00
 * undefined FUN_00597a00(void)
 * Address ranges: 00597a00-00597bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00597a00(void)

{
  char cVar1;
  undefined3 uVar6;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_a8 [4];
  char *local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  char *local_94;
  uint local_90;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643fe1;
  local_c = ExceptionList;
  uVar6 = (undefined3)((uint)ExceptionList >> 8);
  if ((DAT_006c9f79 & 1) == 0) {
    DAT_006c9f79 = DAT_006c9f79 | 1;
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_CursorActor_006a6c98;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_CursorActor_006a6c98;
      pcVar10 = local_94;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_94[uVar7] = '\0';
      local_90 = uVar7;
    }
    local_4 = 0;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_TestForObstacles_006a6c84;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_TestForObstacles_006a6c84;
      pcVar10 = local_a4;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_a4[uVar7] = '\0';
      local_a0 = uVar7;
    }
    local_4._0_1_ = 1;
    uVar2 = FUN_00436f90(local_88);
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
    DAT_006c9f78 = iVar5 != 0;
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
    uVar6 = 0;
    if (local_94 != (char *)0x0) {
      cVar1 = local_94[-1];
      uVar6 = (undefined3)((uint)local_94 >> 8);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_94 + -1);
        uVar6 = extraout_var;
      }
      else {
        local_94[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar6,DAT_006c9f78);
}

