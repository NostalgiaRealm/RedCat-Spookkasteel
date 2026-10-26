/*
 * FUN_005117a0 at 005117a0
 * undefined FUN_005117a0(void)
 * Address ranges: 005117a0-005117c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005117a0(int param_1)

{
  if ((*(int *)(param_1 + 0x18c) != 0) &&
     (0 < (int)(*(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c) & 0xfffffffcU))) {
    *(undefined1 *)(param_1 + 0x1d8) = 1;
  }
  return;
}

