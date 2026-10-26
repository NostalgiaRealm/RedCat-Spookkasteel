/*
 * FUN_00438a30 at 00438a30
 * undefined __register FUN_00438a30(int * param_1, LPPOINT param_2)
 * Address ranges: 00438a30-00438a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 15 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 15 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_00438a30(int *param_1,LPPOINT param_2)

{
  HWND hWnd;
  
  param_2->x = 0;
  param_2->y = 0;
  hWnd = (HWND)FUN_00438988(param_1);
  ClientToScreen(hWnd,param_2);
  return;
}

