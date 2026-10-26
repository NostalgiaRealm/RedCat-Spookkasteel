/*
 * FUN_0054f1f4 at 0054f1f4
 * undefined __register FUN_0054f1f4(int * param_1, char param_2)
 * Address ranges: 0054f1f4-0054f244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54f140 slot -1 for TDaviSoundBuffer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54f140 slot -1 for
   TDaviSoundBuffer. Original bytes unchanged; names and types still inferred. */

void FUN_0054f1f4(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[1] != 0) {
    (**(code **)(*(int *)piVar1[1] + 0x48))();
    FUN_00406aa0(piVar1 + 1);
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

