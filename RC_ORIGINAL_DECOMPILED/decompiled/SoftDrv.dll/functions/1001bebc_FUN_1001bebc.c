/*
 * FUN_1001bebc at 1001bebc
 * undefined FUN_1001bebc(void)
 * Address ranges: 1001bebc-1001bef4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001bebc(void)

{
  if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
    FUN_1001bef5(0xfc);
    if (DAT_10025e64 != (code *)0x0) {
      (*DAT_10025e64)();
    }
    FUN_1001bef5(0xff);
  }
  return;
}

