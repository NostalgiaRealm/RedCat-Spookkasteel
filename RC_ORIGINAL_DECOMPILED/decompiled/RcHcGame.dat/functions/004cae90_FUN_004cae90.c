/*
 * FUN_004cae90 at 004cae90
 * undefined FUN_004cae90(void)
 * Address ranges: 004cae90-004caee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004cae90(undefined4 *param_1,undefined4 param_2)

{
  FUN_004cfad0(param_2);
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((int)param_1 + 0x16d) = 0;
  *(undefined1 *)((int)param_1 + 0x16e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = 1;
  *(undefined1 *)((int)param_1 + 0x16f) = 1;
  *param_1 = &PTR_FUN_0064ee54;
  return param_1;
}

