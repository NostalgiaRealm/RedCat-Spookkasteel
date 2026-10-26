/*
 * FUN_1002e7ad at 1002e7ad
 * undefined FUN_1002e7ad(void)
 * Address ranges: 1002e7ad-1002e818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e7ad(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1003f378;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1003f3bc)) && (ppuVar1 != &PTR_DAT_1003f3ac)) &&
       ((ppuVar1 != &PTR_DAT_1003f39c && (ppuVar1 != &PTR_DAT_1003f37c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100284b6(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1003f438);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003f39c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003f3ac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003f3bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003f37c);
  return;
}

