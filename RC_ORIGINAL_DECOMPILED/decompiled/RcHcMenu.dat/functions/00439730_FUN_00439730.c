/*
 * FUN_00439730 at 00439730
 * undefined __register FUN_00439730(int * param_1, undefined4 param_2)
 * Address ranges: 00439730-0043999e;004399a6-004399b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439730(int *param_1,undefined4 param_2)

{
  HWND pHVar1;
  uint uVar2;
  HBRUSH hbr;
  int iVar3;
  tagRECT *ptVar4;
  LONG *pLVar5;
  tagRECT *ptVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  UINT cPoints;
  int iVar8;
  undefined4 uVar9;
  HDC hDC;
  LONG local_40 [4];
  tagRECT local_30;
  tagRECT local_20;
  HDC local_10;
  undefined4 local_c;
  int *local_8;
  
  bVar7 = 0;
  local_c = param_2;
  local_8 = param_1;
  if ((*(char *)((int)param_1 + 0x125) == '\0') && (param_1[0x4b] == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  pHVar1 = (HWND)FUN_00438988(param_1);
  local_10 = GetWindowDC(pHVar1);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  ptVar4 = &local_20;
  pHVar1 = (HWND)FUN_00438988(local_8);
  GetClientRect(pHVar1,ptVar4);
  ptVar4 = &local_30;
  pHVar1 = (HWND)FUN_00438988(local_8);
  GetWindowRect(pHVar1,ptVar4);
  cPoints = 2;
  ptVar4 = &local_30;
  pHVar1 = (HWND)FUN_00438988(local_8);
  MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)ptVar4,cPoints);
  OffsetRect(&local_20,-local_30.left,-local_30.top);
  ExcludeClipRect(local_10,local_20.left,local_20.top,local_20.right,local_20.bottom);
  ptVar4 = &local_30;
  pLVar5 = local_40;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pLVar5 = ptVar4->left;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pLVar5 = pLVar5 + (uint)bVar7 * -2 + 1;
  }
  InflateRect(&local_20,local_8[0x4b],local_8[0x4b]);
  ptVar4 = &local_20;
  ptVar6 = &local_30;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar6->left = ptVar4->left;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
    ptVar6 = (tagRECT *)((int)ptVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  if (*(char *)((int)local_8 + 0x125) != '\0') {
    iVar3 = 0;
    if (*(char *)((int)local_8 + 0x123) != '\0') {
      iVar3 = local_8[0x4a];
    }
    if ((char)local_8[0x49] != '\0') {
      iVar3 = iVar3 + local_8[0x4a];
    }
    iVar8 = -0x10;
    pHVar1 = (HWND)FUN_00438988(local_8);
    uVar2 = GetWindowLongA(pHVar1,iVar8);
    if ((*(byte *)((int)local_8 + 0x122) & 1) != 0) {
      local_30.left = local_30.left - iVar3;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 2) != 0) {
      local_30.top = local_30.top - iVar3;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 4) != 0) {
      local_30.right = local_30.right + iVar3;
    }
    if ((uVar2 & 0x200000) != 0) {
      iVar8 = (**(code **)PTR_DAT_00572210)();
      local_30.right = local_30.right + iVar8;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 8) != 0) {
      local_30.bottom = local_30.bottom + iVar3;
    }
    if ((uVar2 & 0x100000) != 0) {
      iVar3 = (**(code **)PTR_DAT_00572210)();
      local_30.bottom = local_30.bottom + iVar3;
    }
    DrawEdge(local_10,&local_30,
             *(uint *)(&DAT_0056f864 + (uint)*(byte *)((int)local_8 + 0x123) * 4) |
             *(uint *)(&DAT_0056f874 + (uint)*(byte *)(local_8 + 0x49) * 4),
             (uint)*(byte *)((int)local_8 + 0x122) |
             *(uint *)(&DAT_0056f884 + (uint)*(byte *)((int)local_8 + 0x125) * 4) |
             *(uint *)(&DAT_0056f894 + (uint)*(byte *)(local_8 + 0x4e) * 4) | 0x2000);
  }
  IntersectClipRect(local_10,local_30.left,local_30.top,local_30.right,local_30.bottom);
  pLVar5 = local_40;
  ptVar4 = &local_30;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *pLVar5;
    pLVar5 = pLVar5 + (uint)bVar7 * -2 + 1;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  OffsetRect(&local_30,-local_30.left,-local_30.top);
  hbr = (HBRUSH)FUN_0041c34c(local_8[0x4c]);
  FillRect(local_10,&local_30,hbr);
  *in_FS_OFFSET = uVar9;
  hDC = local_10;
  pHVar1 = (HWND)FUN_00438988(local_8);
  ReleaseDC(pHVar1,hDC);
  return;
}

