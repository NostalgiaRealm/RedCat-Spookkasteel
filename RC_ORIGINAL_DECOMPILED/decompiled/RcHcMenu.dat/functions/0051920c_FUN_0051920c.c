/*
 * FUN_0051920c at 0051920c
 * undefined __register FUN_0051920c(int * param_1, char param_2)
 * Address ranges: 0051920c-0051923b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x518800 slot -1 for TCheckListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x518800 slot -1 for
   TCheckListBox. Original bytes unchanged; names and types still inferred. */

void FUN_0051920c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x92]);
  FUN_0042c5bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

