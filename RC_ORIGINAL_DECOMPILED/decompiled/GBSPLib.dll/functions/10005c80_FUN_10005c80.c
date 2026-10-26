/*
 * FUN_10005c80 at 10005c80
 * undefined FUN_10005c80(void)
 * Address ranges: 10005c80-10005d02;10005d26-10005d38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005c80(undefined4 param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10034198;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  DAT_1014e350 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  iVar1 = FUN_10005f10(param_1);
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

