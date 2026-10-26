/*
 * FUN_004fb19c at 004fb19c
 * undefined __register FUN_004fb19c(int * param_1, char param_2)
 * Address ranges: 004fb19c-004fb1da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot -1 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot -1 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_004fb19c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0xad]);
  FUN_00543dc8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

