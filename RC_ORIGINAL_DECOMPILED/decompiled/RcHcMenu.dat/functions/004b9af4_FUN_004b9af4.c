/*
 * FUN_004b9af4 at 004b9af4
 * undefined2 __register FUN_004b9af4(int param_1)
 * Address ranges: 004b9af4-004b9b3a;004b9b89-004b9b91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_004b9af4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_c;
  
  puStack_1c = (undefined1 *)0x4b9b05;
  FUN_004b6e60();
  puStack_20 = &LAB_004b9b3b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_1c = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x20))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return local_c;
}

