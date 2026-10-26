/*
 * FUN_10029ccf at 10029ccf
 * undefined FUN_10029ccf(void)
 * Address ranges: 10029ccf-10029d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10029ccf(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100312ed(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100312ed(2);
      iVar2 = FUN_100312ed(1);
      if (iVar2 == iVar1) goto LAB_10029d1d;
    }
    hObject = (HANDLE)FUN_100312ed(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10029d1f;
    }
  }
LAB_10029d1d:
  DVar4 = 0;
LAB_10029d1f:
  FUN_1003126e(param_1);
  *(undefined1 *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1002b369(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

