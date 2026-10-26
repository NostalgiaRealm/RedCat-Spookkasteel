/*
 * FUN_0046dc4c at 0046dc4c
 * undefined __register FUN_0046dc4c(int * param_1, char param_2)
 * Address ranges: 0046dc4c-0046dc84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465428 slot -1 for TDataSetField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465428 slot -1 for
   TDataSetField. Original bytes unchanged; names and types still inferred. */

void FUN_0046dc4c(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0046dd34((int)piVar1,0,extraout_ECX);
  FUN_00403094((int *)piVar1[0x3a]);
  FUN_0046d2f8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

