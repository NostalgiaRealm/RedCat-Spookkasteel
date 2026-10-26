/*
 * FUN_004b8578 at 004b8578
 * undefined4 __register FUN_004b8578(int param_1)
 * Address ranges: 004b8578-004b85bd;004b860c-004b8614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b8578(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  
  puStack_1c = (undefined1 *)0x4b8589;
  FUN_004b6e60();
  puStack_20 = &LAB_004b85be;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_1c = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x40))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return local_c;
}

