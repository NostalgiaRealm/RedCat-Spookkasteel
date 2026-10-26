/*
 * FUN_004827ec at 004827ec
 * undefined __register FUN_004827ec(int * param_1, char param_2)
 * Address ranges: 004827ec-0048283f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot -1 for TDatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot -1 for
   TDatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004827ec(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004191b0((int)piVar1);
  FUN_00467184(piVar1);
  if (piVar1[0x1e] != 0) {
    FUN_00481d10(piVar1[0x1e],(int)piVar1);
  }
  FUN_004670b8(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[0x1f]);
  FUN_00403094((int *)piVar1[0x20]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

