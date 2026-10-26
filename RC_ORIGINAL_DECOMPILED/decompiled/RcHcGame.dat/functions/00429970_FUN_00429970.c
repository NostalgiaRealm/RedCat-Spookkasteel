/*
 * FUN_00429970 at 00429970
 * undefined FUN_00429970(void)
 * Address ranges: 00429970-00429982
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00429970(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1a0) >> 8),
                  *(int *)(*(int *)(param_1 + 0x1a0) + 0x18) != 0);
}

