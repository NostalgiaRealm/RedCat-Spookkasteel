/*
 * FUN_00488208 at 00488208
 * undefined __register FUN_00488208(int * param_1, char param_2)
 * Address ranges: 00488208-00488269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot -1 for TQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot -1 for TQuery.
   Original bytes unchanged; names and types still inferred. */

void FUN_00488208(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004191b0((int)piVar1);
  (**(code **)(*piVar1 + 0x264))();
  FUN_00403094((int *)piVar1[0x8e]);
  FUN_00403094((int *)piVar1[0x90]);
  FUN_00403094((int *)piVar1[0x92]);
  FUN_0040a3ac(piVar1[0x96]);
  FUN_00483dd0(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

