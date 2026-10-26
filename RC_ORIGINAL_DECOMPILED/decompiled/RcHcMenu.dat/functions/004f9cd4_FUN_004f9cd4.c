/*
 * FUN_004f9cd4 at 004f9cd4
 * undefined __register FUN_004f9cd4(int * param_1, char param_2)
 * Address ranges: 004f9cd4-004f9d19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f9c64 slot -1 for TDaviListSelection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f9c64 slot -1 for
   TDaviListSelection. Original bytes unchanged; names and types still inferred. */

void FUN_004f9cd4(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4f9cdf;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004f9d1a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[2]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f9d21;
  puStack_14 = (undefined1 *)0x4f9d19;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

