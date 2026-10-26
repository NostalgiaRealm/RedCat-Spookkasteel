/*
 * FUN_004eba44 at 004eba44
 * undefined __register FUN_004eba44(int * param_1, char param_2)
 * Address ranges: 004eba44-004eba96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea4b4 slot -1 for TAppBDEQueryBookMark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea4b4 slot -1 for
   TAppBDEQueryBookMark. Original bytes unchanged; names and types still inferred. */

void FUN_004eba44(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  iVar2 = FUN_00403224((int *)piVar1[1],(int)&PTR_FUN_004ea51c);
  (**(code **)(**(int **)(iVar2 + 0x30) + 0x214))(*(int **)(iVar2 + 0x30),piVar1[4]);
  FUN_004d7244(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

