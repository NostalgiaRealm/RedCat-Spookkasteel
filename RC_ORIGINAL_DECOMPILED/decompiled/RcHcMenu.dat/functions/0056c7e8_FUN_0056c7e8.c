/*
 * FUN_0056c7e8 at 0056c7e8
 * undefined __register FUN_0056c7e8(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0056c7e8-0056c80a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot published:FormCloseQuery for TfrmException2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot
   published:FormCloseQuery for TfrmException2. Original bytes unchanged; names and types still
   inferred. */

void FUN_0056c7e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(bool *)param_3 = *(int *)(param_1 + 0x234) != 0;
  return;
}

