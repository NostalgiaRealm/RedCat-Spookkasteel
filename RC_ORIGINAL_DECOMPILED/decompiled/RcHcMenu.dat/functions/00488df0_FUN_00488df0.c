/*
 * FUN_00488df0 at 00488df0
 * undefined __register FUN_00488df0(int param_1)
 * Address ranges: 00488df0-00488e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488df0(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_00488e44;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_00473f5c();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))(*(int **)(param_1 + 0x238),&local_8);
    FUN_004755ac(local_8,param_1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00488e4b;
  puStack_18 = (undefined1 *)0x488e43;
  FUN_00403db0((int *)&local_8);
  return;
}

