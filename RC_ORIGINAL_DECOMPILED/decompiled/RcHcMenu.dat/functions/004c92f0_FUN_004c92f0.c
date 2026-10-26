/*
 * FUN_004c92f0 at 004c92f0
 * undefined __register FUN_004c92f0(int * param_1, char param_2)
 * Address ranges: 004c92f0-004c933c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot -1 for TDaviButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot -1 for
   TDaviButton. Original bytes unchanged; names and types still inferred. */

void FUN_004c92f0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[0x81]);
  FUN_00403094((int *)piVar1[0x80]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

