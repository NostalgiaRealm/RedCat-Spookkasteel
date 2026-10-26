/*
 * FUN_00451230 at 00451230
 * undefined FUN_00451230(void)
 * Address ranges: 00451230-00451244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2d0 slot 1 for .?AVCRcHudIconAnimation@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2d0 slot 1 for
   .?AVCRcHudIconAnimation@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00451230(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(uint *)(param_1 + 0x2c) - 1;
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}

