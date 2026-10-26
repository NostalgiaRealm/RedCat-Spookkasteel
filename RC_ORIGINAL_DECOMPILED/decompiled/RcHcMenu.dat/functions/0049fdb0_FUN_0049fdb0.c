/*
 * FUN_0049fdb0 at 0049fdb0
 * undefined4 __register FUN_0049fdb0(int param_1)
 * Address ranges: 0049fdb0-0049fdcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 7 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 7 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0049fdb0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x28) >> 8),
                  *(int *)(*(int *)(param_1 + 0x28) + 4) == 0);
}

