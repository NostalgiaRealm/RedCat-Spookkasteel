/*
 * FUN_00532b34 at 00532b34
 * undefined __register FUN_00532b34(int * param_1)
 * Address ranges: 00532b34-00532b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x531970 slot 38 for TPopupAppObjGrid. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x531970 slot 38 for
   TPopupAppObjGrid. Original bytes unchanged; names and types still inferred. */

void FUN_00532b34(int *param_1)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  HWND hWndNewParent;
  LPARAM lParam;
  
  FUN_00521ab8(param_1);
  hWndNewParent = (HWND)0x0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SetParent(pHVar1,hWndNewParent);
  lParam = 0;
  wParam = 0;
  Msg = 7;
  pHVar1 = (HWND)FUN_00438988(param_1);
  CallWindowProcA((WNDPROC)param_1[0x4f],pHVar1,Msg,wParam,lParam);
  FUN_00438bb4((int)param_1,'\0');
  return;
}

