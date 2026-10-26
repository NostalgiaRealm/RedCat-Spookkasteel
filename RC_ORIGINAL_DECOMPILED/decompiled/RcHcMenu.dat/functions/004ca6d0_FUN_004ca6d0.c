/*
 * FUN_004ca6d0 at 004ca6d0
 * undefined __register FUN_004ca6d0(int * param_1, char param_2)
 * Address ranges: 004ca6d0-004ca72b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ca418 slot -1 for TButtonGlyph. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ca418 slot -1 for
   TButtonGlyph. Original bytes unchanged; names and types still inferred. */

void FUN_004ca6d0(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_004ca72c((int)piVar1);
  if (DAT_00571d08 != (int *)0x0) {
    uVar2 = FUN_004ca630((int)DAT_00571d08);
    if ((char)uVar2 != '\0') {
      FUN_00403094(DAT_00571d08);
      DAT_00571d08 = (int *)0x0;
    }
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

