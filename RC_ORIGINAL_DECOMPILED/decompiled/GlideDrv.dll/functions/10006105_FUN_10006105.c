/*
 * FUN_10006105 at 10006105
 * undefined __stdcall FUN_10006105(void)
 * Address ranges: 10006105-10006170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006105(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10010bc0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10010c04)) && (ppuVar1 != &PTR_DAT_10010bf4)) &&
       ((ppuVar1 != &PTR_DAT_10010be4 && (ppuVar1 != &PTR_DAT_10010bc4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003f4c(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10010c80);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010be4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bf4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c04);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bc4);
  return;
}

