/*
 * FUN_004a76a8 at 004a76a8
 * undefined __register FUN_004a76a8(int * param_1, int param_2)
 * Address ranges: 004a76a8-004a76d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 36 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 36 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a76a8(int *param_1,int param_2)

{
  if (param_2 != param_1[0x4e]) {
    param_1[0x4e] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

