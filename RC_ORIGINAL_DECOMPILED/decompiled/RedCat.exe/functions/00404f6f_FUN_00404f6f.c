/*
 * FUN_00404f6f at 00404f6f
 * undefined4 __cdecl FUN_00404f6f(uint param_1)
 * Address ranges: 00404f6f-00405021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404f6f(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00409480 <= param_1) {
    _DAT_00407f68 = 0;
    DAT_00407f64 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_00407f64 = 9;
    _DAT_00407f68 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_00404508(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00404508(2);
      iVar2 = FUN_00404508(1);
      if (iVar2 == iVar1) goto LAB_00404fe8;
    }
    hObject = (HANDLE)FUN_00404508(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00404fea;
    }
  }
LAB_00404fe8:
  DVar4 = 0;
LAB_00404fea:
  FUN_0040448e(param_1);
  *(undefined1 *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00404427(DVar4);
  return 0xffffffff;
}

