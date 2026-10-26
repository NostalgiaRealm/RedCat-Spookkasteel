/*
 * FUN_00556cf8 at 00556cf8
 * undefined __register FUN_00556cf8(int * param_1, char param_2)
 * Address ranges: 00556cf8-00556d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5566ac slot -1 for TCompOptionA. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5566ac slot -1 for
   TCompOptionA. Original bytes unchanged; names and types still inferred. */

void FUN_00556cf8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0043a38c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

