/*
 * FUN_004ea808 at 004ea808
 * undefined __register FUN_004ea808(int param_1, undefined4 param_2)
 * Address ranges: 004ea808-004ea82b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 24 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 24 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004ea808(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x238);
  (**(code **)(*piVar1 + 0x34))(piVar1,param_2);
  return;
}

