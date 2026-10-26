/*
 * FUN_00553360 at 00553360
 * undefined __register FUN_00553360(void)
 * Address ranges: 00553360-00553390
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot published:SetIsRootForm for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot
   published:SetIsRootForm for TGameMenuScreen. Original bytes unchanged; names and types still
   inferred. */

void FUN_00553360(void)

{
  if (DAT_00574854 == (int *)0x0) {
    FUN_00403d94("GLOBAL_FormList does not exist");
  }
  (**(code **)(*DAT_00574854 + 8))();
  return;
}

