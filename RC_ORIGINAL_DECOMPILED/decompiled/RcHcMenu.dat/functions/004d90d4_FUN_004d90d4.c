/*
 * FUN_004d90d4 at 004d90d4
 * undefined __register FUN_004d90d4(int * param_1, POINT * param_2, int param_3)
 * Address ranges: 004d90d4-004d9110
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d90d4(int *param_1,POINT *param_2,int param_3)

{
  uint cPoint;
  HRGN hRgn;
  HWND hWnd;
  int iMode;
  BOOL bRedraw;
  
  bRedraw = -1;
  iMode = 2;
  cPoint = param_3 + 1;
  if (SCARRY4(param_3,1)) {
    cPoint = thunk_FUN_00402874(cPoint);
  }
  hRgn = CreatePolygonRgn(param_2,cPoint,iMode);
  hWnd = (HWND)FUN_00438988(param_1);
  SetWindowRgn(hWnd,hRgn,bRedraw);
  return;
}

