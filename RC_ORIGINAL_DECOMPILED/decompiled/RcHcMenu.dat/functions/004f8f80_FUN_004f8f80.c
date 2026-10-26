/*
 * FUN_004f8f80 at 004f8f80
 * undefined __register FUN_004f8f80(int * param_1, char param_2)
 * Address ranges: 004f8f80-004f8fc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f8e6c slot -1 for TLookupPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f8e6c slot -1 for
   TLookupPropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_004f8f80(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4f8f8b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004f8fc6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0xd]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f8fcd;
  puStack_14 = (undefined1 *)0x4f8fc5;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

