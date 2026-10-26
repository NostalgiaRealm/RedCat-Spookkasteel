/*
 * FUN_004235e0 at 004235e0
 * undefined __register FUN_004235e0(int * param_1, char param_2)
 * Address ranges: 004235e0-0042360c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x423364 slot -1 for TComponentList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x423364 slot -1 for
   TComponentList. Original bytes unchanged; names and types still inferred. */

void FUN_004235e0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[5]);
  FUN_004121b8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

