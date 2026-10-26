/*
 * FUN_004c8590 at 004c8590
 * undefined __register FUN_004c8590(int * param_1)
 * Address ranges: 004c8590-004c85cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c5d88 slot 3 for TDaviSpeedButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c5d88 slot 3 for
   TDaviSpeedButton. Original bytes unchanged; names and types still inferred. */

void FUN_004c8590(int *param_1)

{
  char cVar1;
  
  FUN_0043442c(param_1);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_004c718c(param_1[0x4d],cVar1 == '\0');
  return;
}

