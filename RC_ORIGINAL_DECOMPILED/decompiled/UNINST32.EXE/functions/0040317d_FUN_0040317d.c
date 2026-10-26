/*
 * FUN_0040317d at 0040317d
 * undefined __cdecl FUN_0040317d(int param_1, int param_2)
 * Address ranges: 0040317d-004031ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040317d(int param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(DAT_00413690,param_1);
  EnableWindow(hWnd,param_2);
  ShowWindow(hWnd,(uint)(param_2 != 0));
  return;
}

