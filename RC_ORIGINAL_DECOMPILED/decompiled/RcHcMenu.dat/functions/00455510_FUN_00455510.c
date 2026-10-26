/*
 * FUN_00455510 at 00455510
 * undefined __register FUN_00455510(int * param_1, char param_2)
 * Address ranges: 00455510-00455547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4538ac slot -1 for TTimer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4538ac slot -1 for TTimer.
   Original bytes unchanged; names and types still inferred. */

void FUN_00455510(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  *(undefined1 *)(piVar1 + 0xe) = 0;
  FUN_004555bc((int)piVar1);
  FUN_00448628((HWND)piVar1[10]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

