/*
 * FUN_00438a68 at 00438a68
 * undefined __register FUN_00438a68(int * param_1)
 * Address ranges: 00438a68-00438aa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438a68(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      uFlags = 0x16;
      cy = param_1[0xf];
      cx = param_1[0xe];
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_00438988(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    }
  }
  return;
}

