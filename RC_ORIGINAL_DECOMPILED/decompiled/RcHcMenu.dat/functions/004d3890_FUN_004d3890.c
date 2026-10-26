/*
 * FUN_004d3890 at 004d3890
 * undefined __register FUN_004d3890(void)
 * Address ranges: 004d3890-004d38d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d3890(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_10 = &LAB_004d38d7;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_004cd2f0(*(int **)(in_stack_00000004 + -4),*(int **)(in_stack_00000004 + -8),(int *)&local_8);
  FUN_004579bc(local_8,'\0');
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004d38de;
  puStack_10 = (undefined1 *)0x4d38d6;
  FUN_00403db0((int *)&local_8);
  return;
}

