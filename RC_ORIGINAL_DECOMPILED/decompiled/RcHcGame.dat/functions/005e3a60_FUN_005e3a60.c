/*
 * FUN_005e3a60 at 005e3a60
 * undefined FUN_005e3a60(void)
 * Address ranges: 005e3a60-005e3b42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005e3a60(undefined4 *param_1,undefined4 param_2,undefined1 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined1 *param_11)

{
  char cVar1;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006465c8;
  local_c = ExceptionList;
  iStack_1c = (int)param_11;
  local_4 = 1;
  param_11 = auStack_2c;
  ExceptionList = &local_c;
  FUN_00429a30(&param_7);
  FUN_005e3020(param_2);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puStack_24 = &param_3;
  iStack_1c = 0xffffffff;
  uStack_20 = 0;
  uStack_28 = 0x5e3ad4;
  FUN_0040cc00();
  *param_1 = &PTR_FUN_006509f8;
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      iStack_1c = param_4 + -1;
      uStack_20 = 0x5e3afb;
      FUN_005fe5f0();
    }
    else {
      *(char *)(param_4 + -1) = cVar1 + -1;
    }
  }
  param_4 = 0;
  param_5 = 0;
  param_6 = 0;
  if (param_8 != 0) {
    cVar1 = *(char *)(param_8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      iStack_1c = param_8 + -1;
      uStack_20 = 0x5e3b2b;
      FUN_005fe5f0();
    }
    else {
      *(char *)(param_8 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

