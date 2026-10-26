/*
 * FUN_005585d4 at 005585d4
 * undefined __register FUN_005585d4(int * param_1, int param_2)
 * Address ranges: 005585d4-00558620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 50 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 50 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_005585d4(int *param_1,int param_2)

{
  param_1[0x5f] = param_2;
  if (param_1[0x5f] < param_1[0x5e]) {
    param_1[0x5f] = param_1[0x5e];
  }
  (**(code **)(*param_1 + 0xfc))();
  return;
}

