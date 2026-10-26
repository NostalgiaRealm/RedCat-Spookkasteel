/*
 * FUN_004f5788 at 004f5788
 * undefined __register FUN_004f5788(int * param_1, undefined4 param_2)
 * Address ranges: 004f5788-004f57a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5788(int *param_1,undefined4 param_2)

{
  HWND hWnd;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;
  
  FUN_00436dd8(param_1,param_2);
  flags = 5;
  hrgnUpdate = (HRGN)0x0;
  lprcUpdate = (RECT *)0x0;
  hWnd = (HWND)FUN_00438988(param_1);
  RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return;
}

