/*
 * FUN_00479510 at 00479510
 * undefined FUN_00479510(void)
 * Address ranges: 00479510-00479530
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00479510(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}

