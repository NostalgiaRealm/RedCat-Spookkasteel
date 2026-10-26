/*
 * FUN_00479540 at 00479540
 * undefined FUN_00479540(void)
 * Address ranges: 00479540-0047955c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64dc04 slot 19 for .?AVCRcSavePoint@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64dc04 slot 19 for
   .?AVCRcSavePoint@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00479540(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}

