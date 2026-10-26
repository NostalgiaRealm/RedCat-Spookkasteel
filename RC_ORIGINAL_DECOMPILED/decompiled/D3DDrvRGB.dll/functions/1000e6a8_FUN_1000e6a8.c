/*
 * FUN_1000e6a8 at 1000e6a8
 * undefined4 __cdecl FUN_1000e6a8(uint param_1)
 * Address ranges: 1000e6a8-1000e73a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000e6a8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_100ec800 <= param_1) {
LAB_1000e729:
    pDVar3 = FUN_1000e3b5();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000e729;
  FUN_1000e627(param_1);
  if ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000e5e5(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000e71e;
    pDVar3 = FUN_1000e3be();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000e3b5();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000e71e:
  FUN_1000e686(param_1);
  return uVar5;
}

