/*
 * FUN_004ea7e4 at 004ea7e4
 * undefined __register FUN_004ea7e4(int param_1, undefined4 param_2)
 * Address ranges: 004ea7e4-004ea807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 23 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 23 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004ea7e4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x238);
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  return;
}

