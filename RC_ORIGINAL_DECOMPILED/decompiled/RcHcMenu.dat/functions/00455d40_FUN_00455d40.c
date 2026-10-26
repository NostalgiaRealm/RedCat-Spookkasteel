/*
 * FUN_00455d40 at 00455d40
 * undefined __register FUN_00455d40(int * param_1, char param_2)
 * Address ranges: 00455d40-00455d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot -1 for TSplitter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot -1 for
   TSplitter. Original bytes unchanged; names and types still inferred. */

void FUN_00455d40(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x4c]);
  FUN_00439a80(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

