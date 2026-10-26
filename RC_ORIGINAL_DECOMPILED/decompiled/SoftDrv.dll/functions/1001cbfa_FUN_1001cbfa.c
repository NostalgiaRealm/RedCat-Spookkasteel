/*
 * FUN_1001cbfa at 1001cbfa
 * undefined FUN_1001cbfa(void)
 * Address ranges: 1001cbfa-1001cc1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cbfa(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001a495(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

