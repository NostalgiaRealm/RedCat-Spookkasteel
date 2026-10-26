/*
 * FUN_004313a0 at 004313a0
 * undefined __register FUN_004313a0(int * param_1, char param_2)
 * Address ranges: 004313a0-004313cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42dc98 slot -1 for TControlCanvas. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42dc98 slot -1 for
   TControlCanvas. Original bytes unchanged; names and types still inferred. */

void FUN_004313a0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00431474(piVar1);
  FUN_0041c52c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

