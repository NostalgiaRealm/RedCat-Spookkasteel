/*
 * FUN_0040d6d5 at 0040d6d5
 * DWORD __cdecl FUN_0040d6d5(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 0040d6d5-0040d76e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_0040d6d5(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_00413f00) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0040d2ca(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_004134e4 = 9;
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
        FUN_0040ca98(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}

