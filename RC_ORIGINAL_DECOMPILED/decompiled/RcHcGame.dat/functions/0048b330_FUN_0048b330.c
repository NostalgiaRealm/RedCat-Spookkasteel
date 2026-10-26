/*
 * FUN_0048b330 at 0048b330
 * undefined FUN_0048b330(void)
 * Address ranges: 0048b330-0048b598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0048b330(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062a9b5;
  local_c = ExceptionList;
  local_4 = 0x11;
  ExceptionList = &local_c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x10;
  if (*(int *)(param_1 + 0x294) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_4._0_1_ = 0xe;
  if (*(int *)(param_1 + 0x254) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  if (*(int *)(param_1 + 0x214) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 400) = 0;
  }
  local_4._0_1_ = 8;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  iVar2 = *(int *)(param_1 + 0x108);
  local_4._0_1_ = 4;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  iVar2 = *(int *)(param_1 + 0xe4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  iVar2 = *(int *)(param_1 + 0xc0);
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  local_4 = 0x15;
  FUN_0057d310();
  local_4._0_1_ = 0x14;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  local_4._0_1_ = 0x13;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_0051a260();
  ExceptionList = local_c;
  return;
}

