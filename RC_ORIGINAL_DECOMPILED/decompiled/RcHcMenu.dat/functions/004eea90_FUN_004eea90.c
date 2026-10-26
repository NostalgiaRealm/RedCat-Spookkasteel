/*
 * FUN_004eea90 at 004eea90
 * undefined __register FUN_004eea90(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004eea90-004eebc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eea90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_24 = &LAB_004eebca;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  local_c = FUN_004cf39c(*(int **)(*(int *)(param_4 + -4) + 0xc),param_2,param_3);
  FUN_004b49b8(local_c,*(int *)(*(int *)(param_4 + -4) + 0x10));
  *(undefined1 *)(local_c + 9) = *(undefined1 *)(*(int *)(param_4 + -4) + 0x18);
  local_c[0xf] = *(int *)(*(int *)(param_4 + -4) + 0x1c);
  local_1c = *(undefined4 *)PTR_DAT_00572470;
  local_18 = 7;
  FUN_004b4e04((int)local_c,&local_1c,0);
  iVar2 = FUN_0048ec24(*(int *)(*(int *)(*(int *)(param_4 + -4) + 0x1c) + 0x18));
  local_10 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  uVar1 = local_10;
  if (-1 < (int)local_10) {
    do {
      local_14 = uVar1;
      if (local_14 != local_10) {
        local_1c = *(undefined4 *)PTR_DAT_00572460;
        local_18 = 7;
        FUN_004b4e04((int)local_c,&local_1c,0);
      }
      FUN_004ee91c((int)local_8,(int)local_c,local_14,param_4);
      local_14 = local_14 - 1;
      uVar1 = local_14;
    } while (local_14 != 0xffffffff);
  }
  local_1c = *(undefined4 *)PTR_DAT_005725b8;
  local_18 = 7;
  FUN_004b4e04((int)local_c,&local_1c,0);
  FUN_004b4e70((int)local_c,*(int **)(*(int *)(param_4 + -4) + 0x28));
  FUN_004b4f0c(local_c,(char)local_8[6]);
  FUN_004d69fc(local_8,(int)local_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004eebd1;
  puStack_24 = (undefined1 *)0x4eebc9;
  FUN_00403094(local_c);
  return;
}

