/*
 * FUN_004d4a90 at 004d4a90
 * undefined __register FUN_004d4a90(undefined4 param_1, int param_2, int param_3)
 * Address ranges: 004d4a90-004d4adc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4cca04 slot 13 for TAppDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4cca04 slot 13 for
   TAppDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d4a90(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x4d4aa7;
  local_14 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_18 = (undefined1 *)0x4d4aaf;
  FUN_004041e4(local_14);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = 0;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d4ae4;
  uStack_1c = 0x4d4adc;
  FUN_00403dd4(&local_14,2);
  return;
}

