/*
 * FUN_004f6ee8 at 004f6ee8
 * undefined __register FUN_004f6ee8(int * param_1)
 * Address ranges: 004f6ee8-004f6f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 38 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 38 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f6ee8(int *param_1)

{
  bool bVar1;
  int iVar2;
  HWND pHVar3;
  
  FUN_00435a24(param_1);
  if (param_1[0x84] != 0) {
    bVar1 = FUN_0043e3b4(param_1[0x84]);
    if (bVar1) {
      iVar2 = FUN_0043e588((int *)param_1[0x84]);
      pHVar3 = (HWND)FUN_00438988(param_1);
      FUN_00423914(pHVar3,iVar2);
    }
  }
  if (param_1[0x7d] == 0) {
    FUN_004f7420(param_1);
  }
  else {
    FUN_004f6e34();
  }
  return;
}

