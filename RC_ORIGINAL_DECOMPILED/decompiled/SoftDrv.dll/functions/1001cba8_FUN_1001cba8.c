/*
 * FUN_1001cba8 at 1001cba8
 * undefined FUN_1001cba8(void)
 * Address ranges: 1001cba8-1001cbca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cba8(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001a434(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

