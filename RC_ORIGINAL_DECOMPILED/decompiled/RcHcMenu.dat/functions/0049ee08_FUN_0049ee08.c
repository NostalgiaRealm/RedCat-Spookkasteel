/*
 * FUN_0049ee08 at 0049ee08
 * undefined __register FUN_0049ee08(int * param_1, char param_2)
 * Address ranges: 0049ee08-0049ee4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ee08(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49ee13;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049ee4e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 5);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049ee55;
  puStack_14 = (undefined1 *)0x49ee4d;
  FUN_00412a48(local_8,local_9 & 0xfc);
  return;
}

