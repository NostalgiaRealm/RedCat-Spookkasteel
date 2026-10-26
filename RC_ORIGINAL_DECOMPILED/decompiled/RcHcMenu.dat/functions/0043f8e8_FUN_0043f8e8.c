/*
 * FUN_0043f8e8 at 0043f8e8
 * undefined __register FUN_0043f8e8(int * param_1, char param_2)
 * Address ranges: 0043f8e8-0043f91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43e038 slot -1 for TChangeLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43e038 slot -1 for
   TChangeLink. Original bytes unchanged; names and types still inferred. */

void FUN_0043f8e8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_0043f270(piVar1[1],(int)piVar1);
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

