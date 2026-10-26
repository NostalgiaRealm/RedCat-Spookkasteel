/*
 * FUN_00546f40 at 00546f40
 * undefined __register FUN_00546f40(int * param_1, char param_2)
 * Address ranges: 00546f40-00546f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5458f4 slot -1 for TAppObjQueryListBookMark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5458f4 slot -1 for
   TAppObjQueryListBookMark. Original bytes unchanged; names and types still inferred. */

void FUN_00546f40(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x546f4b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00546f86;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[3]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00546f8d;
  puStack_14 = (undefined1 *)0x546f85;
  FUN_0054b738(local_8,local_9 & 0xfc);
  return;
}

