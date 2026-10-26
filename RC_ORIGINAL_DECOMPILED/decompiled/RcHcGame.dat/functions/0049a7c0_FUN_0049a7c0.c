/*
 * FUN_0049a7c0 at 0049a7c0
 * undefined FUN_0049a7c0(void)
 * Address ranges: 0049a7c0-0049a8c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049a7c0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e7a8;
  local_4 = 8;
  FUN_005acca0();
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 5;
  FUN_005acca0();
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005acca0();
  iVar2 = param_1[0xcb];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  local_4 = 0xffffffff;
  FUN_004fec10();
  ExceptionList = local_c;
  return;
}

