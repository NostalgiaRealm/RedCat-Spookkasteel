/*
 * FUN_0041b9c8 at 0041b9c8
 * undefined __register FUN_0041b9c8(int * param_1, char param_2)
 * Address ranges: 0041b9c8-0041b9ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a454 slot -1 for TFont. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a454 slot -1 for TFont.
   Original bytes unchanged; names and types still inferred. */

void FUN_0041b9c8(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0041b084(DAT_0057369c,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

