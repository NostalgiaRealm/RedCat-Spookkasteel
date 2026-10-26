/*
 * FUN_004c1e7c at 004c1e7c
 * undefined __register FUN_004c1e7c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004c1e7c-004c1eee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 14 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 14 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c1e7c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = 0;
  puStack_124 = &LAB_004c1eef;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_14 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_00404038(&local_18,(undefined4 *)".GetAutoIncs: Not supported.");
  FUN_00459bd4(local_18);
  local_9 = 0;
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_004c1ef6;
  puStack_124 = (undefined1 *)0x4c1eee;
  FUN_00403db0(&local_18);
  return;
}

