/*
 * FUN_00453610 at 00453610
 * undefined FUN_00453610(void)
 * Address ranges: 00453610-00453627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 1 for .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 1 for
   .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred. */

int __fastcall FUN_00453610(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac) + 1;
  *(int *)(param_1 + 0xac) = iVar1 % 5;
  return iVar1 / 5;
}

