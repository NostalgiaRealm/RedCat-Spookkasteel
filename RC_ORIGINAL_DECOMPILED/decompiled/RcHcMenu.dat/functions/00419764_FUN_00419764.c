/*
 * FUN_00419764 at 00419764
 * undefined __register FUN_00419764(int * param_1, char param_2)
 * Address ranges: 00419764-00419796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot -1 for TBasicActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot -1 for
   TBasicActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00419764(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[4] != 0) {
    FUN_0041994c(piVar1[4],(int)piVar1);
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

