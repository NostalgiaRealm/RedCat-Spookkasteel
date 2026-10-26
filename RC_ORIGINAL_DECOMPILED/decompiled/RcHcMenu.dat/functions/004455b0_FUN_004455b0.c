/*
 * FUN_004455b0 at 004455b0
 * undefined __register FUN_004455b0(int * param_1, char param_2)
 * Address ranges: 004455b0-004455e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4404a0 slot -1 for TPopupMenu. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4404a0 slot -1 for
   TPopupMenu. Original bytes unchanged; names and types still inferred. */

void FUN_004455b0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00445520(DAT_005737c4,(int)piVar1);
  FUN_00444214(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

