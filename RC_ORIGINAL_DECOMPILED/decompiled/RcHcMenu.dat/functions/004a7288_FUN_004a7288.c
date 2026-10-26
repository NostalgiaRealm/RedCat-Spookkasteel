/*
 * FUN_004a7288 at 004a7288
 * undefined __register FUN_004a7288(int * param_1, char param_2)
 * Address ranges: 004a7288-004a72dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot -1 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot -1 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a7288(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4a7293;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004a72dd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 0x4b);
  FUN_0040e4b4(local_8 + 0x4c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a72e4;
  puStack_14 = (undefined1 *)0x4a72dc;
  FUN_00439a80(local_8,local_9 & 0xfc);
  return;
}

