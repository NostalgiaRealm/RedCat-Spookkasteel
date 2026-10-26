/*
 * FUN_10029bfd at 10029bfd
 * undefined FUN_10029bfd(void)
 * Address ranges: 10029bfd-10029c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029bfd(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1002e819(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

