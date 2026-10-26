/*
 * FUN_004b8fb0 at 004b8fb0
 * undefined FUN_004b8fb0(void)
 * Address ranges: 004b8fb0-004b9050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b8fb0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062f214;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064ed50;
  local_4 = 2;
  FUN_004b9950();
  iVar2 = param_1[0x50];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004ad270();
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

