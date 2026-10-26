/*
 * FUN_00565c90 at 00565c90
 * undefined __register FUN_00565c90(int * param_1, undefined4 param_2)
 * Address ranges: 00565c90-00565d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56591c slot 3 for TSaveGame. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56591c slot 3 for
   TSaveGame. Original bytes unchanged; names and types still inferred. */

void FUN_00565c90(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00565d24;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0(&local_10,5);
  FUN_00403d94(local_10);
  *in_FS_OFFSET = "This method not implemented";
  FUN_00403dd4(&local_14,2);
  return;
}

