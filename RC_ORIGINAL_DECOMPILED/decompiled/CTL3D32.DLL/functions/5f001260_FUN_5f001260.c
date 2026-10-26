/*
 * FUN_5f001260 at 5f001260
 * LRESULT __cdecl FUN_5f001260(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * Address ranges: 5f001260-5f0012b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT __cdecl FUN_5f001260(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcW(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  return LVar1;
}

