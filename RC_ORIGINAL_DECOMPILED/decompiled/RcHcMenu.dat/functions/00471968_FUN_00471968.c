/*
 * FUN_00471968 at 00471968
 * undefined __register FUN_00471968(int param_1)
 * Address ranges: 00471968-00471980
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 45 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 45 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00471968(int param_1)

{
  FUN_004686f8(*(int *)(param_1 + 0x24));
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  }
  return;
}

