/*
 * FUN_004d865c at 004d865c
 * undefined __register FUN_004d865c(int * param_1, char param_2)
 * Address ranges: 004d865c-004d86a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d7df8 slot -1 for TDaviCustomLinkLabel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d7df8 slot -1 for
   TDaviCustomLinkLabel. Original bytes unchanged; names and types still inferred. */

void FUN_004d865c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x4e]);
  FUN_00403094((int *)piVar1[0x4f]);
  FUN_00439a80(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

