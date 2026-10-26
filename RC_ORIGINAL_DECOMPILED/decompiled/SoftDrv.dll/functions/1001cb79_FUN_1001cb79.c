/*
 * FUN_1001cb79 at 1001cb79
 * undefined FUN_1001cb79(void)
 * Address ranges: 1001cb79-1001cba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cb79(uint param_1)

{
  if ((0x10023b6f < param_1) && (param_1 < 0x10023dd1)) {
    FUN_1001a434(((int)(param_1 + 0xeffdc490) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

