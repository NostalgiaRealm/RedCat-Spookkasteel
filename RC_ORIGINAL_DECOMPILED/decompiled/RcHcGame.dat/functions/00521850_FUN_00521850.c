/*
 * FUN_00521850 at 00521850
 * undefined FUN_00521850(void)
 * Address ranges: 00521850-00521a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521850(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_b8 [4];
  undefined4 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [4];
  char *local_a4;
  undefined1 local_98 [16];
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638bb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_General_00690810;
    pcVar8 = local_a4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = 0;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_0069fa34;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar7 = &DAT_0069fa34;
    puVar9 = local_b4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 1;
  uVar2 = FUN_00436f90(local_88);
  local_4._0_1_ = 2;
  iVar3 = FUN_005acaf0(local_b8,local_a8,s_Attic_0069fa2c,uVar2,0);
  local_4._0_1_ = 3;
  local_98[0] = *(undefined1 *)(iVar3 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar3 + 0x14),0,0xffffffff);
  local_4._0_1_ = 4;
  DAT_006b9978 = local_98[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_98,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,2);
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
  if (local_b4 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_b4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_b4 + -1));
    }
    else {
      *(char *)((int)local_b4 + -1) = cVar1 + -1;
    }
  }
  local_b4 = (undefined4 *)0x0;
  local_b0 = 0;
  local_ac = 0;
  if (local_a4 != (char *)0x0) {
    cVar1 = local_a4[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_a4[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_a4 + -1);
  }
  ExceptionList = local_c;
  return;
}

