/*
 * FUN_10009a6f at 10009a6f
 * undefined __cdecl FUN_10009a6f(int param_1, int param_2)
 * Address ranges: 10009a6f-10009a91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10009a6f(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000b2ca(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

