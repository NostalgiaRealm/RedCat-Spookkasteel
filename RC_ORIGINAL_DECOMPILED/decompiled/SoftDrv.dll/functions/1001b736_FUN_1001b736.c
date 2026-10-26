/*
 * FUN_1001b736 at 1001b736
 * undefined FUN_1001b736(void)
 * Address ranges: 1001b736-1001b753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b736(void)

{
  FUN_1001a3c8();
  if (DAT_10023aa8 != 0xffffffff) {
    TlsFree(DAT_10023aa8);
    DAT_10023aa8 = 0xffffffff;
  }
  return;
}

