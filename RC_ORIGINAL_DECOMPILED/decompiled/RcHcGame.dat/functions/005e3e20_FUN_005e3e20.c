/*
 * FUN_005e3e20 at 005e3e20
 * undefined FUN_005e3e20(void)
 * Address ranges: 005e3e20-005e3f10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005e3e20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646618;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00429a30();
  local_4._0_1_ = 2;
  FUN_00429a30(&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005e3a60(5);
  param_1[0xb] = param_10;
  *param_1 = &PTR_FUN_00650a0c;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  if (param_7 != 0) {
    cVar1 = *(char *)(param_7 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_7 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return param_1;
}

