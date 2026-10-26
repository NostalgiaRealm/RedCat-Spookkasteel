/*
 * FUN_004a311c at 004a311c
 * undefined __register FUN_004a311c(int * param_1, char param_2)
 * Address ranges: 004a311c-004a316f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot -1 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot -1 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

void FUN_004a311c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x80]);
  FUN_004a3170((int)piVar1,0);
  piVar1[0x85] = 0;
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

