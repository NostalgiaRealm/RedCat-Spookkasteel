/*
 * FUN_004fcc04 at 004fcc04
 * undefined __register FUN_004fcc04(int * param_1)
 * Address ranges: 004fcc04-004fcc69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fcc04(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_14 = &LAB_004fcc6a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  FUN_0040a970((int *)&local_c);
  FUN_00403e04(local_8 + 0x94,local_c);
  *(undefined1 *)((int)local_8 + 0x272) = 1;
  FUN_004fd03c(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fcc71;
  puStack_14 = (undefined1 *)0x4fcc69;
  FUN_00403db0((int *)&local_c);
  return;
}

