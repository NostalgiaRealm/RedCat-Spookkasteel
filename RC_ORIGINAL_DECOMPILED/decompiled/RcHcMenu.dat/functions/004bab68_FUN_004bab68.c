/*
 * FUN_004bab68 at 004bab68
 * undefined __register FUN_004bab68(int param_1)
 * Address ranges: 004bab68-004babaa;004babf9-004babfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bab68(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4bab79;
  FUN_004b6e60();
  puStack_1c = &LAB_004babab;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x160))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

