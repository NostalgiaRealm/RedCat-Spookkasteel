/*
 * FUN_004aa928 at 004aa928
 * undefined __register FUN_004aa928(int * param_1, int * param_2, uint * param_3)
 * Address ranges: 004aa928-004aa97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot 46 for TGDIHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot 46 for
   TGDIHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004aa928(int *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  int local_1c [4];
  uint *local_c;
  int *local_8;
  
  piVar1 = local_1c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *param_2;
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  }
  local_c = param_3;
  local_8 = param_1;
  piVar1 = (int *)FUN_004aa768(param_1);
  FUN_004ab11c(piVar1,local_1c,local_c);
  uFlags = 0x50;
  cy = 0;
  iVar2 = 0;
  hWndInsertAfter = (HWND)0xffffffff;
  hWnd = (HWND)FUN_00438988(local_8);
  SetWindowPos(hWnd,hWndInsertAfter,local_1c[0],local_1c[1],iVar2,cy,uFlags);
  return;
}

