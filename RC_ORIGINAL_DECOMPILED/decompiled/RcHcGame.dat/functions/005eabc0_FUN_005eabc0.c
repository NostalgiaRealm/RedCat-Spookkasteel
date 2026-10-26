/*
 * FUN_005eabc0 at 005eabc0
 * undefined FUN_005eabc0(void)
 * Address ranges: 005eabc0-005eacab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005eabc0(undefined4 param_1,int param_2)

{
  char cVar1;
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
  puStack_8 = &LAB_00646e80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045da10(local_1c);
  local_4 = 0;
  local_2c[0] = (undefined1)param_2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_0040cc00(local_1c,0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x28));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005e2be0(local_2c);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
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

