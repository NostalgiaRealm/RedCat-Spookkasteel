/*
 * FUN_0041ec90 at 0041ec90
 * undefined __register FUN_0041ec90(int * param_1, char param_2)
 * Address ranges: 0041ec90-0041ecb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ebfc slot -1 for TClipboardFormats. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ebfc slot -1 for
   TClipboardFormats. Original bytes unchanged; names and types still inferred. */

void FUN_0041ec90(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_00403094((int *)piVar1[2]);
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

