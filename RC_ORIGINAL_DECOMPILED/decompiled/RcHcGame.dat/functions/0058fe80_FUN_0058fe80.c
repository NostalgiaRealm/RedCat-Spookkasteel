/*
 * FUN_0058fe80 at 0058fe80
 * undefined FUN_0058fe80(void)
 * Address ranges: 0058fe80-0058ff42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0058fe80(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00643576;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x168);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      ExceptionList = &local_c;
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      ExceptionList = &local_c;
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  iVar2 = *(int *)(param_1 + 0x160);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x15c);
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

