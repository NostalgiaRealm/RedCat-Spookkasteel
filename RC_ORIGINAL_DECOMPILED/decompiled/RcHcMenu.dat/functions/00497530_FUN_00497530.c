/*
 * FUN_00497530 at 00497530
 * undefined __register FUN_00497530(int * param_1, char param_2)
 * Address ranges: 00497530-0049756b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49738c slot -1 for TApp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49738c slot -1 for TApp.
   Original bytes unchanged; names and types still inferred. */

void FUN_00497530(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_0045b45c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

