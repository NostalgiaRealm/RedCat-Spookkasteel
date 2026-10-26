/*
 * FUN_005a7d00 at 005a7d00
 * undefined FUN_005a7d00(void)
 * Address ranges: 005a7d00-005a7d26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a7d00(int param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 1;
    FUN_005a7b30(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),1);
  }
  return;
}

