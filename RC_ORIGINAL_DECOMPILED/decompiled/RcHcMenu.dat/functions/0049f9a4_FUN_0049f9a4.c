/*
 * FUN_0049f9a4 at 0049f9a4
 * undefined __register FUN_0049f9a4(int * param_1, char param_2)
 * Address ranges: 0049f9a4-0049f9fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot -1 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot -1 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_0049f9a4(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49f9af;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049f9fd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0049fa18(local_8);
  FUN_0040e4b4(local_8 + 0xc);
  FUN_0040e4b4(local_8 + 10);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049fa04;
  puStack_14 = (undefined1 *)0x49f9fc;
  FUN_00412a48(local_8,local_9 & 0xfc);
  return;
}

