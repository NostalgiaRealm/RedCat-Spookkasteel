/*
 * FUN_0049f07c at 0049f07c
 * undefined __register FUN_0049f07c(int * param_1, char param_2)
 * Address ranges: 0049f07c-0049f0c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f07c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49f087;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049f0c2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049f0c9;
  puStack_14 = (undefined1 *)0x49f0c1;
  FUN_00412a48(local_8,local_9 & 0xfc);
  return;
}

