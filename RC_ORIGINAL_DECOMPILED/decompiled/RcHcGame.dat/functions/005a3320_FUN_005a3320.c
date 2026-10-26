/*
 * FUN_005a3320 at 005a3320
 * undefined FUN_005a3320(void)
 * Address ranges: 005a3320-005a3348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005a3320(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005ab4a0();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = local_1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_006500c8;
  return param_1;
}

