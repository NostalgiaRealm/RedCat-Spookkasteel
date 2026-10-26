/*
 * FUN_005fc230 at 005fc230
 * undefined FUN_005fc230(void)
 * Address ranges: 005fc230-005fc476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x651340; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x651340; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005fc230(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int aiStack_70 [4];
  int aiStack_60 [3];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  int iStack_20;
  undefined1 auStack_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648b58;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b1790;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b1790;
    puVar10 = *(undefined4 **)(param_2 + 4);
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
    FUN_00404190(uVar6);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x10))();
  uVar3 = (**(code **)(*piVar2 + 4))(auStack_1c);
  puStack_8 = (undefined1 *)0x0;
  uVar4 = FUN_005fbab0(aiStack_60,param_1[4]);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  piVar2 = (int *)(**(code **)(*param_1 + 0x14))();
  uVar5 = (**(code **)(*piVar2 + 4))(aiStack_70);
  pvStack_c._0_1_ = 2;
  uVar5 = FUN_0040cad0(&stack0xffffff7c,uVar5,&DAT_006a678c);
  pvStack_c._0_1_ = 3;
  uVar4 = FUN_0044e370(auStack_34,uVar5,uVar4);
  pvStack_c._0_1_ = 4;
  uVar4 = FUN_0040cad0(auStack_44,uVar4,&DAT_00693460);
  pvStack_c._0_1_ = 5;
  uVar3 = FUN_0044e370(auStack_54,uVar4,uVar3);
  pvStack_c._0_1_ = 6;
  FUN_0040cc00(uVar3,0,0xffffffff);
  pvStack_c._0_1_ = 5;
  FUN_004040a0(1);
  pvStack_c._0_1_ = 4;
  FUN_004040a0(1);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  FUN_004040a0(1);
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(unaff_EBX + -1));
    }
    else {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
    }
  }
  if (aiStack_70[0] != 0) {
    cVar1 = *(char *)(aiStack_70[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(aiStack_70[0] + -1));
    }
    else {
      *(char *)(aiStack_70[0] + -1) = cVar1 + -1;
    }
  }
  aiStack_70[0] = 0;
  aiStack_70[1] = 0;
  aiStack_70[2] = 0;
  if (aiStack_60[0] != 0) {
    cVar1 = *(char *)(aiStack_60[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(aiStack_60[0] + -1));
    }
    else {
      *(char *)(aiStack_60[0] + -1) = cVar1 + -1;
    }
  }
  aiStack_60[0] = 0;
  aiStack_60[1] = 0;
  aiStack_60[2] = 0;
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

