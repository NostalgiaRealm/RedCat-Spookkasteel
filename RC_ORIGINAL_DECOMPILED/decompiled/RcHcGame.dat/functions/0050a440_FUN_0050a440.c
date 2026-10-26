/*
 * FUN_0050a440 at 0050a440
 * undefined FUN_0050a440(void)
 * Address ranges: 0050a440-0050a452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0050a440(int param_1)

{
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
}

