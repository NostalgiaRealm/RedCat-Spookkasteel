/*
 * FUN_1000e686 at 1000e686
 * undefined __cdecl FUN_1000e686(uint param_1)
 * Address ranges: 1000e686-1000e6a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000e686(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100ec700)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

