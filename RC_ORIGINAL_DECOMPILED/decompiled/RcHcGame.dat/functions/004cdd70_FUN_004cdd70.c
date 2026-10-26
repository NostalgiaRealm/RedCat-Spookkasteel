/*
 * FUN_004cdd70 at 004cdd70
 * undefined FUN_004cdd70(void)
 * Address ranges: 004cdd70-004cddb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cdd70(int param_1)

{
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x1b8),1,&stack0x00000004);
  if (*(char *)(param_1 + 0x154) != '\0') {
    if (*(int *)(param_1 + 0x16c) == 6) {
      FUN_0059a690();
      return;
    }
    FUN_0059a6c0();
  }
  return;
}

