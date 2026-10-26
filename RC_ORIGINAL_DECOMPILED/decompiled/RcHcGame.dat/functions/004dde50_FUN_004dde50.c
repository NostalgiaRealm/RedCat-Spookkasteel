/*
 * FUN_004dde50 at 004dde50
 * undefined FUN_004dde50(void)
 * Address ranges: 004dde50-004dde8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_004dde50(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005ab4a0();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = local_1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = FUN_005affe0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_0064f194;
  return param_1;
}

