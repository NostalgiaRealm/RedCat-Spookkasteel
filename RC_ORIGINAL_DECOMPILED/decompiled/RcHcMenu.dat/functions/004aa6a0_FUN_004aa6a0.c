/*
 * FUN_004aa6a0 at 004aa6a0
 * undefined __register FUN_004aa6a0(int * param_1, char param_2)
 * Address ranges: 004aa6a0-004aa6e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot -1 for TGDIHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot -1 for
   TGDIHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004aa6a0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4aa6ab;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004aa6e8;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 0x80);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004aa6ef;
  puStack_14 = (undefined1 *)0x4aa6e7;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

