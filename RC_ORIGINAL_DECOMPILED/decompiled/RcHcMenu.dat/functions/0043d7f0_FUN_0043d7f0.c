/*
 * FUN_0043d7f0 at 0043d7f0
 * undefined __register FUN_0043d7f0(int * param_1, char param_2)
 * Address ranges: 0043d7f0-0043d83d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43d334 slot -1 for TCustomActionList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43d334 slot -1 for
   TCustomActionList. Original bytes unchanged; names and types still inferred. */

void FUN_0043d7f0(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[10]);
  while (0 < (int)((undefined4 *)piVar1[9])[2]) {
    piVar2 = (int *)FUN_0041246c((undefined4 *)piVar1[9]);
    FUN_00403094(piVar2);
  }
  FUN_00403094((int *)piVar1[9]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

