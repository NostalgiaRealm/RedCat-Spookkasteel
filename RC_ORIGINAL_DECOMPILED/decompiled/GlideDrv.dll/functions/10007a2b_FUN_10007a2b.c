/*
 * FUN_10007a2b at 10007a2b
 * undefined __stdcall FUN_10007a2b(void)
 * Address ranges: 10007a2b-10007a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007a2b(void)

{
  if ((DAT_100e3a74 == 1) || ((DAT_100e3a74 == 0 && (DAT_100e3a78 == 1)))) {
    FUN_10007a64(0xfc);
    if (DAT_100e3c44 != (code *)0x0) {
      (*DAT_100e3c44)();
    }
    FUN_10007a64(0xff);
  }
  return;
}

