/*
 * FUN_004af150 at 004af150
 * undefined __register FUN_004af150(int * param_1, char param_2)
 * Address ranges: 004af150-004af1b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4aeee4 slot -1 for TGDIForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4aeee4 slot -1 for
   TGDIForm. Original bytes unchanged; names and types still inferred. */

void FUN_004af150(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4af15b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004af1b3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[0xb5] != 0) {
    puStack_10 = &stack0xfffffffc;
    DeleteObject((HGDIOBJ)local_8[0xb5]);
  }
  FUN_0040e4b4(local_8 + 0xb4);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004af1ba;
  puStack_14 = (undefined1 *)0x4af1b2;
  FUN_0044a05c(local_8,local_9 & 0xfc);
  return;
}

