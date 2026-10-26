/*
 * FUN_0053684c at 0053684c
 * undefined __register FUN_0053684c(int * param_1, char param_2)
 * Address ranges: 0053684c-00536887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53624c slot -1 for TAppLayOut. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53624c slot -1 for
   TAppLayOut. Original bytes unchanged; names and types still inferred. */

void FUN_0053684c(int *param_1,char param_2)

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

