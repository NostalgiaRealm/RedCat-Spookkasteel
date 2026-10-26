/*
 * FUN_0049e0e0 at 0049e0e0
 * undefined __register FUN_0049e0e0(int * param_1, char param_2)
 * Address ranges: 0049e0e0-0049e12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot -1 for TDaviAVILoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot -1 for
   TDaviAVILoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049e0e0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49e0eb;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049e130;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  (**(code **)(*local_8 + 0x10))();
  FUN_0040e4b4(local_8 + 0x2a);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049e137;
  puStack_14 = (undefined1 *)0x49e12f;
  FUN_0049f07c(local_8,local_9 & 0xfc);
  return;
}

