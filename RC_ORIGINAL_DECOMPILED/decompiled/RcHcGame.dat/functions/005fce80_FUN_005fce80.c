/*
 * FUN_005fce80 at 005fce80
 * undefined FUN_005fce80(void)
 * Address ranges: 005fce80-005fd093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x6513c0; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x6513c0; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005fce80(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  int aiStack_60 [4];
  int aiStack_50 [3];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  int iStack_20;
  undefined1 auStack_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648c50;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar8 = s_UPDATE_006b17a0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar8 = s_UPDATE_006b17a0;
    pcVar9 = *(char **)(param_2 + 4);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar6);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x10))();
  uVar3 = (**(code **)(*piVar2 + 4))(auStack_1c);
  puStack_8 = (undefined1 *)0x0;
  uVar4 = FUN_005f81a0(aiStack_50,param_1[4]);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  piVar2 = (int *)(**(code **)(*param_1 + 0x14))();
  uVar5 = (**(code **)(*piVar2 + 4))(aiStack_60);
  pvStack_c._0_1_ = 2;
  uVar4 = FUN_0044e370(&stack0xffffff8c,uVar5,uVar4);
  pvStack_c._0_1_ = 3;
  uVar4 = FUN_0040cad0(auStack_34,uVar4,&DAT_006b179c);
  pvStack_c._0_1_ = 4;
  uVar3 = FUN_0044e370(auStack_44,uVar4,uVar3);
  pvStack_c._0_1_ = 5;
  FUN_0040cc00(uVar3,0,0xffffffff);
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
  if (aiStack_50[0] != 0) {
    cVar1 = *(char *)(aiStack_50[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(aiStack_50[0] + -1));
    }
    else {
      *(char *)(aiStack_50[0] + -1) = cVar1 + -1;
    }
  }
  aiStack_50[0] = 0;
  aiStack_50[1] = 0;
  aiStack_50[2] = 0;
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

