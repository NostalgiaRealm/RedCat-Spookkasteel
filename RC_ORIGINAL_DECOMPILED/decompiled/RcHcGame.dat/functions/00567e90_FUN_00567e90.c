/*
 * FUN_00567e90 at 00567e90
 * undefined FUN_00567e90(void)
 * Address ranges: 00567e90-00567f22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00567e90(undefined1 *param_1)

{
  char cVar1;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006402a8;
  local_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = param_1._0_1_;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

