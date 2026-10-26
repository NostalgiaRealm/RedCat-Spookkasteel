/*
 * FUN_0053c680 at 0053c680
 * undefined FUN_0053c680(void)
 * Address ranges: 0053c680-0053c6b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0053c680(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005ab4a0();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  param_1[10] = &LAB_0053c660;
  *(undefined1 *)(param_1 + 5) = local_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_0064f7a8;
  return param_1;
}

