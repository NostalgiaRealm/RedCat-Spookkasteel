/*
 * FUN_004e2450 at 004e2450
 * undefined FUN_004e2450(void)
 * Address ranges: 004e2450-004e2583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004e2450(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00632860;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f314;
  local_4 = 4;
  if ((undefined4 *)param_1[0x61] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x61])(1);
    param_1[0x61] = 0;
  }
  if ((undefined4 *)param_1[0x62] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x62])(1);
    param_1[0x62] = 0;
  }
  iVar2 = param_1[0x79];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  iVar2 = param_1[0x75];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  iVar2 = param_1[0x70];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004ad270();
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = pvStack_c;
  return;
}

