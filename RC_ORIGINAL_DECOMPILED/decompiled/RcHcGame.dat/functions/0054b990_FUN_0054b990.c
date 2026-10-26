/*
 * FUN_0054b990 at 0054b990
 * undefined FUN_0054b990(void)
 * Address ranges: 0054b990-0054b9a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0054b990(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
}

