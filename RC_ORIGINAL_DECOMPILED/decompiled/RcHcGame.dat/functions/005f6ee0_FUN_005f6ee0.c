/*
 * FUN_005f6ee0 at 005f6ee0
 * undefined FUN_005f6ee0(void)
 * Address ranges: 005f6ee0-005f7124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x650d38; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x650d38; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f6ee0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iStack_5c;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_2c [16];
  int aiStack_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006484b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (*(int *)(iVar2 + 4) == 1) {
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b1530;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b1530;
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
    piVar3 = (int *)(**(code **)(*param_1 + 0x10))();
    uVar4 = (**(code **)(*piVar3 + 4))(auStack_2c);
    puStack_8 = (undefined1 *)0x0;
    FUN_0040cc00(uVar4,0,0xffffffff);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004040a0(1);
  }
  else {
    uVar6 = 0xffffffff;
    pcVar9 = (char *)&DAT_006b152c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = &DAT_006b152c;
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
      *(uint *)(param_2 + 8) = uVar6;
      *(undefined1 *)(*(int *)(param_2 + 4) + uVar6) = 0;
    }
    piVar3 = (int *)(**(code **)(*param_1 + 0x10))();
    uVar4 = (**(code **)(*piVar3 + 4))(aiStack_1c);
    puStack_8 = (undefined1 *)0x1;
    piVar3 = (int *)(**(code **)(*param_1 + 0x14))();
    uVar5 = (**(code **)(*piVar3 + 4))(auStack_40);
    puStack_8._0_1_ = 2;
    uVar5 = FUN_0040cad0(auStack_50,uVar5,&DAT_0069e140);
    puStack_8._0_1_ = 3;
    uVar4 = FUN_0044e370(&stack0xffffffa0,uVar5,uVar4);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    FUN_0040cc00(uVar4,0,0xffffffff);
    if (iStack_5c != 0) {
      cVar1 = *(char *)(iStack_5c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_5c + -1));
      }
      else {
        *(char *)(iStack_5c + -1) = cVar1 + -1;
      }
    }
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (aiStack_1c[0] != 0) {
      cVar1 = *(char *)(aiStack_1c[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(aiStack_1c[0] + -1));
      }
      else {
        *(char *)(aiStack_1c[0] + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}

