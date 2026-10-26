/*
 * FUN_00558aac at 00558aac
 * undefined __register FUN_00558aac(int * param_1, char param_2)
 * Address ranges: 00558aac-00558add
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 57 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 57 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558aac(int *param_1,char param_2)

{
  if ((char)param_1[0x6f] != param_2) {
    *(char *)(param_1 + 0x6f) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

