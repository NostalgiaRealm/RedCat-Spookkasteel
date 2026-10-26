/*
 * FUN_00467f80 at 00467f80
 * undefined __register FUN_00467f80(int * param_1, char param_2)
 * Address ranges: 00467f80-00467fad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a18 slot -1 for TLookupList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a18 slot -1 for
   TLookupList. Original bytes unchanged; names and types still inferred. */

void FUN_00467f80(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_00467ff0((int)piVar1);
  }
  FUN_00403094((int *)piVar1[1]);
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

