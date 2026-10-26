/*
 * FUN_0041ee28 at 0041ee28
 * undefined __register FUN_0041ee28(int * param_1, char param_2)
 * Address ranges: 0041ee28-0041ee54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot -1 for TPicture. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot -1 for
   TPicture. Original bytes unchanged; names and types still inferred. */

void FUN_0041ee28(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

