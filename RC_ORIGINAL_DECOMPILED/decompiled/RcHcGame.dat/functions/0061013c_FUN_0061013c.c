/*
 * FUN_0061013c at 0061013c
 * undefined FUN_0061013c(void)
 * Address ranges: 0061013c-00610178;00610180-00610191
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061013c(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651e08;
  puStack_10 = &LAB_006106d0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_00710018 != (code *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*DAT_00710018)();
  }
  local_8 = 0xffffffff;
  FUN_0061cec8();
  return;
}

