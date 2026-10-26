/*
 * FUN_0045b870 at 0045b870
 * undefined __register FUN_0045b870(int * param_1, char param_2)
 * Address ranges: 0045b870-0045b8bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045b870(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45b87b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0045b8be;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0045b8fc(local_8);
  FUN_00403094((int *)local_8[1]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045b8c5;
  puStack_14 = (undefined1 *)0x45b8bd;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

