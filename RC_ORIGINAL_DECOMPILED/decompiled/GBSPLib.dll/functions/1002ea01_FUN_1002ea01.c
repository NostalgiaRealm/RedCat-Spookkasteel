/*
 * FUN_1002ea01 at 1002ea01
 * undefined FUN_1002ea01(void)
 * Address ranges: 1002ea01-1002ea1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ea01(void)

{
  FUN_1002e7ad();
  if (DAT_1003f438 != 0xffffffff) {
    TlsFree(DAT_1003f438);
    DAT_1003f438 = 0xffffffff;
  }
  return;
}

