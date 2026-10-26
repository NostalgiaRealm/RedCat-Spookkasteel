/*
 * FUN_004a347c at 004a347c
 * undefined __register FUN_004a347c(int * param_1)
 * Address ranges: 004a347c-004a3527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 38 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 38 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

void FUN_004a347c(int *param_1)

{
  HRGN pHVar1;
  HWND hWnd;
  BOOL bRedraw;
  
  FUN_0042bb08(param_1);
  if (param_1[0x85] != 0) {
    DeleteObject((HGDIOBJ)param_1[0x85]);
    param_1[0x85] = 0;
  }
  if ((param_1[0x82] != 0) && (*(int *)(param_1[0x82] + 0x40) != 0)) {
    pHVar1 = CreateRectRgn(0,0,1,1);
    param_1[0x85] = (int)pHVar1;
    CombineRgn((HRGN)param_1[0x85],*(HRGN *)(param_1[0x82] + 0x40),(HRGN)0x0,5);
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    bRedraw = -1;
    pHVar1 = (HRGN)param_1[0x85];
    hWnd = (HWND)FUN_00438988(param_1);
    SetWindowRgn(hWnd,pHVar1,bRedraw);
  }
  return;
}

