/*
 * FUN_10009ac1 at 10009ac1
 * undefined __cdecl FUN_10009ac1(int param_1, int param_2)
 * Address ranges: 10009ac1-10009ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10009ac1(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000b32b(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

