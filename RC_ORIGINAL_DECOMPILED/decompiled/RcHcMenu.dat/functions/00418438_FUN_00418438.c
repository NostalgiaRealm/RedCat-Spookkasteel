/*
 * FUN_00418438 at 00418438
 * undefined __register FUN_00418438(void)
 * Address ranges: 00418438-004184ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418438(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_004184ad;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar1 = FUN_00417f94();
  if ((char)uVar1 != '\0') {
    FUN_0040fd88(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                 *(undefined4 **)(*(int *)(in_stack_00000004 + 8) + -0xc),(int *)&local_8);
    FUN_00404140(*(uint **)(in_stack_00000004 + -4),local_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004184b4;
  puStack_14 = (undefined1 *)0x4184ac;
  FUN_00403db0((int *)&local_8);
  return;
}

