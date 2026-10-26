/*
 * FUN_00418d9c at 00418d9c
 * undefined __register FUN_00418d9c(int param_1, undefined4 * param_2)
 * Address ranges: 00418d9c-00418de1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418d9c(int param_1,undefined4 *param_2)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_00418de2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0040407c((int *)&local_8,*(undefined4 **)(param_1 + 0x2c),param_2);
  FUN_00418df0(param_1,local_8,extraout_ECX);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00418de9;
  puStack_18 = (undefined1 *)0x418de1;
  FUN_00403db0((int *)&local_8);
  return;
}

