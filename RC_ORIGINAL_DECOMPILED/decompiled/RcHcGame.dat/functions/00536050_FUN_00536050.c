/*
 * FUN_00536050 at 00536050
 * undefined FUN_00536050(void)
 * Address ranges: 00536050-005362b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00536050(undefined4 param_1)

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
  undefined1 local_cc [4];
  char *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [4];
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_8c;
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b8ef;
  local_c = ExceptionList;
  local_8c = 0;
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
    pcVar8 = local_c8;
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
  pcVar6 = &DAT_0069ff7c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar7 = (undefined4 *)&DAT_0069ff7c;
    puVar9 = local_b8;
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
  iVar3 = FUN_005acaf0(local_bc,local_cc,&DAT_0069ff78,uVar2,0);
  local_4._0_1_ = 3;
  local_ac[0] = *(undefined1 *)(iVar3 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar3 + 0x14),0,0xffffffff);
  local_4._0_1_ = 4;
  local_9c[0] = local_ac[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_ac,0,0xffffffff);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  if (local_b8 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_b8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_b8 + -1));
    }
    else {
      *(char *)((int)local_b8 + -1) = cVar1 + -1;
    }
  }
  local_b8 = (undefined4 *)0x0;
  local_b4 = 0;
  local_b0 = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_c8 != (char *)0x0) {
    cVar1 = local_c8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_c8 + -1);
    }
    else {
      local_c8[-1] = cVar1 + -1;
    }
  }
  local_c8 = (char *)0x0;
  local_c4 = 0;
  local_c0 = 0;
  uVar2 = FUN_00536680(local_9c);
  FUN_005362c0(param_1,uVar2);
  if (local_98 != 0) {
    cVar1 = *(char *)(local_98 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_98 + -1);
    }
    else {
      *(char *)(local_98 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

