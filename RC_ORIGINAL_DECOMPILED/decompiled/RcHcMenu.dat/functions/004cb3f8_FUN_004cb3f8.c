/*
 * FUN_004cb3f8 at 004cb3f8
 * undefined __register FUN_004cb3f8(int * param_1, char param_2)
 * Address ranges: 004cb3f8-004cb42d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c9dc4 slot -1 for TSpeedButton. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered original virtual function entry from validated Delphi VMT 0x4c9dc4 slot -1 for
   TSpeedButton. Original bytes unchanged; names and types still inferred. */

void FUN_004cb3f8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  _DAT_00571d0c = _DAT_00571d0c + -1;
  FUN_00439a80(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[0x4b]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

