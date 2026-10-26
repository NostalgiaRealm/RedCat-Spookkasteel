/*
 * FUN_0046772c at 0046772c
 * undefined __register FUN_0046772c(int * param_1, char param_2)
 * Address ranges: 0046772c-00467758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4620c0 slot -1 for TFieldDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4620c0 slot -1 for
   TFieldDef. Original bytes unchanged; names and types still inferred. */

void FUN_0046772c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00412c50(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[4]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

