/*
 * FUN_0051def0 at 0051def0
 * undefined __register FUN_0051def0(int * param_1, char param_2)
 * Address ranges: 0051def0-0051df8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51b9c4 slot -1 for TDaviGridHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51b9c4 slot -1 for
   TDaviGridHeader. Original bytes unchanged; names and types still inferred. */

void FUN_0051def0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x51defb;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0051df8f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x9e]);
  local_8[0x9e] = 0;
  FUN_00403094((int *)local_8[0x9d]);
  local_8[0x9d] = 0;
  FUN_00403094((int *)local_8[0x82]);
  local_8[0x82] = 0;
  FUN_00403094((int *)local_8[0x88]);
  local_8[0x88] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051df96;
  puStack_14 = (undefined1 *)0x51df8e;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

