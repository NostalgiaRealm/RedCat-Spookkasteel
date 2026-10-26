/*
 * FUN_0049193c at 0049193c
 * undefined __register FUN_0049193c(int * param_1)
 * Address ranges: 0049193c-004919c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot 0 for TAppObjDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot 0 for
   TAppObjDesc. Original bytes unchanged; names and types still inferred. */

void FUN_0049193c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10 [2];
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10[0] = 0;
  local_14 = 0;
  puStack_11c = &LAB_004919c8;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_10[1] = 0;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0(local_10,3);
  FUN_00403d94(local_10[0]);
  *in_FS_OFFSET = "Should be overriden";
  FUN_00403dd4(&local_14,2);
  return;
}

