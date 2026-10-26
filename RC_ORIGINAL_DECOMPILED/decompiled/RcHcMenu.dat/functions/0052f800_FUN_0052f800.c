/*
 * FUN_0052f800 at 0052f800
 * undefined __register FUN_0052f800(int * param_1, char param_2)
 * Address ranges: 0052f800-0052f88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052f800(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52f80b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0052f88c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00502590(local_8);
  FUN_00530860((int)local_8);
  FUN_0040e4b4(local_8 + 0xb3);
  FUN_0040e4b4(local_8 + 0xb5);
  FUN_0040e4b4(local_8 + 0xba);
  FUN_0040e4b4(local_8 + 0xb4);
  FUN_0040e4b4(local_8 + 0xb7);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052f893;
  puStack_14 = (undefined1 *)0x52f88b;
  FUN_00501338(local_8,local_9 & 0xfc);
  return;
}

