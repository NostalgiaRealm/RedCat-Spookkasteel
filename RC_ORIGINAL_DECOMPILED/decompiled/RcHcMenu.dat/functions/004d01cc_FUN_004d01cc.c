/*
 * FUN_004d01cc at 004d01cc
 * undefined __register FUN_004d01cc(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004d01cc-004d0268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 24 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 24 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d01cc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_128 = &LAB_004d0269;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_14 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  iVar1 = FUN_00497394(0,param_2,param_3);
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_138 = "This function should not be called if the application is multi-user.";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  local_9 = 0;
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_1c,2);
  return;
}

