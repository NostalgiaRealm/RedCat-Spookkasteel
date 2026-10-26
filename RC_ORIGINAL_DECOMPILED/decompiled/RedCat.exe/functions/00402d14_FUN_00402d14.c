/*
 * FUN_00402d14 at 00402d14
 * DWORD __cdecl FUN_00402d14(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 00402d14-00402dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_00402d14(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_00409480) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_00404508(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        DAT_00407f64 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_00404427(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return 0xffffffff;
}

