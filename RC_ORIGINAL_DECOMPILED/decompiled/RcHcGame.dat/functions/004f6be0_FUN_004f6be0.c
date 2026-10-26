/*
 * FUN_004f6be0 at 004f6be0
 * undefined FUN_004f6be0(void)
 * Address ranges: 004f6be0-004f6be4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f6be0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcStack_34;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0062c8b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0064e7b4;
  uStack_4 = 3;
  if (param_1[0x118] != '\0') {
    pcStack_34 = param_1;
    FUN_004042e0(&pcStack_34);
    FUN_0049c880();
  }
  pcStack_34 = (char *)0x49b774;
  FUN_0049c280();
  iVar3 = *(int *)(param_1 + 0x110);
  uStack_4._0_1_ = 4;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14) + -1;
    *(int *)(iVar3 + 0x14) = iVar2;
    if (iVar2 == 0) {
      pcStack_34 = (char *)0x0;
      FUN_005abfc0();
    }
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  param_1[0x10c] = '\0';
  pcStack_34 = (char *)0x49b7af;
  iVar2 = FUN_00517d30();
  iVar3 = *(int *)(iVar2 + 100);
  if (iVar3 == -0x80000000) {
    pcStack_34 = *(char **)(iVar2 + 0x18);
    if (pcStack_34 == (char *)0x0) {
      pcStack_34 = "";
    }
    iVar3 = FUN_0060af10();
    *(int *)(iVar2 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    pcStack_34 = *(char **)(param_1 + 0x284);
    uVar5 = FUN_005ae390(auStack_1c,s_Actor___s__did__d_FindVisibleSun_00694bf4,puVar4,
                         *(undefined4 *)(param_1 + 0x280));
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    FUN_005aff00(uVar5);
    if (iStack_18 != 0) {
      pcStack_34 = (char *)(iStack_18 + -1);
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *pcStack_34 = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  uStack_4._0_1_ = 2;
  pcStack_34 = (char *)0x49b850;
  FUN_004a05f0();
  iVar3 = *(int *)(param_1 + 0x110);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14) + -1;
    *(int *)(iVar3 + 0x14) = iVar2;
    if (iVar2 == 0) {
      pcStack_34 = (char *)0x0;
      FUN_005abfc0();
    }
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
  }
  iVar3 = *(int *)(param_1 + 0xfc);
  if (iVar3 != 0) {
    pcStack_34 = (char *)(iVar3 + -1);
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *pcStack_34 = cVar1 + -1;
    }
  }
  param_1[0xfc] = '\0';
  param_1[0xfd] = '\0';
  param_1[0xfe] = '\0';
  param_1[0xff] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  uStack_4 = 0xffffffff;
  pcStack_34 = (char *)0x49b8bc;
  FUN_00501f40();
  ExceptionList = pvStack_c;
  return;
}

