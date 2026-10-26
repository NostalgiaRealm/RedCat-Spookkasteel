/*
 * FUN_1000ab8b at 1000ab8b
 * undefined __stdcall FUN_1000ab8b(void)
 * Address ranges: 1000ab8b-1000aba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ab8b(void)

{
  FUN_1000a0ee();
  if (DAT_10015c28 != 0xffffffff) {
    TlsFree(DAT_10015c28);
    DAT_10015c28 = 0xffffffff;
  }
  return;
}

