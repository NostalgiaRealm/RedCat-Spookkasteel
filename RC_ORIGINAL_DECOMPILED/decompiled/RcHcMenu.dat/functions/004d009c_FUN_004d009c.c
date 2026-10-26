/*
 * FUN_004d009c at 004d009c
 * undefined __register FUN_004d009c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004d009c-004d0134
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 23 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 23 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d009c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_004d0135;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00497394(0,param_2,param_3);
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "This function should not be called if the application is multi-user.";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

