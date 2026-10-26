/*
 * FUN_10018dc8 at 10018dc8
 * undefined FUN_10018dc8(void)
 * Address ranges: 10018dc8-10018e31;10018e3b-10018e89;10018e93-10018eb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018dc8(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100201b0;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_1020fd74 == 3) {
    ExceptionList = &local_14;
    FUN_1001a434(9);
    local_8 = 0;
    local_20 = FUN_10019572(param_1);
    if (local_20 != 0) {
      FUN_1001959d(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_10018e32();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1020fd74 != 2) goto LAB_10018e94;
    ExceptionList = &local_14;
    FUN_1001a434(9);
    local_8 = 1;
    local_28 = FUN_10019fd7(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_1001a02e(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_10018e8a();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_10018e94:
  HeapFree(DAT_1020fd70,0,param_1);
  ExceptionList = local_14;
  return;
}

