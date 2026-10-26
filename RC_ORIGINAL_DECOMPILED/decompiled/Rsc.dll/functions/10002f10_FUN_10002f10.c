/*
 * FUN_10002f10 at 10002f10
 * undefined __cdecl FUN_10002f10(int param_1, int param_2)
 * Address ranges: 10002f10-10002f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002f10(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10007490(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

