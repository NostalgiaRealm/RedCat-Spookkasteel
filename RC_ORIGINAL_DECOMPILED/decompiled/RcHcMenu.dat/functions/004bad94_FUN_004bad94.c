/*
 * FUN_004bad94 at 004bad94
 * undefined __register FUN_004bad94(int param_1, undefined4 * param_2)
 * Address ranges: 004bad94-004badda;004bae29-004bae2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bad94(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4bada5;
  FUN_004b6e60();
  puStack_1c = &LAB_004baddb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00404474(param_2);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

