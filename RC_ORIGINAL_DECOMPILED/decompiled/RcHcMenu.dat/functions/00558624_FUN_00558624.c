/*
 * FUN_00558624 at 00558624
 * undefined __register FUN_00558624(int * param_1, int param_2)
 * Address ranges: 00558624-00558670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 51 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 51 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558624(int *param_1,int param_2)

{
  param_1[0x5e] = param_2;
  if (param_1[0x5f] < param_1[0x5e]) {
    param_1[0x5e] = param_1[0x5f];
  }
  (**(code **)(*param_1 + 0xfc))();
  return;
}

