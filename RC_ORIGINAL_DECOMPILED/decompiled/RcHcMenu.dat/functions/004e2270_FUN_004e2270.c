/*
 * FUN_004e2270 at 004e2270
 * undefined __register FUN_004e2270(int * param_1)
 * Address ranges: 004e2270-004e2293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2270(int *param_1)

{
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int nCmdShow;
  
  nCmdShow = 4;
  hWnd = (HWND)FUN_00438988(param_1);
  ShowWindow(hWnd,nCmdShow);
  FUN_0044aa98(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  return;
}

