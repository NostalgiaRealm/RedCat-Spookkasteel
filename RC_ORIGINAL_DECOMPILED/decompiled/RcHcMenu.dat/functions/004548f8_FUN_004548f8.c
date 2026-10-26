/*
 * FUN_004548f8 at 004548f8
 * undefined __register FUN_004548f8(int * param_1, char param_2)
 * Address ranges: 004548f8-00454932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x452768 slot -1 for TShape. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x452768 slot -1 for TShape.
   Original bytes unchanged; names and types still inferred. */

void FUN_004548f8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x4a]);
  FUN_00403094((int *)piVar1[0x4b]);
  FUN_00439a80(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

