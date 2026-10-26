/*
 * FUN_00429990 at 00429990
 * undefined FUN_00429990(void)
 * Address ranges: 00429990-00429a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00429990(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00622ec8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00429a30(&param_3);
  FUN_00429b50(param_2);
  *param_1 = &PTR_FUN_0064be80;
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_4 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return param_1;
}

