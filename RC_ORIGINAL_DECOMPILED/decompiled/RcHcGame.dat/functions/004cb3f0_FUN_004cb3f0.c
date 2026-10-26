/*
 * FUN_004cb3f0 at 004cb3f0
 * undefined FUN_004cb3f0(void)
 * Address ranges: 004cb3f0-004cb411
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cb3f0(int param_1)

{
  if ((*(char *)(param_1 + 0x16e) != '\0') &&
     ((*(int *)(param_1 + 0x168) == 1 || (*(int *)(param_1 + 0x168) == 5)))) {
    FUN_004cb110();
  }
  return;
}

