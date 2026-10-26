/*
 * FUN_00558374 at 00558374
 * undefined __register FUN_00558374(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00558374-005583a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 24 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 24 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558374(int *param_1,int *param_2,undefined4 param_3)

{
  FUN_004a90a4(param_1,param_2,param_3);
  if (param_2 != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x62] + 0x60))((int *)param_1[0x62],param_2);
  }
  return;
}

