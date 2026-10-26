/*
 * FUN_1000c696 at 1000c696
 * undefined __cdecl FUN_1000c696(uint param_1)
 * Address ranges: 1000c696-1000c6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000c696(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_101c3cc0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

