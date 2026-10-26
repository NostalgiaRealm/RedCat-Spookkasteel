/*
 * FUN_1001f503 at 1001f503
 * undefined FUN_1001f503(void)
 * Address ranges: 1001f503-1001f585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001f503(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1001e0cd(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001e0cd(2);
      iVar2 = FUN_1001e0cd(1);
      if (iVar2 == iVar1) goto LAB_1001f551;
    }
    hObject = (HANDLE)FUN_1001e0cd(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001f553;
    }
  }
LAB_1001f551:
  DVar4 = 0;
LAB_1001f553:
  FUN_1001e04e(param_1);
  *(undefined1 *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1001de8e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

