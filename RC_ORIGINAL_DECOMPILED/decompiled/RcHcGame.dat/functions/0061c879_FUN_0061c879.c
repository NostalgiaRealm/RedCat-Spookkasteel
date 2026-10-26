/*
 * FUN_0061c879 at 0061c879
 * undefined FUN_0061c879(void)
 * Address ranges: 0061c879-0061c912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_0061c879(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  
  if (param_1 < DAT_00747c60) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0061dead(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        DAT_0070ff98 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        DVar3 = GetLastError();
      }
      else {
        DVar3 = 0;
      }
      if (DVar3 != 0) {
        FUN_0061ba49(DVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_0070ff9c = 0;
  DAT_0070ff98 = 9;
  return 0xffffffff;
}

