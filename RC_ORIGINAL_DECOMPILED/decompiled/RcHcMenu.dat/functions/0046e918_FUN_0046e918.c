/*
 * FUN_0046e918 at 0046e918
 * undefined __register FUN_0046e918(int * param_1)
 * Address ranges: 0046e918-0046e950
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e918(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 6) = 1;
  puStack_10 = &LAB_0046e951;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x50))();
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 6) = 0;
  return;
}

