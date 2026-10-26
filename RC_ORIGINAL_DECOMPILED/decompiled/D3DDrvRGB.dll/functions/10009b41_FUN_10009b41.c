/*
 * FUN_10009b41 at 10009b41
 * undefined4 __cdecl FUN_10009b41(uint param_1)
 * Address ranges: 10009b41-10009bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10009b41(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000e5e5(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000e5e5(2);
      iVar2 = FUN_1000e5e5(1);
      if (iVar2 == iVar1) goto LAB_10009b8f;
    }
    hObject = (HANDLE)FUN_1000e5e5(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10009b91;
    }
  }
LAB_10009b8f:
  DVar4 = 0;
LAB_10009b91:
  FUN_1000e566(param_1);
  *(undefined1 *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000e342(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

