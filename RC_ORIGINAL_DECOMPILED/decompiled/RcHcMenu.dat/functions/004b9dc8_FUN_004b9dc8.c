/*
 * FUN_004b9dc8 at 004b9dc8
 * undefined2 __register FUN_004b9dc8(int param_1)
 * Address ranges: 004b9dc8-004b9e0e;004b9e5d-004b9e65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_004b9dc8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_c;
  
  puStack_1c = (undefined1 *)0x4b9dd9;
  FUN_004b6e60();
  puStack_20 = &LAB_004b9e0f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_1c = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x34))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return local_c;
}

