/*
 * FUN_1001e16e at 1001e16e
 * undefined FUN_1001e16e(void)
 * Address ranges: 1001e16e-1001e18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e16e(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1020fc40)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

