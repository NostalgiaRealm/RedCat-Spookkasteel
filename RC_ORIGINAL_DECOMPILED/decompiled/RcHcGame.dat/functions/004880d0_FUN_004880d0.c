/*
 * FUN_004880d0 at 004880d0
 * undefined FUN_004880d0(void)
 * Address ranges: 004880d0-004881d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004880d0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062a0e0;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x124);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
    FUN_005844b0();
  }
  iVar1 = *(int *)(param_1 + 0x148);
  local_4 = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_005844b0();
  }
  iVar1 = *(int *)(param_1 + 0x16c);
  local_4 = 2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x16c) = 0;
    FUN_005844b0();
  }
  local_4 = 3;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
  ExceptionList = local_c;
  return;
}

