/*
 * FUN_100284b6 at 100284b6
 * undefined FUN_100284b6(void)
 * Address ranges: 100284b6-1002851f;10028529-10028577;10028581-1002859e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100284b6(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10034998;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_1052a9b8 == 3) {
    ExceptionList = &local_14;
    FUN_1002e819(9);
    local_8 = 0;
    local_20 = FUN_1002d5b8(param_1);
    if (local_20 != 0) {
      FUN_1002d5e3(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_10028520();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1052a9b8 != 2) goto LAB_10028582;
    ExceptionList = &local_14;
    FUN_1002e819(9);
    local_8 = 1;
    local_28 = FUN_1002e313(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_1002e36a(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_10028578();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_10028582:
  HeapFree(DAT_1052a9b4,0,param_1);
  ExceptionList = local_14;
  return;
}

