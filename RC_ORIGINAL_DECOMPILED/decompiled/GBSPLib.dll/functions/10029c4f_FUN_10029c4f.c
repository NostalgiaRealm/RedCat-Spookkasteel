/*
 * FUN_10029c4f at 10029c4f
 * undefined FUN_10029c4f(void)
 * Address ranges: 10029c4f-10029c71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029c4f(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1002e87a(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

