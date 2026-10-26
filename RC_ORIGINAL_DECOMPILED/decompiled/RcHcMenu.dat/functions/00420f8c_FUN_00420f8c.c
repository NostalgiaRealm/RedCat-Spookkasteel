/*
 * FUN_00420f8c at 00420f8c
 * undefined __register FUN_00420f8c(int * param_1, char param_2)
 * Address ranges: 00420f8c-00420fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot -1 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot -1 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_00420f8c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00421638((int)piVar1);
  FUN_00420488((int *)piVar1[8]);
  FUN_00403094((int *)piVar1[9]);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

