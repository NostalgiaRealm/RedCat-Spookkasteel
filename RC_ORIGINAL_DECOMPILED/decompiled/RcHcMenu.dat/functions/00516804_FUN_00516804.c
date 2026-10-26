/*
 * FUN_00516804 at 00516804
 * undefined __register FUN_00516804(int * param_1, char param_2)
 * Address ranges: 00516804-0051682f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51670c slot -1 for TRegistry. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51670c slot -1 for
   TRegistry. Original bytes unchanged; names and types still inferred. */

void FUN_00516804(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00516830((int)piVar1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

