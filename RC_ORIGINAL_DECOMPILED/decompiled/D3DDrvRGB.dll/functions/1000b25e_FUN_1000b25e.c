/*
 * FUN_1000b25e at 1000b25e
 * undefined __stdcall FUN_1000b25e(void)
 * Address ranges: 1000b25e-1000b2c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b25e(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10019024;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10019068)) && (ppuVar1 != &PTR_DAT_10019058)) &&
       ((ppuVar1 != &PTR_DAT_10019048 && (ppuVar1 != &PTR_DAT_10019028)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10008c95(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100190e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019048);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019058);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019068);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019028);
  return;
}

