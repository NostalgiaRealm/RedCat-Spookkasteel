/*
 * FUN_0043db8c at 0043db8c
 * undefined __register FUN_0043db8c(int * param_1, char param_2)
 * Address ranges: 0043db8c-0043dbc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot -1 for THintAction. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot -1 for
   THintAction. Original bytes unchanged; names and types still inferred. */

void FUN_0043db8c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x1e]);
  FUN_00403094((int *)piVar1[0x1f]);
  FUN_0043d56c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

