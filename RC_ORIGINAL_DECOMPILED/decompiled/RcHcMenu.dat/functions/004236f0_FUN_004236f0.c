/*
 * FUN_004236f0 at 004236f0
 * undefined __register FUN_004236f0(int * param_1, char param_2)
 * Address ranges: 004236f0-0042371c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4233d0 slot -1 for TOrderedList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4233d0 slot -1 for
   TOrderedList. Original bytes unchanged; names and types still inferred. */

void FUN_004236f0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

