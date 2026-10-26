/*
 * FUN_1002898d at 1002898d
 * undefined FUN_1002898d(void)
 * Address ranges: 1002898d-100289f3;100289fd-10028a4f;10028a5c-10028a88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002898d(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100349b0;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  if (DAT_1052a9b8 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1052a9b0) {
      ExceptionList = &local_14;
      FUN_1002e819(9);
      local_8 = 0;
      iVar1 = FUN_1002d90c(param_1);
      local_8 = 0xffffffff;
      FUN_100289f4();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1052a9b8 == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1003f374) {
        ExceptionList = &local_14;
        FUN_1002e819(9);
        local_8 = 1;
        iVar1 = FUN_1002e3af(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10028a53();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10028a6c;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_10028a6c:
  HeapAlloc(DAT_1052a9b4,0,dwBytes);
  ExceptionList = local_14;
  return;
}

