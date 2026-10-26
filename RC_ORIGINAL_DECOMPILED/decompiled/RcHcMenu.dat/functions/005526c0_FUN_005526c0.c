/*
 * FUN_005526c0 at 005526c0
 * undefined __register FUN_005526c0(int * param_1, char param_2)
 * Address ranges: 005526c0-005526fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552508 slot -1 for TDaviContextHelp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552508 slot -1 for
   TDaviContextHelp. Original bytes unchanged; names and types still inferred. */

void FUN_005526c0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x7c]);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

