/*
 * FUN_004b74a4 at 004b74a4
 * undefined2 __register FUN_004b74a4(int param_1)
 * Address ranges: 004b74a4-004b74ea;004b7539-004b7541
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_004b74a4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_c;
  
  puStack_1c = (undefined1 *)0x4b74b5;
  FUN_004b6e60();
  puStack_20 = &LAB_004b74eb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_1c = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x1c))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return local_c;
}

