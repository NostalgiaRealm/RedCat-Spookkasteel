/*
 * FUN_00610192 at 00610192
 * undefined FUN_00610192(void)
 * Address ranges: 00610192-006101ce;006101d6-006101e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00610192(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651e20;
  puStack_10 = &LAB_006106d0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_006b2c74 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_006b2c74)();
  }
  local_8 = 0xffffffff;
  FUN_0061013c();
  return;
}

