/*
 * FUN_004112f0 at 004112f0
 * undefined FUN_004112f0(void)
 * Address ranges: 004112f0-00411308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 45 for .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 45 for
   .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred. */

undefined4 __fastcall FUN_004112f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(*(int *)(param_1 + 0x1a0) + 0x2c) == 2) {
    uVar1 = 1;
  }
  return uVar1;
}

