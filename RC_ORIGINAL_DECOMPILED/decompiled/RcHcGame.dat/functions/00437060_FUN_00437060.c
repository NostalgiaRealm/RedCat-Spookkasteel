/*
 * FUN_00437060 at 00437060
 * undefined FUN_00437060(void)
 * Address ranges: 00437060-00437080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00437060(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xfc) = *param_2;
  *(undefined4 *)(param_1 + 0x100) = param_2[1];
  *(undefined4 *)(param_1 + 0x104) = param_2[2];
  return;
}

