/*
 * FUN_004297a8 at 004297a8
 * undefined __register FUN_004297a8(int * param_1)
 * Address ranges: 004297a8-004297be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004297a8(int *param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  lpString = "";
  hWnd = (HWND)FUN_00438988(param_1);
  SetWindowTextA(hWnd,lpString);
  return;
}

