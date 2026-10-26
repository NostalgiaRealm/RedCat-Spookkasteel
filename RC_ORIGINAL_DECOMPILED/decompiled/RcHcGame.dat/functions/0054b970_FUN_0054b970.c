/*
 * FUN_0054b970 at 0054b970
 * undefined FUN_0054b970(void)
 * Address ranges: 0054b970-0054b982
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0054b970(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

