/*
 * FUN_1000b311 at 1000b311
 * undefined __stdcall FUN_1000b311(void)
 * Address ranges: 1000b311-1000b349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b311(void)

{
  if ((DAT_101c370c == 1) || ((DAT_101c370c == 0 && (DAT_101c3710 == 1)))) {
    FUN_1000b34a(0xfc);
    if (DAT_101c38d4 != (code *)0x0) {
      (*DAT_101c38d4)();
    }
    FUN_1000b34a(0xff);
  }
  return;
}

