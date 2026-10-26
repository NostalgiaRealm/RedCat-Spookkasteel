/*
 * FUN_0050c7b0 at 0050c7b0
 * undefined FUN_0050c7b0(void)
 * Address ranges: 0050c7b0-0050c7e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0050c7b0(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005ab4a0();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  param_1[10] = &LAB_00566670;
  *(undefined1 *)(param_1 + 5) = local_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_0064f53c;
  return param_1;
}

