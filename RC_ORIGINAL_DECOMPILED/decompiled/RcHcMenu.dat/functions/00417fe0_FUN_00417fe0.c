/*
 * FUN_00417fe0 at 00417fe0
 * undefined __register FUN_00417fe0(void)
 * Address ranges: 00417fe0-00418027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417fe0(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_00418028;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00403fd4((int *)&local_8,(byte *)(*(int *)(in_stack_00000004 + -0xc) + 0x1a));
  FUN_00418d9c(*(int *)(in_stack_00000004 + -4),local_8);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0041802f;
  puStack_10 = (undefined1 *)0x418027;
  FUN_00403db0((int *)&local_8);
  return;
}

