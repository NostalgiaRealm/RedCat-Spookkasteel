/*
 * FUN_004e6164 at 004e6164
 * undefined __register FUN_004e6164(int * param_1, byte param_2)
 * Address ranges: 004e6164-004e61fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 23 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 23 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e6164(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004e61fe;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_9 = param_2;
  local_8 = param_1;
  if (param_2 < 2) {
    puStack_118 = &stack0xfffffffc;
    FUN_004e5f94();
  }
  else {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = " Unhandled case-part";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

