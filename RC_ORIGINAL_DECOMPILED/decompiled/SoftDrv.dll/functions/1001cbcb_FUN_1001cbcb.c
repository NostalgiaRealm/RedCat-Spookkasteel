/*
 * FUN_1001cbcb at 1001cbcb
 * undefined FUN_1001cbcb(void)
 * Address ranges: 1001cbcb-1001cbf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cbcb(uint param_1)

{
  if ((0x10023b6f < param_1) && (param_1 < 0x10023dd1)) {
    FUN_1001a495(((int)(param_1 + 0xeffdc490) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

