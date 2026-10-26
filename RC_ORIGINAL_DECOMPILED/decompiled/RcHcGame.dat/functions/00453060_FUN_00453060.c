/*
 * FUN_00453060 at 00453060
 * undefined FUN_00453060(void)
 * Address ranges: 00453060-004532d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00453060(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 local_ac [4];
  undefined4 *local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined1 local_9c [4];
  char *local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626481;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_8c = param_1;
  if ((DAT_006b701c & 1) == 0) {
    DAT_006b701c = DAT_006b701c | 1;
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = s_General_00690810;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      pcVar10 = s_General_00690810;
      pcVar12 = local_98;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      local_98[uVar8] = '\0';
      local_94 = uVar8;
    }
    local_4 = 0;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_00690804;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar11 = (undefined4 *)&DAT_00690804;
      puVar13 = local_a8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      *(undefined1 *)((int)local_a8 + uVar8) = 0;
      local_a4 = uVar8;
    }
    local_4._0_1_ = 1;
    uVar2 = FUN_0043b0a0(local_88);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar3 = FUN_005ac9d0(local_ac,local_9c,0,uVar2,0);
    iVar5 = *(int *)(iVar3 + 100);
    if (iVar5 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar5;
    }
    DAT_006b7018 = iVar5;
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
    if (local_a8 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_a8 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_a8 + -1));
      }
      else {
        *(char *)((int)local_a8 + -1) = cVar1 + -1;
      }
    }
    local_a8 = (undefined4 *)0x0;
    local_a4 = 0;
    local_a0 = 0;
    local_4 = 0xffffffff;
    if (local_98 != (char *)0x0) {
      cVar1 = local_98[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_98 + -1);
      }
      else {
        local_98[-1] = cVar1 + -1;
      }
    }
    local_98 = (char *)0x0;
    local_94 = 0;
    local_90 = 0;
  }
  iVar5 = local_8c;
  if ((*(int **)(local_8c + 0x88) != (int *)0x0) && (*(int *)(local_8c + 0x8c) != 0)) {
    (**(code **)(**(int **)(local_8c + 0x88) + 0x10))();
    if (DAT_006b7018 == 1) {
      iVar3 = **(int **)(iVar5 + 0x8c);
      iVar6 = FUN_005ac530();
    }
    else {
      iVar3 = **(int **)(iVar5 + 0x8c);
      iVar6 = FUN_00439d60();
      iVar7 = FUN_005ac530();
      iVar6 = iVar6 + iVar7;
    }
    (**(code **)(iVar3 + 4))(iVar6);
    (**(code **)(**(int **)(iVar5 + 0x8c) + 0x10))();
  }
  ExceptionList = local_c;
  return;
}

