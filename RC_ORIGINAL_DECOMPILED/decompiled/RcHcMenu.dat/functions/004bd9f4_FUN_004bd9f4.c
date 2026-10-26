/*
 * FUN_004bd9f4 at 004bd9f4
 * undefined __register FUN_004bd9f4(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 004bd9f4-004bda48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 1 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 1 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bd9f4(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4bda0b;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_18 = &LAB_004bda49;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004040f0(local_10,3);
  *in_FS_OFFSET = &DAT_004bda68;
  FUN_00403db0(&local_c);
  return;
}

