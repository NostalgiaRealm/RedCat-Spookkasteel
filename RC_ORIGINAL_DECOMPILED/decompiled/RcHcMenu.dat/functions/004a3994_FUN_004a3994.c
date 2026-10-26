/*
 * FUN_004a3994 at 004a3994
 * undefined __register FUN_004a3994(int param_1)
 * Address ranges: 004a3994-004a39e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3994(int param_1)

{
  bool bVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_18;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x24) != 0) {
    bVar1 = FUN_00438c84(*(int *)(param_1 + 0x24));
    if (bVar1) {
      FUN_0043211c(local_8,&local_18.left);
      bErase = -1;
      lpRect = &local_18;
      hWnd = (HWND)FUN_00438988(*(int **)(local_8 + 0x24));
      InvalidateRect(hWnd,lpRect,bErase);
    }
  }
  FUN_004387fc(local_8);
  return;
}

