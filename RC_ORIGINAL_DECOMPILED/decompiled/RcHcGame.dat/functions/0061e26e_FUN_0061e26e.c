/*
 * FUN_0061e26e at 0061e26e
 * undefined FUN_0061e26e(void)
 * Address ranges: 0061e26e-0061e31e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_0061e26e(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LONG local_8;
  
  if (param_1 < DAT_00747c60) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_0061e304;
    local_8 = param_3;
    hFile = (HANDLE)FUN_0061dead(param_1);
    if (hFile != (HANDLE)0xffffffff) {
      DVar3 = SetFilePointer(hFile,param_2,&local_8,param_4);
      if (DVar3 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          FUN_0061ba49(DVar2);
          goto LAB_0061e315;
        }
      }
      pbVar1 = (byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_0061e31b;
    }
    DAT_0070ff98 = 9;
  }
  else {
LAB_0061e304:
    DAT_0070ff9c = 0;
    DAT_0070ff98 = 9;
  }
LAB_0061e315:
  DVar3 = 0xffffffff;
  local_8 = -1;
LAB_0061e31b:
  return CONCAT44(local_8,DVar3);
}

