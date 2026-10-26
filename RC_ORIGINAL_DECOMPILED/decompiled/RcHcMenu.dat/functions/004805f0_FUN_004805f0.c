/*
 * FUN_004805f0 at 004805f0
 * undefined __register FUN_004805f0(int * param_1, char param_2)
 * Address ranges: 004805f0-0048063c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot -1 for TSession. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot -1 for
   TSession. Original bytes unchanged; names and types still inferred. */

void FUN_004805f0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00481e4c((int)piVar1,'\0');
  FUN_00412838(*(int *)(DAT_0057394c + 4),(int)piVar1);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[10]);
  FUN_00403094((int *)piVar1[0xb]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

