/*
 * FUN_1002b453 at 1002b453
 * undefined FUN_1002b453(void)
 * Address ranges: 1002b453-1002b4c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_1002b453(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)FUN_100312ed(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_1002b3dc();
    *puVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
    }
    else {
      DVar4 = 0;
    }
    if (DVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1002b369(DVar4);
  }
  return 0xffffffff;
}

