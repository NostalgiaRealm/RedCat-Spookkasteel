/*
 * FUN_00401a60 at 00401a60
 * undefined FUN_00401a60(void)
 * Address ranges: 00401a60-00401ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401a60(uint param_1)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0061f8d0;
  pvStack_10 = ExceptionList;
  uVar1 = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + 2;
  local_8 = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(uVar1);
  FUN_00401ae0();
  return;
}

