/*
 * FUN_0050a078 at 0050a078
 * undefined __register FUN_0050a078(int * param_1)
 * Address ranges: 0050a078-0050a0ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050a078(int *param_1)

{
  HWND pHVar1;
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
  pHVar1 = (HWND)FUN_00438988(param_1);
  CallWindowProcA((WNDPROC)param_1[0x4f],pHVar1,Msg,wParam,lParam);
  FUN_00438bb4((int)param_1,'\0');
  FUN_004328a0((int)param_1,-0x7ffffff1);
  return;
}

