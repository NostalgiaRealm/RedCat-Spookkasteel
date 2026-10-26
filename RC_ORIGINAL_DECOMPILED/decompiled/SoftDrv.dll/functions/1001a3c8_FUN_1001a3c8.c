/*
 * FUN_1001a3c8 at 1001a3c8
 * undefined FUN_1001a3c8(void)
 * Address ranges: 1001a3c8-1001a433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a3c8(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100239c8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10023a0c)) && (ppuVar1 != &PTR_DAT_100239fc)) &&
       ((ppuVar1 != &PTR_DAT_100239ec && (ppuVar1 != &PTR_DAT_100239cc)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10018dc8(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10023a88);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239ec);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10023a0c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239cc);
  return;
}

