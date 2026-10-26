/*
 * FUN_00422898 at 00422898
 * undefined __register FUN_00422898(int * param_1, char param_2)
 * Address ranges: 00422898-004228c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot -1 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot -1 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422898(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00420488((int *)piVar1[8]);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

