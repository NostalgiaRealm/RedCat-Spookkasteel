/*
 * FUN_004c1f28 at 004c1f28
 * int * __register FUN_004c1f28(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004c1f28-004c1f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 16 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 16 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

int * FUN_004c1f28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_004bf65c((int *)&DAT_004bcb7c,'\x01',param_3);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  return piVar1;
}

