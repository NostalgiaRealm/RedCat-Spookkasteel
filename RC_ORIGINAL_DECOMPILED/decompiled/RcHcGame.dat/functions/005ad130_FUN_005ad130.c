/*
 * FUN_005ad130 at 005ad130
 * undefined FUN_005ad130(void)
 * Address ranges: 005ad130-005ad199
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ad130(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645e1b;
  local_c = ExceptionList;
  if (DAT_006ca01c == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x44);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_006ca01c = FUN_005a44a0(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_006ca01c = 0;
  }
  ExceptionList = local_c;
  return;
}

