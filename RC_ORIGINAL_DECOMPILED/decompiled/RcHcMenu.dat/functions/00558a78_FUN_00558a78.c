/*
 * FUN_00558a78 at 00558a78
 * undefined __register FUN_00558a78(int * param_1, char param_2)
 * Address ranges: 00558a78-00558aa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 56 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 56 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558a78(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x1b5) != param_2) {
    *(char *)((int)param_1 + 0x1b5) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

