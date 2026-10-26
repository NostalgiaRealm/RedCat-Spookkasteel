/*
 * FUN_004e5650 at 004e5650
 * undefined FUN_004e5650(void)
 * Address ranges: 004e5650-004e5670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f378 slot 18 for .?AVCAdamWorld@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f378 slot 18 for
   .?AVCAdamWorld@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004e5650(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xfc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}

