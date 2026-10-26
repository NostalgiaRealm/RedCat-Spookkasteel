/*
 * FUN_00454170 at 00454170
 * undefined FUN_00454170(void)
 * Address ranges: 00454170-004541ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d380 slot 4 for .?AVCRcHudIconInstance@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d380 slot 4 for
   .?AVCRcHudIconInstance@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00454170(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_20 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
  local_1c = *(int *)(iVar1 + 0x3c) + local_20;
  local_18 = *(int *)(param_1 + 0x20);
  local_14 = *(int *)(iVar1 + 0x40) + local_18;
  local_10 = *(int *)(iVar1 + 0x34);
  local_c = *(int *)(iVar1 + 0x3c) + local_10;
  local_8 = *(int *)(iVar1 + 0x38);
  local_4 = *(int *)(iVar1 + 0x40) + local_8;
  FUN_00454090(&local_10,&local_20);
  return;
}

