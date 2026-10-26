/*
 * FUN_00503f90 at 00503f90
 * undefined __register FUN_00503f90(int * param_1)
 * Address ranges: 00503f90-00503fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503914 slot 38 for TDaviComboBoxPopup. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503914 slot 38 for
   TDaviComboBoxPopup. Original bytes unchanged; names and types still inferred. */

void FUN_00503f90(int *param_1)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  HWND hWndNewParent;
  LPARAM lParam;
  
  FUN_00502ea8(param_1);
  hWndNewParent = (HWND)0x0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SetParent(pHVar1,hWndNewParent);
  lParam = 0;
  wParam = 0;
  Msg = 7;
  pHVar1 = (HWND)FUN_00438988(param_1);
  CallWindowProcA((WNDPROC)param_1[0x4f],pHVar1,Msg,wParam,lParam);
  FUN_00438bb4((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0x85) = 1;
  return;
}

