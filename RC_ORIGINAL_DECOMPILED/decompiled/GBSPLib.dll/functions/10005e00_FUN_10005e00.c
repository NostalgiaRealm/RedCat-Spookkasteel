/*
 * FUN_10005e00 at 10005e00
 * undefined FUN_10005e00(void)
 * Address ranges: 10005e00-10005e86;10005eaa-10005ebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005e00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100341b8;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  DAT_1014e350 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  iVar1 = FUN_10007dd0(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (DAT_1014e350 != 0) {
    ExceptionList = local_14;
    return 2;
  }
  ExceptionList = local_14;
  return 0;
}

