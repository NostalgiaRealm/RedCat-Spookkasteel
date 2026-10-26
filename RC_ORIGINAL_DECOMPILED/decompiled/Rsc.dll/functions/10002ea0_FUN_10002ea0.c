/*
 * FUN_10002ea0 at 10002ea0
 * undefined __cdecl FUN_10002ea0(int param_1, int param_2)
 * Address ranges: 10002ea0-10002ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002ea0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100073f0(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

