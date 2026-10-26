/*
 * FUN_00523d7c at 00523d7c
 * undefined __register FUN_00523d7c(int * param_1, uint param_2)
 * Address ranges: 00523d7c-00523e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523d7c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  HWND pHVar4;
  int nBar;
  RECT *lpRect;
  RECT *lpClipRect;
  BOOL bRedraw;
  RECT local_20;
  uint local_10;
  uint local_c;
  int *local_8;
  
  uVar1 = param_1[0x81] - 1;
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_1[0x81],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = local_c;
  if (((int)uVar1 < (int)local_c) && (uVar2 = local_8[0x81] - 1, SBORROW4(local_8[0x81],1))) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  local_c = uVar2;
  if ((int)local_c < 0) {
    local_c = 0;
  }
  if (local_8[0x84] != local_c) {
    uVar1 = local_8[0x84] - local_c;
    if (SBORROW4(local_8[0x84],local_c)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    local_8[0x84] = local_c;
    local_10 = uVar1;
    iVar3 = FUN_0052361c(local_8);
    if (*(int *)(iVar3 + 0x288) == 0) {
      (**(code **)(*local_8 + 0x40))(local_8,&local_20);
      lpClipRect = &local_20;
      lpRect = &local_20;
      iVar3 = FUN_005235f8(local_8);
      uVar1 = (uint)((longlong)iVar3 * (longlong)(int)local_10);
      if ((longlong)(int)uVar1 != (longlong)iVar3 * (longlong)(int)local_10) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      iVar3 = 0;
      pHVar4 = (HWND)FUN_00438988(local_8);
      ScrollWindow(pHVar4,iVar3,uVar1,lpRect,lpClipRect);
      bRedraw = -1;
      iVar3 = local_8[0x84];
      nBar = 1;
      pHVar4 = (HWND)FUN_00438988(local_8);
      SetScrollPos(pHVar4,nBar,iVar3,bRedraw);
    }
  }
  (**(code **)(*local_8 + 0xb8))();
  return;
}

