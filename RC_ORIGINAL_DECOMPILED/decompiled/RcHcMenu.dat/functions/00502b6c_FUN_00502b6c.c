/*
 * FUN_00502b6c at 00502b6c
 * undefined __register FUN_00502b6c(int * param_1, char param_2)
 * Address ranges: 00502b6c-00502bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502b6c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x502b77;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00502bc0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x82]);
  local_8[0x82] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00502bc7;
  puStack_14 = (undefined1 *)0x502bbf;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

