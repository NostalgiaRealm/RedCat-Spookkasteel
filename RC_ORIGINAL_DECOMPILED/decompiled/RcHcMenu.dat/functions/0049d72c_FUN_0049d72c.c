/*
 * FUN_0049d72c at 0049d72c
 * undefined __register FUN_0049d72c(int param_1, int param_2)
 * Address ranges: 0049d72c-0049d7bc;0049d7c4-0049d7d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d72c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (undefined *)0x0;
  puStack_20 = &LAB_0049d7da;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 < 0) {
    puStack_28 = (undefined1 *)0x49d75b;
    thunk_FUN_00402874(0);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puStack_28 = (undefined1 *)0x49d766;
  (**(code **)(**(int **)(local_8 + 0x14) + 0xc))();
  puStack_28 = (undefined1 *)0x49d76e;
  uVar2 = FUN_00409dd0(local_14);
  if ((char)uVar2 != '\0') {
    puStack_28 = (undefined1 *)0x49d77d;
    local_10 = (int *)FUN_0049d4a8(local_8,local_14);
    puStack_28 = (undefined1 *)0x49d78b;
    (**(code **)(*local_10 + 0x48))(local_10,local_14);
    puStack_2c = &LAB_0049d7bd;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(**(int **)(local_8 + 0x10) + 8))(*(int **)(local_8 + 0x10),local_10);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x49d7c4;
    puStack_2c = (undefined1 *)0x49d7bc;
    FUN_00403094(local_10);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0049d7e1;
  puStack_20 = (undefined1 *)0x49d7d9;
  FUN_00403db0((int *)&local_14);
  return;
}

