/*
 * FUN_00458954 at 00458954
 * undefined __register FUN_00458954(int * param_1, int param_2, int param_3)
 * Address ranges: 00458954-00458a02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458954(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  char *local_28;
  int local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_28 = (char *)0x0;
  puStack_34 = &LAB_00458a03;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_14 = 0x7fffffff;
  local_1d = '\0';
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_24 = uVar2 + 1;
    local_18 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_18,&local_28);
      local_1c = FUN_00458810(local_28,local_c,local_10);
      if ((0 < local_1c) && (local_1c < local_14)) {
        local_1d = '\x01';
        local_14 = local_1c;
      }
      local_18 = local_18 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (local_1d == '\0') {
    local_14 = 0;
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00458a0a;
  puStack_34 = (undefined1 *)0x458a02;
  FUN_00403db0((int *)&local_28);
  return;
}

