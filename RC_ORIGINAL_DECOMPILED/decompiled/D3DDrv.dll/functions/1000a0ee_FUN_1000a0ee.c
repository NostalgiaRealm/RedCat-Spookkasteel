/*
 * FUN_1000a0ee at 1000a0ee
 * undefined __stdcall FUN_1000a0ee(void)
 * Address ranges: 1000a0ee-1000a159
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a0ee(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10015b64;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10015ba8)) && (ppuVar1 != &PTR_DAT_10015b98)) &&
       ((ppuVar1 != &PTR_DAT_10015b88 && (ppuVar1 != &PTR_DAT_10015b68)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000824b(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10015c24);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015b88);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015b98);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015ba8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015b68);
  return;
}

