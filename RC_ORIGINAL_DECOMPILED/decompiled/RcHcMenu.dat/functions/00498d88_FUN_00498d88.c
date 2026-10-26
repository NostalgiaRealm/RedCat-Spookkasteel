/*
 * FUN_00498d88 at 00498d88
 * undefined __register FUN_00498d88(int * param_1, char param_2)
 * Address ranges: 00498d88-00498dc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x498cdc slot -1 for TPaletteItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x498cdc
   slot -1 for TPaletteItem. Original bytes unchanged; names and types still inferred. */

void FUN_00498d88(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  DeleteObject((HGDIOBJ)piVar1[4]);
  FUN_00412c50(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

