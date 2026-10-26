/*
 * FUN_004fc7f8 at 004fc7f8
 * undefined __register FUN_004fc7f8(int * param_1, char param_2)
 * Address ranges: 004fc7f8-004fc958
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot -1 for TDaviCalculator. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot -1 for
   TDaviCalculator. Original bytes unchanged; names and types still inferred. */

void FUN_004fc7f8(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4fc803;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004fc959;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x7e]);
  FUN_00403094((int *)local_8[0x7f]);
  FUN_00403094((int *)local_8[0x80]);
  FUN_00403094((int *)local_8[0x81]);
  FUN_00403094((int *)local_8[0x82]);
  FUN_00403094((int *)local_8[0x83]);
  FUN_00403094((int *)local_8[0x84]);
  FUN_00403094((int *)local_8[0x85]);
  FUN_00403094((int *)local_8[0x86]);
  FUN_00403094((int *)local_8[0x87]);
  FUN_00403094((int *)local_8[0x88]);
  FUN_00403094((int *)local_8[0x89]);
  FUN_00403094((int *)local_8[0x8a]);
  FUN_00403094((int *)local_8[0x8b]);
  FUN_00403094((int *)local_8[0x8c]);
  FUN_00403094((int *)local_8[0x8d]);
  FUN_00403094((int *)local_8[0x8e]);
  FUN_00403094((int *)local_8[0x8f]);
  FUN_00403094((int *)local_8[0x90]);
  FUN_00403094((int *)local_8[0x91]);
  FUN_00403094((int *)local_8[0x93]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fc960;
  puStack_14 = (undefined1 *)0x4fc958;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

