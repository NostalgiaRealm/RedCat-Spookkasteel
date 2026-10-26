/*
 * FUN_0046a33c at 0046a33c
 * undefined __register FUN_0046a33c(int * param_1)
 * Address ranges: 0046a33c-0046a383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a33c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_10;
  double local_c;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_1c = &LAB_0046a384;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x58))(param_1,&local_10);
  FUN_0040ab80(local_10);
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046a38b;
  puStack_1c = (undefined1 *)0x46a383;
  FUN_00403db0((int *)&local_10);
  return;
}

