/*
 * FUN_005583a8 at 005583a8
 * undefined __register FUN_005583a8(int * param_1, int param_2)
 * Address ranges: 005583a8-005583ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 47 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 47 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_005583a8(int *param_1,int param_2)

{
  param_1[0x61] = param_2;
  FUN_004aeaf0((int *)param_1[0x62],param_2);
  if (param_1[0x61] != 0) {
    FUN_00431f98(param_1,*(undefined4 *)(param_1[0x61] + 0x44));
  }
  (**(code **)(*param_1 + 0xfc))();
  return;
}

