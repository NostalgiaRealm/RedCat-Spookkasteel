/*
 * FUN_00422ba0 at 00422ba0
 * undefined __register FUN_00422ba0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00422ba0-00422bdf;00422bf7-00422c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x422bb9;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041adbc,'\x01',param_3);
  puStack_1c = &LAB_00422be0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x422bff;
  FUN_00420484(iVar1);
  uStack_18 = 0x422c07;
  FUN_00420488(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}

