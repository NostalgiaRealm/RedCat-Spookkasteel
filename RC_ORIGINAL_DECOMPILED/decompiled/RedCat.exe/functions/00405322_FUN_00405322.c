/*
 * FUN_00405322 at 00405322
 * undefined4 __cdecl FUN_00405322(LPCSTR param_1, byte param_2)
 * Address ranges: 00405322-00405365
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00405322(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_00404427(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_00407f64 = 0xd;
    _DAT_00407f68 = 5;
  }
  return 0xffffffff;
}

