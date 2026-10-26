/*
 * FUN_0059fa60 at 0059fa60
 * undefined FUN_0059fa60(void)
 * Address ranges: 0059fa60-0059fb87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059fa60(undefined4 param_1)

{
  char cVar1;
  char extraout_AL;
  undefined4 uVar2;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644c50;
  local_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_0059f300(local_1c,param_1);
  local_4._0_1_ = 1;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  FUN_0059f5d0(local_2c,param_1);
  if (extraout_AL != '\0') {
    FUN_0059c5a0();
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 1;
      }
      FUN_005fe5f0(local_28 + -1);
    }
    ExceptionList = local_c;
    return 1;
  }
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

