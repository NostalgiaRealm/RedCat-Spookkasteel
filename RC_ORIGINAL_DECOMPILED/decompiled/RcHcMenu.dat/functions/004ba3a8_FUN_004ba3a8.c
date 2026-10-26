/*
 * FUN_004ba3a8 at 004ba3a8
 * undefined __register FUN_004ba3a8(int param_1)
 * Address ranges: 004ba3a8-004ba3e7;004ba436-004ba43b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ba3a8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4ba3b7;
  FUN_004b6e60();
  puStack_1c = &LAB_004ba3e8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0xc4))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

