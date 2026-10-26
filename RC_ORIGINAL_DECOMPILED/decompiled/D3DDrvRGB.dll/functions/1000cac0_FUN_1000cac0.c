/*
 * FUN_1000cac0 at 1000cac0
 * undefined __stdcall FUN_1000cac0(void)
 * Address ranges: 1000cac0-1000cadd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cac0(void)

{
  FUN_1000b25e();
  if (DAT_100190f0 != 0xffffffff) {
    TlsFree(DAT_100190f0);
    DAT_100190f0 = 0xffffffff;
  }
  return;
}

