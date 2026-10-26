/*
 * FUN_00558ae0 at 00558ae0
 * undefined __register FUN_00558ae0(int * param_1, char param_2)
 * Address ranges: 00558ae0-00558b1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 58 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 58 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558ae0(int *param_1,char param_2)

{
  if ((*(char *)((int)param_1 + 0x1bd) != param_2) &&
     (*(char *)((int)param_1 + 0x1bd) = param_2, (char)param_1[0x6f] != '\0')) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

