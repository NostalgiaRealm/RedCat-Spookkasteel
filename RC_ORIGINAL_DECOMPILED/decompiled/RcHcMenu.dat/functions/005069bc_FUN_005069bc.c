/*
 * FUN_005069bc at 005069bc
 * undefined __register FUN_005069bc(int * param_1, char param_2)
 * Address ranges: 005069bc-00506a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x505868 slot -1 for TOAComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x505868 slot -1 for
   TOAComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_005069bc(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x5069c7;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00506a4c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_005071e4((int)local_8);
  local_8[0x80] = 0;
  local_8[0x81] = 0;
  local_8[0x66] = 0;
  local_8[0x67] = 0;
  local_8[0x68] = 0;
  local_8[0x69] = 0;
  FUN_0040e4b4(local_8 + 0xa1);
  FUN_0040e4b4(local_8 + 0xa0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00506a53;
  puStack_14 = (undefined1 *)0x506a4b;
  FUN_00501338(local_8,local_9 & 0xfc);
  return;
}

