/*
 * FUN_004f7bd0 at 004f7bd0
 * undefined __register FUN_004f7bd0(int * param_1, int param_2)
 * Address ranges: 004f7bd0-004f7c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 45 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 45 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f7bd0(int *param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  undefined4 extraout_ECX;
  
  if (param_1[0x84] != 0) {
    FUN_0043f270(param_1[0x84],param_1[0x83]);
  }
  param_1[0x84] = param_2;
  if (param_2 == 0) {
    pHVar2 = (HWND)FUN_00438988(param_1);
    FUN_00423914(pHVar2,0);
  }
  else {
    FUN_0043f2b4(param_2,param_1[0x83]);
    FUN_00418fe0(param_1[0x84],(int)param_1,extraout_ECX);
    iVar1 = FUN_0043e588((int *)param_1[0x84]);
    pHVar2 = (HWND)FUN_00438988(param_1);
    FUN_00423914(pHVar2,iVar1);
  }
  FUN_004f7420(param_1);
  return;
}

