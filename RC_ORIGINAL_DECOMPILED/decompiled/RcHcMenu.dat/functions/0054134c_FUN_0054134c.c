/*
 * FUN_0054134c at 0054134c
 * undefined __register FUN_0054134c(int * param_1)
 * Address ranges: 0054134c-00541395
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x540328 slot 38 for TPopupAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x540328 slot 38 for
   TPopupAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_0054134c(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  UINT Msg;
  WPARAM wParam;
  HWND hWndNewParent;
  LPARAM lParam;
  
  FUN_00435a24(param_1);
  hWndNewParent = (HWND)0x0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SetParent(pHVar1,hWndNewParent);
  lParam = 0;
  wParam = 0;
  Msg = 7;
  piVar2 = (int *)FUN_0053eb74((int)param_1);
  pHVar1 = (HWND)FUN_00438988(piVar2);
  iVar3 = FUN_0053eb74((int)param_1);
  CallWindowProcA(*(WNDPROC *)(iVar3 + 0x13c),pHVar1,Msg,wParam,lParam);
  return;
}

