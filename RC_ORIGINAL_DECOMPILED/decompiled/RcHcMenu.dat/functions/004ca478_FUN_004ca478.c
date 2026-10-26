/*
 * FUN_004ca478 at 004ca478
 * undefined __register FUN_004ca478(int * param_1, char param_2)
 * Address ranges: 004ca478-004ca4a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ca308 slot -1 for TGlyphList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ca308 slot -1 for
   TGlyphList. Original bytes unchanged; names and types still inferred. */

void FUN_004ca478(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x1e]);
  FUN_0043e290(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

