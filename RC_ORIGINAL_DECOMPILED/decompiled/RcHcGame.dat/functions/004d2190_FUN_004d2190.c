/*
 * FUN_004d2190 at 004d2190
 * undefined FUN_004d2190(void)
 * Address ranges: 004d2190-004d21cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004d2190(undefined4 *param_1,undefined4 param_2)

{
  FUN_004cfad0(param_2);
  param_1[0x5d] = 0xbf800000;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((int)param_1 + 0x16d) = 0;
  param_1[0x5c] = 0;
  *param_1 = &PTR_FUN_0064f014;
  return param_1;
}

