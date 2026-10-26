/*
 * FUN_100089c6 at 100089c6
 * undefined __cdecl FUN_100089c6(int param_1, int param_2)
 * Address ranges: 100089c6-100089e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100089c6(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a15a(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

