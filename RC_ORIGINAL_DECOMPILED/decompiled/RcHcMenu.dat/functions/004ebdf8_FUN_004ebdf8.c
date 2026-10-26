/*
 * FUN_004ebdf8 at 004ebdf8
 * undefined __register FUN_004ebdf8(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004ebdf8-004ebe47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 4 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 4 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ebdf8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004ea1ac(*(int *)(param_1 + 0x50),(byte *)"USER NAME",param_2);
  FUN_004ea1ac(*(int *)(param_1 + 0x50),(byte *)"PASSWORD",param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x30) = 0;
  (**(code **)(**(int **)(param_1 + 0x50) + 0x48))(*(int **)(param_1 + 0x50),1);
  return;
}

