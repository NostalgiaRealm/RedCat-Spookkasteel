/*
 * FUN_004ba5b8 at 004ba5b8
 * undefined __register FUN_004ba5b8(int param_1)
 * Address ranges: 004ba5b8-004ba5f7;004ba646-004ba64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ba5b8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4ba5c7;
  FUN_004b6e60();
  puStack_1c = &LAB_004ba5f8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0xe4))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

