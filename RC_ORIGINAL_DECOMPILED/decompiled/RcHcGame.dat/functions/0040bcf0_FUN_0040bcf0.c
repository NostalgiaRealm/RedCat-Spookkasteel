/*
 * FUN_0040bcf0 at 0040bcf0
 * undefined FUN_0040bcf0(void)
 * Address ranges: 0040bcf0-0040bdb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0040bcf0(int param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00620a46;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x1d8);
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
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  FUN_005ab4d0();
  iVar2 = *(int *)(param_1 + 0x19c);
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_004228d0();
  ExceptionList = local_c;
  return;
}

