/*
 * FUN_0043d56c at 0043d56c
 * undefined __register FUN_0043d56c(int * param_1, char param_2)
 * Address ranges: 0043d56c-0043d56d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x43d1d4 slot -1 for TContainedAction. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x43d1d4
   slot -1 for TContainedAction. Original bytes unchanged; names and types still inferred. */

void FUN_0043d56c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[0x13] != 0) {
    FUN_0043d960(piVar1[0x13],(int)piVar1);
  }
  FUN_00419848(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

