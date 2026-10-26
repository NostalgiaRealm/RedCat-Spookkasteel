/*
 * FUN_10009a40 at 10009a40
 * undefined __cdecl FUN_10009a40(uint param_1)
 * Address ranges: 10009a40-10009a6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10009a40(uint param_1)

{
  if ((0x10018d07 < param_1) && (param_1 < 0x10018f69)) {
    FUN_1000b2ca(((int)(param_1 + 0xeffe72f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

