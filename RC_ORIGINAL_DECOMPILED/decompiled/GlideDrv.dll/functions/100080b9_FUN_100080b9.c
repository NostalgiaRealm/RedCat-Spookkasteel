/*
 * FUN_100080b9 at 100080b9
 * undefined __cdecl FUN_100080b9(uint param_1)
 * Address ranges: 100080b9-100080da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100080b9(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_101f5980)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

