/*
 * FUN_00457bdc at 00457bdc
 * undefined __register FUN_00457bdc(int * param_1, char param_2)
 * Address ranges: 00457bdc-00457c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x457b50 slot -1 for TStStringResource. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x457b50 slot -1 for
   TStStringResource. Original bytes unchanged; names and types still inferred. */

void FUN_00457bdc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00457cb0((int)piVar1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

