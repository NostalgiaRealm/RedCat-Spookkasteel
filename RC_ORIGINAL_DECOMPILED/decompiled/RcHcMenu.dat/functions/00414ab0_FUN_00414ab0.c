/*
 * FUN_00414ab0 at 00414ab0
 * undefined __register FUN_00414ab0(int * param_1, char param_2)
 * Address ranges: 00414ab0-00414ad4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410e7c slot -1 for TFileStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410e7c slot -1 for
   TFileStream. Original bytes unchanged; names and types still inferred. */

void FUN_00414ab0(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (-1 < piVar1[1]) {
    FUN_00409d60((HANDLE)piVar1[1]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

