/*
 * FUN_0046a68c at 0046a68c
 * undefined __register FUN_0046a68c(int * param_1, undefined4 param_2)
 * Address ranges: 0046a68c-0046a6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a68c(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046a6d2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00409bd8(param_2,&local_8);
  (**(code **)(*param_1 + 0xa0))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a6d9;
  puStack_18 = (undefined1 *)0x46a6d1;
  FUN_00403db0(&local_8);
  return;
}

