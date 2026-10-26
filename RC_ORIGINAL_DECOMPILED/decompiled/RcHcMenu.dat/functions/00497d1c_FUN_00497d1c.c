/*
 * FUN_00497d1c at 00497d1c
 * undefined __register FUN_00497d1c(int * param_1, char param_2)
 * Address ranges: 00497d1c-00497d54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x497c2c slot -1 for TDaviWave. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x497c2c slot -1 for
   TDaviWave. Original bytes unchanged; names and types still inferred. */

void FUN_00497d1c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00497e30((int)piVar1);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

