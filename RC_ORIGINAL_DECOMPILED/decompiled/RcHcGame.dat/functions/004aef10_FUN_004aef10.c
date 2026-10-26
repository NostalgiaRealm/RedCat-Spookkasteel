/*
 * FUN_004aef10 at 004aef10
 * undefined FUN_004aef10(void)
 * Address ranges: 004aef10-004aef99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004aef10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e483;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064eaec;
  local_4 = 1;
  FUN_004afff0(0);
  iVar2 = param_1[0x15];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = 0xffffffff;
  FUN_004ad8d0();
  ExceptionList = local_c;
  return;
}

