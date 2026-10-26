/*
 * FUN_00429744 at 00429744
 * undefined __register FUN_00429744(int * param_1, int param_2)
 * Address ranges: 00429744-004297a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 49 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 49 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00429744(int *param_1,int param_2)

{
  HWND pHVar1;
  int lParam;
  UINT UVar2;
  WPARAM *wParam;
  WPARAM wParam_00;
  int *lParam_00;
  LPARAM lParam_01;
  WPARAM local_10;
  int local_c;
  
  wParam = &local_10;
  lParam_00 = &local_c;
  UVar2 = 0xb0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SendMessageA(pHVar1,UVar2,(WPARAM)wParam,(LPARAM)lParam_00);
  lParam = param_2 + local_10;
  UVar2 = 0xb1;
  local_c = lParam;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SendMessageA(pHVar1,UVar2,local_10,lParam);
  lParam_01 = 0;
  wParam_00 = 0;
  UVar2 = 0xb7;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SendMessageA(pHVar1,UVar2,wParam_00,lParam_01);
  return;
}

