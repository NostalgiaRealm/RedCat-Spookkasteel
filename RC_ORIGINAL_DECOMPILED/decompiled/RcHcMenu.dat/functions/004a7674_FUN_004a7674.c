/*
 * FUN_004a7674 at 004a7674
 * undefined __register FUN_004a7674(int * param_1, char param_2)
 * Address ranges: 004a7674-004a76a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 35 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 35 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a7674(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4d]) {
    *(char *)(param_1 + 0x4d) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

