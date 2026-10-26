/*
 * FUN_10004509 at 10004509
 * undefined __cdecl FUN_10004509(int param_1, int param_2)
 * Address ranges: 10004509-1000452b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004509(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100061d2(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

