/*
 * FUN_004a76dc at 004a76dc
 * undefined __register FUN_004a76dc(int * param_1, char param_2)
 * Address ranges: 004a76dc-004a770d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 37 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 37 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a76dc(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x135) != param_2) {
    *(char *)((int)param_1 + 0x135) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

