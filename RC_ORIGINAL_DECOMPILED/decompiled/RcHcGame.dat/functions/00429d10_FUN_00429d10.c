/*
 * FUN_00429d10 at 00429d10
 * undefined FUN_00429d10(void)
 * Address ranges: 00429d10-00429db2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00429d10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 *param_10)

{
  char cVar1;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00622f08;
  local_c = ExceptionList;
  iStack_14 = (int)param_10;
  uStack_18 = param_9;
  uStack_1c = param_8;
  uStack_20 = param_7;
  param_10 = auStack_30;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00429a30(&param_3);
  FUN_00429b50(param_2);
  *param_1 = &PTR_FUN_0064be90;
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_4 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    iStack_14 = param_4 + -1;
    uStack_18 = 0x429d9c;
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return param_1;
}

