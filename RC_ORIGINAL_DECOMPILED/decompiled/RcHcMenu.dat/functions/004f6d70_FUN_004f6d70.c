/*
 * FUN_004f6d70 at 004f6d70
 * undefined __register FUN_004f6d70(int * param_1, char param_2)
 * Address ranges: 004f6d70-004f6db9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot -1 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot -1 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f6d70(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x7f]);
  FUN_00403094((int *)piVar1[0x7c]);
  if ((int *)piVar1[0x7d] != (int *)0x0) {
    FUN_00403094((int *)piVar1[0x7d]);
  }
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

