/*
 * FUN_100313b0 at 100313b0
 * undefined FUN_100313b0(void)
 * Address ranges: 100313b0-10031442
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100313b0(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_1052aac0 <= param_1) {
LAB_10031431:
    puVar4 = (undefined4 *)FUN_1002b3dc();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_10031431;
  FUN_1003132f(param_1);
  if ((*(byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_100312ed(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_10031426;
    pDVar3 = (DWORD *)FUN_1002b3e5();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_1002b3dc();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_10031426:
  FUN_1003138e(param_1);
  return uVar6;
}

