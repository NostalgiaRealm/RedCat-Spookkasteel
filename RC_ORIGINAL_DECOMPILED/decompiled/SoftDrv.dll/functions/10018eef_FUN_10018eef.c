/*
 * FUN_10018eef at 10018eef
 * undefined FUN_10018eef(void)
 * Address ranges: 10018eef-10018f55;10018f5f-10018fb1;10018fbe-10018fea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018eef(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100201c8;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  if (DAT_1020fd74 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1020fd6c) {
      ExceptionList = &local_14;
      FUN_1001a434(9);
      local_8 = 0;
      iVar1 = FUN_100198c6(param_1);
      local_8 = 0xffffffff;
      FUN_10018f56();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1020fd74 == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100239c4) {
        ExceptionList = &local_14;
        FUN_1001a434(9);
        local_8 = 1;
        iVar1 = FUN_1001a073(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10018fb5();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10018fce;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_10018fce:
  HeapAlloc(DAT_1020fd70,0,dwBytes);
  ExceptionList = local_14;
  return;
}

