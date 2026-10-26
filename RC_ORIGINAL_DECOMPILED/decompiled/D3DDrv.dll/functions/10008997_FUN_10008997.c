/*
 * FUN_10008997 at 10008997
 * undefined __cdecl FUN_10008997(uint param_1)
 * Address ranges: 10008997-100089c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008997(uint param_1)

{
  if ((0x10015847 < param_1) && (param_1 < 0x10015aa9)) {
    FUN_1000a15a(((int)(param_1 + 0xeffea7b8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

