/*
 * FUN_10007760 at 10007760
 * undefined __stdcall FUN_10007760(void)
 * Address ranges: 10007760-10007788
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007760(void)

{
  FUN_10007350();
  if (DAT_1002ff5c != 0xffffffff) {
    TlsFree(DAT_1002ff5c);
    DAT_1002ff5c = 0xffffffff;
  }
  return;
}

