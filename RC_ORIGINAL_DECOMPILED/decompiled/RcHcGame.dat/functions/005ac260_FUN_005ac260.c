/*
 * FUN_005ac260 at 005ac260
 * undefined FUN_005ac260(void)
 * Address ranges: 005ac260-005ac2b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005ac260(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005ab4a0();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 5) = local_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = local_1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = local_1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x14) = local_1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_0065010c;
  return param_1;
}

