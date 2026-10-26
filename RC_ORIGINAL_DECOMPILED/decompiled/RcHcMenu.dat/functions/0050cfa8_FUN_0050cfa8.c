/*
 * FUN_0050cfa8 at 0050cfa8
 * undefined __register FUN_0050cfa8(int * param_1, char param_2)
 * Address ranges: 0050cfa8-0050d02f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050cfa8(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x50cfb3;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0050d030;
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
  FUN_0040e4b4(local_8 + 0xa1);
  FUN_0040e4b4(local_8 + 0xa0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0050d037;
  puStack_14 = (undefined1 *)0x50d02f;
  FUN_00501338(local_8,local_9 & 0xfc);
  return;
}

