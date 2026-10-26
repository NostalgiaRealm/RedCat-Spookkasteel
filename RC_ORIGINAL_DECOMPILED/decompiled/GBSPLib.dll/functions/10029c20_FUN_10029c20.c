/*
 * FUN_10029c20 at 10029c20
 * undefined FUN_10029c20(void)
 * Address ranges: 10029c20-10029c4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029c20(uint param_1)

{
  if ((0x1003cb57 < param_1) && (param_1 < 0x1003cdb9)) {
    FUN_1002e87a(((int)(param_1 + 0xeffc34a8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

