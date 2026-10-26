/*
 * FUN_10008a18 at 10008a18
 * undefined __cdecl FUN_10008a18(int param_1, int param_2)
 * Address ranges: 10008a18-10008a3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008a18(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a1bb(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

