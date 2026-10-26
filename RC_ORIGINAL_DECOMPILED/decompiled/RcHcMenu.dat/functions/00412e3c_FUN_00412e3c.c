/*
 * FUN_00412e3c at 00412e3c
 * undefined __register FUN_00412e3c(int * param_1, char param_2)
 * Address ranges: 00412e3c-00412e7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4109dc slot -1 for TCollection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4109dc slot -1 for
   TCollection. Original bytes unchanged; names and types still inferred. */

void FUN_00412e3c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  piVar1[3] = 1;
  if (piVar1[2] != 0) {
    FUN_00412f38(piVar1);
  }
  FUN_00403094((int *)piVar1[2]);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

