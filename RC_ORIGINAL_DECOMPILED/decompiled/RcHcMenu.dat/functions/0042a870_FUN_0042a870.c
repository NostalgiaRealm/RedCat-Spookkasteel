/*
 * FUN_0042a870 at 0042a870
 * undefined __register FUN_0042a870(int * param_1, char param_2)
 * Address ranges: 0042a870-0042a8e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot -1 for TCustomComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot -1 for
   TCustomComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_0042a870(int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  bVar1 = FUN_00438c84((int)piVar2);
  if (bVar1) {
    (**(code **)(*piVar2 + 0x9c))();
  }
  FUN_00448550(piVar2[0x85]);
  FUN_00448550(piVar2[0x84]);
  FUN_00403094((int *)piVar2[0x7d]);
  FUN_00403094((int *)piVar2[0x7c]);
  FUN_00403094((int *)piVar2[0x89]);
  FUN_004349bc(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

