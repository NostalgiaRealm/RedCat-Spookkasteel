/*
 * FUN_1000c6b8 at 1000c6b8
 * undefined4 __cdecl FUN_1000c6b8(uint param_1)
 * Address ranges: 1000c6b8-1000c74a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000c6b8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_101c3dc0 <= param_1) {
LAB_1000c739:
    pDVar3 = FUN_1000c3c5();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000c739;
  FUN_1000c637(param_1);
  if ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000c5f5(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000c72e;
    pDVar3 = FUN_1000c3ce();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000c3c5();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000c72e:
  FUN_1000c696(param_1);
  return uVar5;
}

