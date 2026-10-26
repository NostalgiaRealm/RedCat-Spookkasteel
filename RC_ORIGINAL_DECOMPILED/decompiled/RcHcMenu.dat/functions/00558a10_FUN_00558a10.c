/*
 * FUN_00558a10 at 00558a10
 * undefined __register FUN_00558a10(int * param_1, char param_2)
 * Address ranges: 00558a10-00558a41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 54 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 54 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558a10(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x6d]) {
    *(char *)(param_1 + 0x6d) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

