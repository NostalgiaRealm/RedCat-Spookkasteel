/*
 * FUN_005af8e0 at 005af8e0
 * undefined FUN_005af8e0(void)
 * Address ranges: 005af8e0-005af91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005af8e0(undefined1 *param_1)

{
  undefined1 local_d;
  
  local_d = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_d;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

