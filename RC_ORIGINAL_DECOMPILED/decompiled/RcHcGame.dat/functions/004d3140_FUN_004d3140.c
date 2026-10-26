/*
 * FUN_004d3140 at 004d3140
 * undefined FUN_004d3140(void)
 * Address ranges: 004d3140-004d316f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004d3140(int *param_1)

{
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = -0x40800000;
  FUN_004d21f0(param_1[0x5a]);
  (**(code **)(*param_1 + 0x54))();
  return;
}

