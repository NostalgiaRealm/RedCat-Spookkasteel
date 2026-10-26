/*
 * FUN_00402960 at 00402960
 * undefined FUN_00402960(void)
 * Address ranges: 00402960-0040298c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00402960(undefined4 *param_1,undefined4 param_2)

{
  FUN_005ab4a0();
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  param_1[7] = 0;
  param_1[9] = param_2;
  *param_1 = &PTR_FUN_0064a3a8;
  return param_1;
}

