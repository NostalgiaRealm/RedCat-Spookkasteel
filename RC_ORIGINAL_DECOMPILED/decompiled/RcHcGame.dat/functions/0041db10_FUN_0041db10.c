/*
 * FUN_0041db10 at 0041db10
 * undefined FUN_0041db10(void)
 * Address ranges: 0041db10-0041dc6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0041db10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00621d24;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064b88c;
  local_4 = 1;
  if (param_1[0x91] != 0) {
    FUN_00502350(0);
    FUN_00502220();
  }
  FUN_005fe5f0(param_1[0x8d]);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  iVar2 = param_1[0x82];
  local_4 = 2;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  FUN_005ab4d0();
  iVar2 = param_1[0x76];
  local_4 = 4;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  FUN_005ab4d0();
  iVar2 = param_1[0x67];
  local_4 = CONCAT31(local_4._1_3_,3);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_004228d0();
  ExceptionList = local_c;
  return;
}

