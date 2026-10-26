/*
 * FUN_10004589 at 10004589
 * undefined4 __cdecl FUN_10004589(uint param_1)
 * Address ranges: 10004589-1000460b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10004589(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10008018(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10008018(2);
      iVar2 = FUN_10008018(1);
      if (iVar2 == iVar1) goto LAB_100045d7;
    }
    hObject = (HANDLE)FUN_10008018(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100045d9;
    }
  }
LAB_100045d7:
  DVar4 = 0;
LAB_100045d9:
  FUN_10007f99(param_1);
  *(undefined1 *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10007d75(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

