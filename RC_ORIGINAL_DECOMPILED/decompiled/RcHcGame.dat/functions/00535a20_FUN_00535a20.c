/*
 * FUN_00535a20 at 00535a20
 * undefined FUN_00535a20(void)
 * Address ranges: 00535a20-00535a31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00535a20(int *param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
  (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}

