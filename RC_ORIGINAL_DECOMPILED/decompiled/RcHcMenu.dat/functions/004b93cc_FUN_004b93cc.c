/*
 * FUN_004b93cc at 004b93cc
 * undefined __register FUN_004b93cc(int param_1, undefined4 * param_2)
 * Address ranges: 004b93cc-004b9412;004b9461-004b9466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b93cc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4b93dd;
  FUN_004b6e60();
  puStack_1c = &LAB_004b9413;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00404474(param_2);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

