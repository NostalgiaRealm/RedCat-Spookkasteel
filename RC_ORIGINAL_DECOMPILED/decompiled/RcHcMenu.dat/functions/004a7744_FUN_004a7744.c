/*
 * FUN_004a7744 at 004a7744
 * undefined __register FUN_004a7744(int * param_1, char param_2)
 * Address ranges: 004a7744-004a7781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 39 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 39 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a7744(int *param_1,char param_2)

{
  if ((*(char *)((int)param_1 + 0x13d) != param_2) &&
     (*(char *)((int)param_1 + 0x13d) = param_2, (char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

