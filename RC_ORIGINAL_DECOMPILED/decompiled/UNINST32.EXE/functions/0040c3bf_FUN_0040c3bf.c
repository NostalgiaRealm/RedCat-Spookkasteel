/*
 * FUN_0040c3bf at 0040c3bf
 * undefined4 __cdecl FUN_0040c3bf(uint param_1)
 * Address ranges: 0040c3bf-0040c471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040c3bf(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00413f00 <= param_1) {
    DAT_004134e8 = 0;
    _DAT_004134e4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_004134e4 = 9;
    DAT_004134e8 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0040d2ca(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0040d2ca(2);
      iVar2 = FUN_0040d2ca(1);
      if (iVar2 == iVar1) goto LAB_0040c438;
    }
    hObject = (HANDLE)FUN_0040d2ca(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0040c43a;
    }
  }
LAB_0040c438:
  DVar4 = 0;
LAB_0040c43a:
  FUN_0040d250(param_1);
  *(undefined1 *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0040ca98(DVar4);
  return 0xffffffff;
}

