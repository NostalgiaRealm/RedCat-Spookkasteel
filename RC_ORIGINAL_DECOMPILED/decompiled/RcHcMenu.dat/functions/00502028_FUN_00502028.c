/*
 * FUN_00502028 at 00502028
 * undefined __register FUN_00502028(int * param_1)
 * Address ranges: 00502028-00502076
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 59 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 59 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_00502028(int *param_1)

{
  HWND hWnd;
  undefined4 extraout_ECX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  uFlags = 0x97;
  cy = 0;
  cx = 0;
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)FUN_00438988((int *)param_1[0x8e]);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  FUN_0043262c((int *)param_1[0x8e],0,extraout_ECX);
  *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xfd;
  (**(code **)(*param_1 + 0x74))();
  return;
}

