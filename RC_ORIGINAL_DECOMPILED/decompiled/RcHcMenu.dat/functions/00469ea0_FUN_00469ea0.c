/*
 * FUN_00469ea0 at 00469ea0
 * undefined __register FUN_00469ea0(int param_1, int param_2)
 * Address ranges: 00469ea0-00469ef8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469ea0(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00469ef9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00468d14(param_1);
  if ((param_2 != 0) && (param_2 == *(int *)(param_1 + 0x28))) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572364,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  *(int *)(param_1 + 0x58) = param_2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00469f00;
  puStack_18 = (undefined1 *)0x469ef8;
  FUN_00403db0((int *)&local_8);
  return;
}

