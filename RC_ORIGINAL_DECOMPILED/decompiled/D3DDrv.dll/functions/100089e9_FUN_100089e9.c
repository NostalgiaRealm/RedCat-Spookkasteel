/*
 * FUN_100089e9 at 100089e9
 * undefined __cdecl FUN_100089e9(uint param_1)
 * Address ranges: 100089e9-10008a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100089e9(uint param_1)

{
  if ((0x10015847 < param_1) && (param_1 < 0x10015aa9)) {
    FUN_1000a1bb(((int)(param_1 + 0xeffea7b8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

