/*
 * FUN_0050309c at 0050309c
 * undefined __register FUN_0050309c(int * param_1, int param_2)
 * Address ranges: 0050309c-005030d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050309c(int *param_1,int param_2)

{
  bool bVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_1c;
  int local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    FUN_005033ec(local_8,local_c,&local_1c.left);
    bErase = -1;
    lpRect = &local_1c;
    hWnd = (HWND)FUN_00438988(local_8);
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}

