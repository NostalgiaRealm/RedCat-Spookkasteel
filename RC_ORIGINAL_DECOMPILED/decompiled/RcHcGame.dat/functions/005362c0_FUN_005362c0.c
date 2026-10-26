/*
 * FUN_005362c0 at 005362c0
 * undefined FUN_005362c0(void)
 * Address ranges: 005362c0-005363dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005362c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005363e0(local_1c,param_2);
  local_4 = 0;
  uVar2 = FUN_004caa20(local_2c,&DAT_0069ff7c,local_1c);
  local_4._0_1_ = 1;
  uVar2 = FUN_0040cad0(local_3c,uVar2,&DAT_0068f9f4);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005a3150(param_1,uVar2);
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return param_1;
}

