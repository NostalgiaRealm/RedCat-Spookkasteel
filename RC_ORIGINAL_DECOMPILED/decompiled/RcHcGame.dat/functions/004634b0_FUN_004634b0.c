/*
 * FUN_004634b0 at 004634b0
 * undefined FUN_004634b0(void)
 * Address ranges: 004634b0-00463549
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004634b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006273e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064d770;
  local_4 = 1;
  FUN_00464c70(0);
  local_4 = local_4 & 0xffffff00;
  param_1[0x68] = &PTR_FUN_0064abb0;
  iVar2 = param_1[0x6e];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_0058d660();
  ExceptionList = local_c;
  return;
}

