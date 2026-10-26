/*
 * FUN_005e2f80 at 005e2f80
 * undefined FUN_005e2f80(void)
 * Address ranges: 005e2f80-005e3013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005e2f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined1 *param_7)

{
  char cVar1;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006464b8;
  local_c = ExceptionList;
  iStack_14 = (int)param_7;
  local_4 = 0;
  param_7 = auStack_24;
  ExceptionList = &local_c;
  FUN_00429a30(&param_3);
  FUN_005e3020(param_2);
  *param_1 = &PTR_FUN_006509a8;
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_4 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    iStack_14 = param_4 + -1;
    uStack_18 = 0x5e2ffd;
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return param_1;
}

