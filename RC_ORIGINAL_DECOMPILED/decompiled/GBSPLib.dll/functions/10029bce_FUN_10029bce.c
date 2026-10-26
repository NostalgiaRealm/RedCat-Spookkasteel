/*
 * FUN_10029bce at 10029bce
 * undefined FUN_10029bce(void)
 * Address ranges: 10029bce-10029bfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029bce(uint param_1)

{
  if ((0x1003cb57 < param_1) && (param_1 < 0x1003cdb9)) {
    FUN_1002e819(((int)(param_1 + 0xeffc34a8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

