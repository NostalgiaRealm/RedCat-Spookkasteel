/*
 * FUN_00436864 at 00436864
 * undefined __register FUN_00436864(int * param_1, HDC param_2, int param_3, int param_4)
 * Address ranges: 00436864-004369b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436864(int *param_1,HDC param_2,int param_3,int param_4)

{
  HWND pHVar1;
  uint uVar2;
  int *piVar3;
  UINT grfFlags;
  int iVar4;
  tagRECT local_24;
  int local_14;
  int local_10;
  UINT local_c;
  int local_8;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x80;
  local_10 = SaveDC(param_2);
  FUN_00431208(param_2,param_3,param_4);
  IntersectClipRect(param_2,0,0,param_1[0xe],param_1[0xf]);
  grfFlags = 0;
  local_c = 0;
  iVar4 = -0x14;
  pHVar1 = (HWND)FUN_00438988(param_1);
  uVar2 = GetWindowLongA(pHVar1,iVar4);
  if ((uVar2 & 0x200) == 0) {
    iVar4 = -0x10;
    pHVar1 = (HWND)FUN_00438988(param_1);
    uVar2 = GetWindowLongA(pHVar1,iVar4);
    if ((uVar2 & 0x800000) != 0) {
      local_c = 3;
      grfFlags = 0xa00f;
    }
  }
  else {
    local_c = 10;
    grfFlags = 0x200f;
  }
  if (grfFlags != 0) {
    SetRect(&local_24,0,0,param_1[0xe],param_1[0xf]);
    DrawEdge(param_2,&local_24,local_c,grfFlags);
    FUN_00431208(param_2,local_24.left,local_24.top);
    IntersectClipRect(param_2,0,0,local_24.right - local_24.left,local_24.bottom - local_24.top);
  }
  FUN_00433700((int)param_1,0x14,param_2,0);
  FUN_00433700((int)param_1,0xf,param_2,0);
  if ((param_1[0x60] != 0) && (iVar4 = *(int *)(param_1[0x60] + 8), -1 < iVar4 + -1)) {
    local_8 = 0;
    local_14 = iVar4;
    do {
      piVar3 = (int *)FUN_00412384((undefined4 *)param_1[0x60],local_8);
      if (*(char *)((int)piVar3 + 0x47) != '\0') {
        FUN_00436864(piVar3,param_2,piVar3[0xc],piVar3[0xd]);
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  RestoreDC(param_2,local_10);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xff7f;
  return;
}

