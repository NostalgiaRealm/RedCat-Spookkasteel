/*
 * FUN_00556530 at 00556530
 * undefined FUN_00556530(void)
 * Address ranges: 00556530-00556551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00556530(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005c8f80();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

