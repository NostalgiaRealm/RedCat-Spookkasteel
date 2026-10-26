/*
 * FUN_0049d3b8 at 0049d3b8
 * undefined __register FUN_0049d3b8(int * param_1, char param_2)
 * Address ranges: 0049d3b8-0049d405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot -1 for TDaviDADLoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot -1 for
   TDaviDADLoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049d3b8(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49d3c3;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049d406;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  (**(code **)(*local_8 + 0x10))();
  FUN_0040e4b4(local_8 + 4);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049d40d;
  puStack_14 = (undefined1 *)0x49d405;
  FUN_0049f07c(local_8,local_9 & 0xfc);
  return;
}

