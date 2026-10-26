/*
 * FUN_004bf748 at 004bf748
 * undefined __register FUN_004bf748(int * param_1, char param_2)
 * Address ranges: 004bf748-004bf78d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot -1 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot -1 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004bf748(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4bf753;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004bf78e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 0x15);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004bf795;
  puStack_14 = (undefined1 *)0x4bf78d;
  FUN_004ceee4(local_8,local_9 & 0xfc);
  return;
}

