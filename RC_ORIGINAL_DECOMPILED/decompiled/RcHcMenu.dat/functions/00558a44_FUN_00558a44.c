/*
 * FUN_00558a44 at 00558a44
 * undefined __register FUN_00558a44(int * param_1, int param_2)
 * Address ranges: 00558a44-00558a75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 55 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 55 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558a44(int *param_1,int param_2)

{
  if (param_2 != param_1[0x6e]) {
    param_1[0x6e] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

