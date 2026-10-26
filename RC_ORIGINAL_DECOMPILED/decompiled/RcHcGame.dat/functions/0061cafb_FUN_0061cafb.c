/*
 * FUN_0061cafb at 0061cafb
 * undefined FUN_0061cafb(void)
 * Address ranges: 0061cafb-0061cb51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061cafb(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = DAT_0070ff9c;
  if ((param_1 < DAT_00747c60) &&
     ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_0061dead(param_1);
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
  DAT_0070ff9c = DVar2;
  DAT_0070ff98 = 9;
  return 0xffffffff;
}

