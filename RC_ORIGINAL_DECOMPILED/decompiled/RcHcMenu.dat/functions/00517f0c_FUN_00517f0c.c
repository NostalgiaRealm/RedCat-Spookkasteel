/*
 * FUN_00517f0c at 00517f0c
 * undefined __register FUN_00517f0c(int * param_1, char param_2)
 * Address ranges: 00517f0c-00517f51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00517f0c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x517f17;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00517f52;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[9]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00517f59;
  puStack_14 = (undefined1 *)0x517f51;
  FUN_00418f4c(local_8,local_9 & 0xfc);
  return;
}

