/*
 * FUN_0054b738 at 0054b738
 * undefined __register FUN_0054b738(int * param_1, char param_2)
 * Address ranges: 0054b738-0054b780
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b738(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x54b743;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0054b781;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00548bdc((int *)local_8[1],local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0054b788;
  puStack_14 = (undefined1 *)0x54b780;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

