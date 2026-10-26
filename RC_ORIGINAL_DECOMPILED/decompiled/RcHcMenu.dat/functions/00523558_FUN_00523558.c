/*
 * FUN_00523558 at 00523558
 * undefined __register FUN_00523558(int * param_1, char param_2)
 * Address ranges: 00523558-005235b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51c0dc slot -1 for TDaviGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51c0dc slot -1 for
   TDaviGridData. Original bytes unchanged; names and types still inferred. */

void FUN_00523558(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x523563;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_005235ba;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00516508(local_8[0x82]);
  FUN_00403094((int *)local_8[0x82]);
  local_8[0x82] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005235c1;
  puStack_14 = (undefined1 *)0x5235b9;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

