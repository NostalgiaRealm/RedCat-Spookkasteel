/*
 * FUN_00430100 at 00430100
 * undefined __register FUN_00430100(int * param_1, char param_2)
 * Address ranges: 00430100-0043012c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42dc04 slot -1 for TDragDockObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42dc04 slot -1 for
   TDragDockObject. Original bytes unchanged; names and types still inferred. */

void FUN_00430100(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x10]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

