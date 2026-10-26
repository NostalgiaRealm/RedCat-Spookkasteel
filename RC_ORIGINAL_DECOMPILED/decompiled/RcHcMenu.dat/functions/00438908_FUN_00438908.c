/*
 * FUN_00438908 at 00438908
 * undefined __register FUN_00438908(int * param_1)
 * Address ranges: 00438908-0043893f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 44 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 44 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_00438908(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_0044879c(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0044c34c(piVar1,param_1,extraout_ECX);
    return;
  }
  if (param_1[0x59] == 0) {
    FUN_004487c4(param_1);
  }
  else {
    hWnd = (HWND)FUN_00438988(param_1);
    SetFocus(hWnd);
  }
  return;
}

