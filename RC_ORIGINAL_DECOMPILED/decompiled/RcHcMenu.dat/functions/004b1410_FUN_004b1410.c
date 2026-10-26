/*
 * FUN_004b1410 at 004b1410
 * undefined __register FUN_004b1410(int * param_1, char param_2)
 * Address ranges: 004b1410-004b1452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b1410(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4b141b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004b1453;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_004b149c((uint)local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004b145a;
  puStack_14 = (undefined1 *)0x4b1452;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

