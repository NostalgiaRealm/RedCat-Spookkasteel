/*
 * FUN_1000cbf8 at 1000cbf8
 * undefined __stdcall FUN_1000cbf8(void)
 * Address ranges: 1000cbf8-1000cc3f;1000cc4b-1000cc58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cbf8(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10013320;
  puStack_10 = &LAB_1000c124;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1000caf1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1000caf1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100103b4();
  return;
}

