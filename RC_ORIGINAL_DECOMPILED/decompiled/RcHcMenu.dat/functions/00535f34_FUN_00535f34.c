/*
 * FUN_00535f34 at 00535f34
 * undefined __register FUN_00535f34(int * param_1, char param_2)
 * Address ranges: 00535f34-00535fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535f34(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x535f3f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00535fbc;
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
  FUN_0040e4b4(local_8 + 0xbe);
  FUN_0040e4b4(local_8 + 0xbf);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00535fc3;
  puStack_14 = (undefined1 *)0x535fbb;
  FUN_0052f800(local_8,local_9 & 0xfc);
  return;
}

