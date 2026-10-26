/*
 * FUN_004bac24 at 004bac24
 * undefined __register FUN_004bac24(int param_1)
 * Address ranges: 004bac24-004bac69;004bacb8-004bacbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bac24(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4bac37;
  FUN_004b6e60();
  puStack_1c = &LAB_004bac6a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x164))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

