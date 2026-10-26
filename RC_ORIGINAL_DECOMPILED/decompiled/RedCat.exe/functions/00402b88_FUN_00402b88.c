/*
 * FUN_00402b88 at 00402b88
 * undefined __stdcall FUN_00402b88(void)
 * Address ranges: 00402b88-00402bc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402b88(void)

{
  if ((DAT_00407fb8 == 1) || ((DAT_00407fb8 == 0 && (DAT_00407234 == 1)))) {
    FUN_00402bc1(0xfc);
    if (DAT_004080c8 != (code *)0x0) {
      (*DAT_004080c8)();
    }
    FUN_00402bc1(0xff);
  }
  return;
}

