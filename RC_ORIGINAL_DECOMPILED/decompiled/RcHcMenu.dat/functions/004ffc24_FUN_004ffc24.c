/*
 * FUN_004ffc24 at 004ffc24
 * undefined __register FUN_004ffc24(int * param_1, char param_2)
 * Address ranges: 004ffc24-004ffcab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ff028 slot -1 for TOAEdit2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ff028 slot -1 for
   TOAEdit2. Original bytes unchanged; names and types still inferred. */

void FUN_004ffc24(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4ffc2f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004ffcac;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8[0x80] = 0;
  local_8[0x81] = 0;
  local_8[0x66] = 0;
  local_8[0x67] = 0;
  local_8[0x68] = 0;
  local_8[0x69] = 0;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 0x89);
  FUN_0040e4b4(local_8 + 0x88);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004ffcb3;
  puStack_14 = (undefined1 *)0x4ffcab;
  FUN_004fe424(local_8,local_9 & 0xfc);
  return;
}

