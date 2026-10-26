/*
 * FUN_004cea00 at 004cea00
 * undefined FUN_004cea00(void)
 * Address ranges: 004cea00-004cea63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004cea00(undefined4 *param_1,undefined4 param_2)

{
  FUN_004cfad0(param_2);
  param_1[0x5a] = 1;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((int)param_1 + 0x16d) = 0;
  *(undefined1 *)((int)param_1 + 0x16e) = 0;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *param_1 = &PTR_FUN_0064ef44;
  return param_1;
}

