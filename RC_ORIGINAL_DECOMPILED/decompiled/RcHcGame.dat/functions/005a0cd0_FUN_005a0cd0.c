/*
 * FUN_005a0cd0 at 005a0cd0
 * undefined FUN_005a0cd0(void)
 * Address ranges: 005a0cd0-005a0d64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a0cd0(int param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644e4e;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005acca0();
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

