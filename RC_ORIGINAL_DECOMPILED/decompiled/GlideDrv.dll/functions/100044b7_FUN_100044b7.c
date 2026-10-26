/*
 * FUN_100044b7 at 100044b7
 * undefined __cdecl FUN_100044b7(int param_1, int param_2)
 * Address ranges: 100044b7-100044d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100044b7(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006171(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

