/*
 * FUN_004a7710 at 004a7710
 * undefined __register FUN_004a7710(int * param_1, char param_2)
 * Address ranges: 004a7710-004a7741
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 38 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 38 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a7710(int *param_1,char param_2)

{
  if ((char)param_1[0x4f] != param_2) {
    *(char *)(param_1 + 0x4f) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

