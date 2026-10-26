/*
 * FUN_00468180 at 00468180
 * undefined __register FUN_00468180(int * param_1)
 * Address ranges: 00468180-004681a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4624d8 slot 5 for TFlatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4624d8 slot 5 for
   TFlatList. Original bytes unchanged; names and types still inferred. */

void FUN_00468180(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))();
  if (cVar1 == '\0') {
    FUN_00468200(param_1);
  }
  FUN_0041449c((int)param_1);
  return;
}

