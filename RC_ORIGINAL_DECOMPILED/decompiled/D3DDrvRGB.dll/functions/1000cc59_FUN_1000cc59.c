/*
 * FUN_1000cc59 at 1000cc59
 * undefined __stdcall FUN_1000cc59(void)
 * Address ranges: 1000cc59-1000cc95;1000cc9d-1000ccae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cc59(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10013338;
  puStack_10 = &LAB_1000c124;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100190f4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100190f4)();
  }
  local_8 = 0xffffffff;
  FUN_1000cbf8();
  return;
}

