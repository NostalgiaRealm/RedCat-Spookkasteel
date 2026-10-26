/*
 * FUN_1001f062 at 1001f062
 * undefined FUN_1001f062(void)
 * Address ranges: 1001f062-1001f0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001f062(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_1020fd40 <= param_1) {
LAB_1001f0e3:
    puVar4 = (undefined4 *)FUN_1001df01();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_1001f0e3;
  FUN_1001e10f(param_1);
  if ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_1001e0cd(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_1001f0d8;
    pDVar3 = (DWORD *)FUN_1001df0a();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_1001df01();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_1001f0d8:
  FUN_1001e16e(param_1);
  return uVar6;
}

