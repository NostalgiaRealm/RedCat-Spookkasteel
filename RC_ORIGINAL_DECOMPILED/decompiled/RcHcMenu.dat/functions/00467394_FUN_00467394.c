/*
 * FUN_00467394 at 00467394
 * undefined __register FUN_00467394(int param_1)
 * Address ranges: 00467394-004673db;00467411-00467428
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467394(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(char *)(param_1 + 8) != '\0') {
    puStack_1c = &LAB_004673dc;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(**(int **)(param_1 + 4) + 0x16c))(*(int **)(param_1 + 4),0);
    FUN_0047114c(*(int **)(param_1 + 4),'\x01');
    *in_FS_OFFSET = uStack_20;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  puStack_18 = (undefined1 *)0x467423;
  FUN_00472948(*(int **)(param_1 + 4));
  return;
}

