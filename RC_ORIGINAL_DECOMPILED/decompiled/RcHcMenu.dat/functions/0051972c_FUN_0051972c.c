/*
 * FUN_0051972c at 0051972c
 * undefined __register FUN_0051972c(int * param_1, int param_2)
 * Address ranges: 0051972c-005197a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051972c(int *param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  tagRECT *lpRect;
  int bErase;
  tagRECT tStack_18;
  
  FUN_0042c9d4((int)param_1,param_2,&tStack_18);
  cVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  if (cVar1 == '\0') {
    tStack_18.right = FUN_005192f4();
    tStack_18.right = tStack_18.right + tStack_18.left;
  }
  else {
    tStack_18.left = FUN_005192f4();
    tStack_18.left = tStack_18.right - tStack_18.left;
  }
  bErase = -(uint)((*(byte *)(param_1 + 0x10) & 0x40) == 0);
  lpRect = &tStack_18;
  pHVar2 = (HWND)FUN_00438988(param_1);
  InvalidateRect(pHVar2,lpRect,bErase);
  pHVar2 = (HWND)FUN_00438988(param_1);
  UpdateWindow(pHVar2);
  return;
}

