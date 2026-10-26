/*
 * FUN_0040e9ec at 0040e9ec
 * undefined __stdcall FUN_0040e9ec(void)
 * Address ranges: 0040e9ec-0040ea24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040e9ec(void)

{
  if ((DAT_004134e0 == 1) || ((DAT_004134e0 == 0 && (DAT_00413134 == 1)))) {
    FUN_0040ea25(0xfc);
    if (DAT_00413670 != (code *)0x0) {
      (*DAT_00413670)();
    }
    FUN_0040ea25(0xff);
  }
  return;
}

