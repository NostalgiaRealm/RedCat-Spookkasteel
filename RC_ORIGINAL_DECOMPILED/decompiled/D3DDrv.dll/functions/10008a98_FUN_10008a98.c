/*
 * FUN_10008a98 at 10008a98
 * undefined4 __cdecl FUN_10008a98(uint param_1)
 * Address ranges: 10008a98-10008b1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10008a98(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000c5f5(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000c5f5(2);
      iVar2 = FUN_1000c5f5(1);
      if (iVar2 == iVar1) goto LAB_10008ae6;
    }
    hObject = (HANDLE)FUN_1000c5f5(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10008ae8;
    }
  }
LAB_10008ae6:
  DVar4 = 0;
LAB_10008ae8:
  FUN_1000c576(param_1);
  *(undefined1 *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000c352(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

