/*
 * FUN_004cb9a0 at 004cb9a0
 * undefined FUN_004cb9a0(void)
 * Address ranges: 004cb9a0-004cb9f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cb9a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_004caf10(*(undefined4 *)(param_1 + 0x174));
  if (*(char *)(param_1 + 0x16d) != '\0') {
    FUN_004d0770(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x168) = 5;
    return;
  }
  FUN_004d0770(0);
  *(undefined4 *)(param_1 + 0x168) = 1;
  return;
}

