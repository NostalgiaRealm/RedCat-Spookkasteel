/*
 * FUN_004c9340 at 004c9340
 * undefined __register FUN_004c9340(int * param_1)
 * Address ranges: 004c9340-004c937b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 35 for TDaviButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 35 for
   TDaviButton. Original bytes unchanged; names and types still inferred. */

void FUN_004c9340(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_00435d04(param_1);
  FUN_004c718c(param_1[0x81],cVar1 == '\0');
  return;
}

