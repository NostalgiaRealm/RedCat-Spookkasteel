/*
 * FUN_004fe424 at 004fe424
 * undefined __register FUN_004fe424(int * param_1, char param_2)
 * Address ranges: 004fe424-004fe490
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe424(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4fe42f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004fe491;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x83]);
  local_8[0x83] = 0;
  FUN_00403094((int *)local_8[0x84]);
  local_8[0x84] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fe498;
  puStack_14 = (undefined1 *)0x4fe490;
  FUN_004349bc(local_8,local_9 & 0xfc);
  return;
}

