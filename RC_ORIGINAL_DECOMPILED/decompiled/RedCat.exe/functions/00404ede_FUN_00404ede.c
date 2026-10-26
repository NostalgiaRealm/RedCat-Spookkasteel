/*
 * FUN_00404ede at 00404ede
 * undefined4 __cdecl FUN_00404ede(uint param_1)
 * Address ranges: 00404ede-00404f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404ede(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = _DAT_00407f68;
  if ((param_1 < DAT_00409480) &&
     ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_00404508(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  _DAT_00407f68 = DVar2;
  DAT_00407f64 = 9;
  return 0xffffffff;
}

