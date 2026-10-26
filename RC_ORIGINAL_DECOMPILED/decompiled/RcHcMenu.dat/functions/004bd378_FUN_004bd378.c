/*
 * FUN_004bd378 at 004bd378
 * undefined4 __register FUN_004bd378(int param_1)
 * Address ranges: 004bd378-004bd3b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 5 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 5 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004bd378(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 9) == '\x02') {
    FUN_00403d94("GetRowsAffected is illegal on a select query.");
  }
  uVar1 = FUN_004b8578(*(int *)(param_1 + 0x30));
  return uVar1;
}

