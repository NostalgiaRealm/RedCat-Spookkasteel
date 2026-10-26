/*
 * FUN_00414ddc at 00414ddc
 * undefined __register FUN_00414ddc(int * param_1, char param_2)
 * Address ranges: 00414ddc-00414e11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410fc4 slot -1 for TResourceStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410fc4 slot -1 for
   TResourceStream. Original bytes unchanged; names and types still inferred. */

void FUN_00414ddc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00408510();
  FreeResource((HGLOBAL)piVar1[5]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

