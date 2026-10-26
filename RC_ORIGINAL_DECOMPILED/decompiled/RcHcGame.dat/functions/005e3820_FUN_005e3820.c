/*
 * FUN_005e3820 at 005e3820
 * undefined FUN_005e3820(void)
 * Address ranges: 005e3820-005e38b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005e3820(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646578;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00429a30(&param_2);
  FUN_005e2f80(6);
  *param_1 = &PTR_FUN_006509e4;
  param_1[7] = param_6;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_3 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return param_1;
}

