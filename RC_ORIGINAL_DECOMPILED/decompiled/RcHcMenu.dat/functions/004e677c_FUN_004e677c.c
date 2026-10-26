/*
 * FUN_004e677c at 004e677c
 * undefined __register FUN_004e677c(int * param_1, char param_2)
 * Address ranges: 004e677c-004e67c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e31fc slot -1 for TAppObjCachedMemListBookMark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e31fc slot -1 for
   TAppObjCachedMemListBookMark. Original bytes unchanged; names and types still inferred. */

void FUN_004e677c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4e6787;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004e67ca;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[4]);
  local_8[4] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e67d1;
  puStack_14 = (undefined1 *)0x4e67c9;
  FUN_0054b738(local_8,local_9 & 0xfc);
  return;
}

