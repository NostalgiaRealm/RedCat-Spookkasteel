/*
 * FUN_0046a5e0 at 0046a5e0
 * undefined __register FUN_0046a5e0(int * param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 0046a5e0-0046a626
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a5e0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0046a627;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0040bd30(&local_8,param_2,param_3);
  (**(code **)(*param_1 + 0xa0))(param_1,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046a62e;
  puStack_14 = (undefined1 *)0x46a626;
  FUN_00403db0(&local_8);
  return;
}

