/*
 * FUN_004ac270 at 004ac270
 * undefined FUN_004ac270(void)
 * Address ranges: 004ac270-004ac2fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ac270(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e0d3;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 100);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_4 = 0xffffffff;
  FUN_004ad8d0();
  ExceptionList = local_c;
  return;
}

