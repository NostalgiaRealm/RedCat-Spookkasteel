/*
 * FUN_0061ad82 at 0061ad82
 * undefined FUN_0061ad82(void)
 * Address ranges: 0061ad82-0061ae34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061ad82(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00747c60 <= param_1) {
    DAT_0070ff9c = 0;
    DAT_0070ff98 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_0070ff98 = 9;
    DAT_0070ff9c = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0061dead(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0061dead(2);
      iVar2 = FUN_0061dead(1);
      if (iVar2 == iVar1) goto LAB_0061adfb;
    }
    hObject = (HANDLE)FUN_0061dead(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0061adfd;
    }
  }
LAB_0061adfb:
  DVar4 = 0;
LAB_0061adfd:
  FUN_0061de33(param_1);
  *(undefined1 *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0061ba49(DVar4);
  return 0xffffffff;
}

