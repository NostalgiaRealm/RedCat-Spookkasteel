/*
 * FUN_004bacdc at 004bacdc
 * undefined __register FUN_004bacdc(int param_1)
 * Address ranges: 004bacdc-004bad1e;004bad6d-004bad72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bacdc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4baced;
  FUN_004b6e60();
  puStack_1c = &LAB_004bad1f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x168))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

