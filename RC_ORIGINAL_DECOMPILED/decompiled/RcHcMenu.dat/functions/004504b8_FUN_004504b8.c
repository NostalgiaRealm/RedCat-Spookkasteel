/*
 * FUN_004504b8 at 004504b8
 * undefined __register FUN_004504b8(int param_1)
 * Address ranges: 004504b8-00450520
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004504b8(int param_1)

{
  HWND hWnd;
  int iVar1;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (((*(int *)(DAT_005737d4 + 0x24) != 0) && (0 < *(int *)(param_1 + 0x84))) &&
     (*(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1, *(int *)(param_1 + 0x84) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 8) + -1;
    if (-1 < iVar1) {
      do {
        uFlags = 0x13;
        cy = 0;
        cx = 0;
        Y = 0;
        X = 0;
        hWndInsertAfter = (HWND)0xffffffff;
        hWnd = (HWND)FUN_00412384(*(undefined4 **)(param_1 + 0x80),iVar1);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  }
  return;
}

