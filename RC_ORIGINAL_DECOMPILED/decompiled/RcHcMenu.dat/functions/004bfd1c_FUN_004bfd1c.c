/*
 * FUN_004bfd1c at 004bfd1c
 * undefined __register FUN_004bfd1c(undefined4 param_1, int param_2)
 * Address ranges: 004bfd1c-004bfd7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 1 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 1 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004bfd1c(undefined4 param_1,int param_2)

{
  FUN_00403e04((int *)(param_2 + 4),(undefined4 *)&DAT_004bfd88);
  *(undefined1 *)(param_2 + 8) = 1;
  FUN_00403e04((int *)(param_2 + 0xc),(undefined4 *)&DAT_004bfd98);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined1 *)(param_2 + 0x11) = 0x5b;
  *(undefined1 *)(param_2 + 0x12) = 0x5d;
  FUN_00403e04((int *)(param_2 + 0x14),(undefined4 *)&DAT_004bfd88);
  *(undefined1 *)(param_2 + 0x18) = 0x2a;
  return;
}

