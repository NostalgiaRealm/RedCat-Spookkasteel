/*
 * FUN_004184bc at 004184bc
 * undefined __register FUN_004184bc(void)
 * Address ranges: 004184bc-0041851b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004184bc(void)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  uint in_stack_00000004;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0041851c;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_0040fd88(*(int **)(in_stack_00000004 - 8),*(undefined4 **)(in_stack_00000004 - 0xc),
               (int *)&local_8);
  cVar1 = FUN_00418438();
  if (cVar1 == '\0') {
    FUN_00417fe0();
    FUN_00418e38(*(int *)(in_stack_00000004 - 4),local_8,in_stack_00000004);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00418523;
  puStack_10 = (undefined1 *)0x41851b;
  FUN_00403db0((int *)&local_8);
  return;
}

