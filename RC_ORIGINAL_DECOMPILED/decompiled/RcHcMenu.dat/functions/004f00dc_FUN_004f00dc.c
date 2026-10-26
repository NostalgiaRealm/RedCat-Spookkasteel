/*
 * FUN_004f00dc at 004f00dc
 * undefined __register FUN_004f00dc(int * param_1)
 * Address ranges: 004f00dc-004f012e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f00dc(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  uFlags = 0x97;
  cy = 0;
  cx = 0;
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  piVar1 = (int *)(**(code **)(*param_1 + 0xd0))();
  hWnd = (HWND)FUN_00438988(piVar1);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  piVar1 = (int *)(**(code **)(*param_1 + 0xd0))();
  FUN_0043262c(piVar1,0,extraout_ECX);
  *(undefined1 *)((int)param_1 + 0x205) = 0;
  (**(code **)(*param_1 + 0x74))();
  return;
}

