/*
 * FUN_10007490 at 10007490
 * undefined __cdecl FUN_10007490(int param_1)
 * Address ranges: 10007490-100074a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007490(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}

