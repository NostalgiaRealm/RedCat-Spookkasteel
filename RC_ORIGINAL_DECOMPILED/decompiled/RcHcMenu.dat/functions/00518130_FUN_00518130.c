/*
 * FUN_00518130 at 00518130
 * undefined __register FUN_00518130(int * param_1, char param_2)
 * Address ranges: 00518130-00518178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot -1 for TDaviGlyphButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot -1 for
   TDaviGlyphButton2. Original bytes unchanged; names and types still inferred. */

void FUN_00518130(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x51813b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00518179;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x84]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00518180;
  puStack_14 = (undefined1 *)0x518178;
  FUN_00517144(local_8,local_9 & 0xfc);
  return;
}

