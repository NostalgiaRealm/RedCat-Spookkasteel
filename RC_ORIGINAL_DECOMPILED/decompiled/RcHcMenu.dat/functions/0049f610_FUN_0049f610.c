/*
 * FUN_0049f610 at 0049f610
 * undefined __register FUN_0049f610(int * param_1, char param_2)
 * Address ranges: 0049f610-0049f64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49eb7c slot -1 for TDaviAnimationLoaderItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49eb7c slot -1 for
   TDaviAnimationLoaderItem. Original bytes unchanged; names and types still inferred. */

void FUN_0049f610(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0040e4b4(piVar1 + 3);
  FUN_00412c50(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

