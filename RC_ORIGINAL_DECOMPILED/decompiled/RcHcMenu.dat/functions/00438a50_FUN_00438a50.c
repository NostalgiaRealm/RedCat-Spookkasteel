/*
 * FUN_00438a50 at 00438a50
 * undefined __register FUN_00438a50(int * param_1, LPRECT param_2)
 * Address ranges: 00438a50-00438a66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438a50(int *param_1,LPRECT param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)FUN_00438988(param_1);
  GetClientRect(hWnd,param_2);
  return;
}

