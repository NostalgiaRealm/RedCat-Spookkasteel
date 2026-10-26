/*
 * FUN_004387a8 at 004387a8
 * undefined __register FUN_004387a8(int * param_1, int * param_2)
 * Address ranges: 004387a8-004387f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 17 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 17 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_004387a8(int *param_1,int *param_2)

{
  HWND pHVar1;
  HDC pHVar2;
  int *piVar3;
  HRGN hrgnClip;
  DWORD flags;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    pHVar1 = (HWND)FUN_00438988(param_1);
    pHVar2 = GetDC(pHVar1);
  }
  else {
    flags = 0x12;
    hrgnClip = (HRGN)0x0;
    pHVar1 = (HWND)FUN_00438988(param_1);
    pHVar2 = GetDCEx(pHVar1,hrgnClip,flags);
  }
  if (pHVar2 == (HDC)0x0) {
    piVar3 = FUN_0040cfa8((int *)&DAT_004106c0,'\x01',(undefined4 *)PTR_PTR_005723c0);
    FUN_0040382c(piVar3);
  }
  *param_2 = param_1[0x53];
  return;
}

