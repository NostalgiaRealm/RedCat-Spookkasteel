/*
 * FUN_005593bc at 005593bc
 * undefined __register FUN_005593bc(int * param_1, char param_2)
 * Address ranges: 005593bc-005593ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x558f20 slot -1 for TCompOptionB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x558f20 slot -1 for
   TCompOptionB. Original bytes unchanged; names and types still inferred. */

void FUN_005593bc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

