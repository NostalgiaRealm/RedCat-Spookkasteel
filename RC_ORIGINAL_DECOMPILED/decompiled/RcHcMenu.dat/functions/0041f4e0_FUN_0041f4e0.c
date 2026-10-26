/*
 * FUN_0041f4e0 at 0041f4e0
 * undefined __register FUN_0041f4e0(int * param_1, char param_2)
 * Address ranges: 0041f4e0-0041f50c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot -1 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot -1 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041f4e0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00420488((int *)piVar1[8]);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

