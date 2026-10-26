/*
 * FUN_00554004 at 00554004
 * undefined __register FUN_00554004(int * param_1)
 * Address ranges: 00554004-00554029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x553ae4 slot 51 for TCustomGDIRadioButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x553ae4 slot 51 for
   TCustomGDIRadioButton. Original bytes unchanged; names and types still inferred. */

void FUN_00554004(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xbc))(param_1,1);
  }
  return;
}

