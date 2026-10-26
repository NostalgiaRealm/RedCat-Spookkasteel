/*
 * FUN_004515a0 at 004515a0
 * undefined FUN_004515a0(void)
 * Address ranges: 004515a0-004515b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2e8 slot 1 for .?AVCRcHudIconContainer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2e8 slot 1 for
   .?AVCRcHudIconContainer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004515a0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = param_2;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x2c);
  }
  return;
}

