/*
 * FUN_004494c8 at 004494c8
 * undefined4 __register FUN_004494c8(int param_1)
 * Address ranges: 004494c8-004494e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x445ea4 slot 45 for TScrollingWinControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x445ea4 slot 45 for
   TScrollingWinControl. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004494c8(int param_1)

{
  if ((*(char *)(param_1 + 0x4c) == '\0') &&
     ((*(char *)(param_1 + 0x144) == '\0' || (*(char *)(param_1 + 0x17c) == '\0')))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

