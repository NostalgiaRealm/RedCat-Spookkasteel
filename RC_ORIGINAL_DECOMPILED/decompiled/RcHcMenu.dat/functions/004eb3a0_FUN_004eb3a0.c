/*
 * FUN_004eb3a0 at 004eb3a0
 * undefined __register FUN_004eb3a0(int param_1)
 * Address ranges: 004eb3a0-004eb3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 8 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 8 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eb3a0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_004eb3dc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_00459af0(-0x11);
  FUN_004889f0(*(int **)(local_8 + 0x30));
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004eb3e3;
  puStack_10 = (undefined1 *)0x4eb3db;
  FUN_00459b04();
  return;
}

