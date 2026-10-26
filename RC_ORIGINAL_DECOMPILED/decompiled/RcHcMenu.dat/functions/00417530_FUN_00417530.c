/*
 * FUN_00417530 at 00417530
 * undefined __register FUN_00417530(int * param_1, char param_2)
 * Address ranges: 00417530-0041755b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot -1 for TWriter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot -1 for TWriter.
   Original bytes unchanged; names and types still inferred. */

void FUN_00417530(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004176f8((int)piVar1);
  FUN_00414e74(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

