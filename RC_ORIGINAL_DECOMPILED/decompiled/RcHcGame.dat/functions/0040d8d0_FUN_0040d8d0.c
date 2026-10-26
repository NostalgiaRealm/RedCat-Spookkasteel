/*
 * FUN_0040d8d0 at 0040d8d0
 * undefined FUN_0040d8d0(void)
 * Address ranges: 0040d8d0-0040d96f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0040d8d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00620bb6;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x1a4);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x188);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  local_4 = 0xffffffff;
  FUN_004228d0();
  ExceptionList = local_c;
  return;
}

