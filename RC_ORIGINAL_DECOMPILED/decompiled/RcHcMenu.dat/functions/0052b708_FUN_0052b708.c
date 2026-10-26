/*
 * FUN_0052b708 at 0052b708
 * undefined __register FUN_0052b708(int * param_1, char param_2)
 * Address ranges: 0052b708-0052b755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052b708(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52b713;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0052b756;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[4]);
  local_8[4] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052b75d;
  puStack_14 = (undefined1 *)0x52b755;
  FUN_0054b738(local_8,local_9 & 0xfc);
  return;
}

