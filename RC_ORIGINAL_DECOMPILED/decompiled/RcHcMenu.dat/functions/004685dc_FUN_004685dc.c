/*
 * FUN_004685dc at 004685dc
 * undefined __register FUN_004685dc(int * param_1, char param_2)
 * Address ranges: 004685dc-00468615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462844 slot -1 for TFields. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462844 slot -1 for TFields.
   Original bytes unchanged; names and types still inferred. */

void FUN_004685dc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_004686f8((int)piVar1);
  }
  FUN_00403094((int *)piVar1[1]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

