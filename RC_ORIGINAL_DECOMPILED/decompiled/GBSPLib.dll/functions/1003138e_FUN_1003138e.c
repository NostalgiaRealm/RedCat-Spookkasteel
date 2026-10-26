/*
 * FUN_1003138e at 1003138e
 * undefined FUN_1003138e(void)
 * Address ranges: 1003138e-100313af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003138e(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1052a9c0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

