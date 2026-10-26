/*
 * FUN_100072a5 at 100072a5
 * undefined __stdcall FUN_100072a5(void)
 * Address ranges: 100072a5-100072c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100072a5(void)

{
  FUN_10006105();
  if (DAT_10010cb0 != 0xffffffff) {
    TlsFree(DAT_10010cb0);
    DAT_10010cb0 = 0xffffffff;
  }
  return;
}

