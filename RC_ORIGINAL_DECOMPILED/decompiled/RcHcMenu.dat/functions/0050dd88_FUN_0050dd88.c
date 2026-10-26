/*
 * FUN_0050dd88 at 0050dd88
 * undefined __register FUN_0050dd88(int * param_1, char param_2)
 * Address ranges: 0050dd88-0050ddf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050dd88(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x50dd93;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0050ddf5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x81]);
  local_8[0x81] = 0;
  FUN_00403094((int *)local_8[0x80]);
  local_8[0x80] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0050ddfc;
  puStack_14 = (undefined1 *)0x50ddf4;
  FUN_004349bc(local_8,local_9 & 0xfc);
  return;
}

