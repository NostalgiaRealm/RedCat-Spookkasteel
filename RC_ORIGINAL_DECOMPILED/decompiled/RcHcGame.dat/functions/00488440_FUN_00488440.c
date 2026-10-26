/*
 * FUN_00488440 at 00488440
 * undefined FUN_00488440(void)
 * Address ranges: 00488440-00488615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00488440(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062a212;
  local_c = ExceptionList;
  local_4 = 0xb;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x17c) != 0) {
    ExceptionList = &local_c;
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  local_4._0_1_ = 10;
  if (*(int *)(param_1 + 0x158) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  local_4._0_1_ = 8;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  iVar2 = *(int *)(param_1 + 0xec);
  local_4._0_1_ = 6;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  iVar2 = *(int *)(param_1 + 200);
  local_4._0_1_ = 4;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 200) = 0;
  }
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  iVar2 = *(int *)(param_1 + 0xa4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  iVar2 = *(int *)(param_1 + 0x80);
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_0051a260();
  ExceptionList = local_c;
  return;
}

