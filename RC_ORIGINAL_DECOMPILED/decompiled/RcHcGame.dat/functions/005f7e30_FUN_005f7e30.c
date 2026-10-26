/*
 * FUN_005f7e30 at 005f7e30
 * undefined FUN_005f7e30(void)
 * Address ranges: 005f7e30-005f8175
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x650dd8; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x650dd8; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_005f7e30(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_EBX;
  undefined4 *puVar10;
  char *pcVar11;
  int iStack_a4;
  undefined4 *puStack_a0;
  int aiStack_90 [5];
  undefined1 local_7c [16];
  undefined1 local_6c [8];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  int iStack_20;
  undefined1 auStack_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006486de;
  pvStack_c = ExceptionList;
  if (param_1[2] == -2) {
    ExceptionList = &pvStack_c;
    uVar2 = FUN_005f7960(local_7c,param_1[3]);
    local_4 = 0;
    uVar2 = FUN_004caa20(local_6c,&DAT_006b1544,uVar2);
    local_4._0_1_ = 1;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  else {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_005f7960(local_6c,param_1[3]);
    puVar4 = *(undefined1 **)(iVar3 + 4);
    local_4 = 2;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005e7110(local_7c,&DAT_006b153c,puVar4,param_1[2]);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  piVar5 = (int *)(**(code **)(*param_1 + 0x10))();
  uVar2 = (**(code **)(*piVar5 + 4))(auStack_1c);
  puStack_8 = (undefined1 *)0x4;
  iStack_a4 = CONCAT31(iStack_a4._1_3_,(char)((uint)unaff_EBX >> 0x18));
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar11 = (char *)&DAT_00693460;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  cVar1 = FUN_00401940(uVar8,1);
  if (cVar1 != '\0') {
    puVar10 = &DAT_00693460;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puStack_a0 = *puVar10;
      puVar10 = puVar10 + 1;
      puStack_a0 = puStack_a0 + 1;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puStack_a0 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puStack_a0 = (undefined4 *)((int)puStack_a0 + 1);
    }
    FUN_00404190(uVar8);
  }
  puStack_8._0_1_ = 5;
  uVar6 = FUN_005f81a0(aiStack_90,param_1[5]);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
  piVar5 = (int *)(**(code **)(*param_1 + 0x18))();
  uVar7 = (**(code **)(*piVar5 + 4))(auStack_40);
  pvStack_c._0_1_ = 7;
  uVar6 = FUN_0044e370(auStack_54,uVar7,uVar6);
  pvStack_c._0_1_ = 8;
  uVar6 = FUN_0044e370(auStack_64,uVar6,&stack0xffffff58);
  pvStack_c._0_1_ = 9;
  uVar2 = FUN_0044e370(auStack_34,uVar6,uVar2);
  pvStack_c._0_1_ = 10;
  FUN_0040cc00(uVar2,0,0xffffffff);
  pvStack_c._0_1_ = 9;
  FUN_004040a0(1);
  pvStack_c._0_1_ = 8;
  FUN_004040a0(1);
  pvStack_c._0_1_ = 7;
  FUN_004040a0(1);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
  FUN_004040a0(1);
  if (aiStack_90[0] != 0) {
    cVar1 = *(char *)(aiStack_90[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(aiStack_90[0] + -1));
    }
    else {
      *(char *)(aiStack_90[0] + -1) = cVar1 + -1;
    }
  }
  aiStack_90[0] = 0;
  aiStack_90[1] = 0;
  aiStack_90[2] = 0;
  if (iStack_a4 != 0) {
    cVar1 = *(char *)(iStack_a4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_a4 + -1));
    }
    else {
      *(char *)(iStack_a4 + -1) = cVar1 + -1;
    }
  }
  if (iStack_20 != 0) {
    cVar1 = *(char *)(iStack_20 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_20 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_005fe5f0((char *)(iStack_20 + -1));
  }
  ExceptionList = pvStack_14;
  return;
}

