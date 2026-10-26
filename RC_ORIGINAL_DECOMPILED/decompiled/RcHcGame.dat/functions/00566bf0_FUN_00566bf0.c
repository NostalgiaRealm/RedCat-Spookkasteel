/*
 * FUN_00566bf0 at 00566bf0
 * undefined FUN_00566bf0(void)
 * Address ranges: 00566bf0-00566c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00566bf0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640100;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00566c70();
  local_4 = 1;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

