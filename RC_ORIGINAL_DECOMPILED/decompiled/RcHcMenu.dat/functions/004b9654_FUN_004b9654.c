/*
 * FUN_004b9654 at 004b9654
 * undefined __register FUN_004b9654(int param_1)
 * Address ranges: 004b9654-004b9690;004b96df-004b96e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b9654(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4b9663;
  FUN_004b6e60();
  puStack_1c = &LAB_004b9691;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 100))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

