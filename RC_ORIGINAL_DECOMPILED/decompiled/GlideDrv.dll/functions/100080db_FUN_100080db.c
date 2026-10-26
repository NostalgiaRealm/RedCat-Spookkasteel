/*
 * FUN_100080db at 100080db
 * undefined4 __cdecl FUN_100080db(uint param_1)
 * Address ranges: 100080db-1000816d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100080db(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_101f5a80 <= param_1) {
LAB_1000815c:
    pDVar3 = FUN_10007de8();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000815c;
  FUN_1000805a(param_1);
  if ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10008018(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10008151;
    pDVar3 = FUN_10007df1();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10007de8();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10008151:
  FUN_100080b9(param_1);
  return uVar5;
}

