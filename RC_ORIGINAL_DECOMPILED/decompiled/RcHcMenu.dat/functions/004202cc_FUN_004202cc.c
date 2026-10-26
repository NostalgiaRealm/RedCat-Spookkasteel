/*
 * FUN_004202cc at 004202cc
 * undefined __register FUN_004202cc(int * param_1, char param_2)
 * Address ranges: 004202cc-004202f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x420118 slot -1 for TBitmapCanvas. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x420118 slot -1 for
   TBitmapCanvas. Original bytes unchanged; names and types still inferred. */

void FUN_004202cc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004202f8(piVar1);
  FUN_0041c52c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

