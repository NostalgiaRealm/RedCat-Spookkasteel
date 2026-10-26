/*
 * FUN_10003f4c at 10003f4c
 * undefined __cdecl FUN_10003f4c(undefined * param_1)
 * Address ranges: 10003f4c-10003fb5;10003fbf-1000400d;10004017-10004034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10003f4c(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c1d8;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_101f5ab4 == 3) {
    ExceptionList = &local_14;
    FUN_10006171(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100052af((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100052da(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003fb6();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_101f5ab4 != 2) goto LAB_10004018;
    ExceptionList = &local_14;
    FUN_10006171(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10005d14(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005d6b(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000400e();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10004018:
  HeapFree(DAT_101f5ab0,0,param_1);
  ExceptionList = local_14;
  return;
}

