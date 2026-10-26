/*
 * FUN_004f8378 at 004f8378
 * undefined __register FUN_004f8378(int param_1, int param_2)
 * Address ranges: 004f8378-004f8423;004f842b-004f842e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8378(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x4f8392;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x14))();
  if (iVar1 != local_c) {
    puStack_18 = (undefined1 *)0x4f83a4;
    FUN_00459af0(-0xb);
    puStack_18 = (undefined1 *)0x4f83b2;
    FUN_00413580(*(int **)(local_8 + 0x1f0));
    puStack_1c = &LAB_004f8424;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    (**(code **)(**(int **)(local_8 + 0x1f0) + 0x40))();
    if (0 < local_c) {
      local_14 = local_c;
      local_10 = 1;
      do {
        (**(code **)(**(int **)(local_8 + 0x1f0) + 0x34))(*(int **)(local_8 + 0x1f0),0);
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    *(int *)(local_8 + 0x23c) = local_c;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4f842b;
    puStack_1c = (undefined1 *)0x4f841e;
    FUN_0041363c(*(int **)(local_8 + 0x1f0));
    puStack_1c = (undefined1 *)0x4f8423;
    FUN_00459b04();
    return;
  }
  return;
}

