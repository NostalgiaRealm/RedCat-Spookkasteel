/*
 * FUN_00558674 at 00558674
 * undefined __register FUN_00558674(int * param_1, int param_2)
 * Address ranges: 00558674-005586f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 52 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 52 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558674(int *param_1,int param_2)

{
  int local_c;
  
  if (param_1[0x60] != param_2) {
    local_c = param_2;
    if (param_1[0x5f] < param_2) {
      local_c = param_1[0x5f];
    }
    if (local_c < param_1[0x5e]) {
      local_c = param_1[0x5e];
    }
    if (local_c != param_1[0x60]) {
      param_1[0x60] = local_c;
      (**(code **)(*param_1 + 0xfc))();
      (**(code **)(*param_1 + 0xb8))();
    }
  }
  return;
}

