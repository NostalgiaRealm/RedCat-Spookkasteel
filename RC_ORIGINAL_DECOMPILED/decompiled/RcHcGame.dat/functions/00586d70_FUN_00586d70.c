/*
 * FUN_00586d70 at 00586d70
 * undefined FUN_00586d70(void)
 * Address ranges: 00586d70-00586d82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00586d70(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 4;
}

