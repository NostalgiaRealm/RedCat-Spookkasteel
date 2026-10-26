/*
 * FUN_00566bc0 at 00566bc0
 * undefined FUN_00566bc0(void)
 * Address ranges: 00566bc0-00566be5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00566bc0(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 **)(param_1 + 0x14) = &LAB_00566ba0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

