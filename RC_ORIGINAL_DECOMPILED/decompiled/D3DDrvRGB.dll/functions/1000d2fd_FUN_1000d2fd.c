/*
 * FUN_1000d2fd at 1000d2fd
 * undefined __stdcall FUN_1000d2fd(void)
 * Address ranges: 1000d2fd-1000d335
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d2fd(void)

{
  if ((DAT_100ec148 == 1) || ((DAT_100ec148 == 0 && (DAT_100ec14c == 1)))) {
    FUN_1000d336(0xfc);
    if (DAT_100ec314 != (code *)0x0) {
      (*DAT_100ec314)();
    }
    FUN_1000d336(0xff);
  }
  return;
}

