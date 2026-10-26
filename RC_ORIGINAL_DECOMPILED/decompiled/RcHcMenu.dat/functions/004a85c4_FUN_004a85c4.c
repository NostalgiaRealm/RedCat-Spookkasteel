/*
 * FUN_004a85c4 at 004a85c4
 * undefined __register FUN_004a85c4(int param_1, int * param_2)
 * Address ranges: 004a85c4-004a86a2;004a86b9-004a86ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a85c4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  puStack_2c = (undefined1 *)0x4a85db;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406b00(param_2);
  puStack_30 = &LAB_004a86cf;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (DAT_00571974 != '\0') {
    puStack_3c = &LAB_004a86a3;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    puStack_2c = &stack0xfffffffc;
    iVar1 = (**(code **)(*local_c + 0x2c))();
    uVar2 = FUN_004a825c(iVar1,0x4a86e8);
    uVar3 = local_18;
    if ((int)local_18 < 0) {
      thunk_FUN_00402874(uVar2);
      uVar3 = extraout_ECX;
    }
    uVar3 = FUN_00402944(*(undefined4 **)(local_8 + 0x38),local_10,uVar3);
    if (local_14 != (undefined4 *)0x0) {
      if ((int)local_1c < 0) {
        thunk_FUN_00402874(uVar3);
        local_1c = extraout_ECX_00;
      }
      puVar4 = (undefined4 *)(*(uint *)(local_8 + 0x38) + local_18);
      if (CARRY4(*(uint *)(local_8 + 0x38),local_18)) {
        puVar4 = (undefined4 *)thunk_FUN_00402874((uint)puVar4);
        local_1c = extraout_ECX_01;
        local_14 = extraout_EDX;
      }
      FUN_00402944(puVar4,local_14,local_1c);
    }
    iVar1 = (**(code **)(*local_c + 0x4c))();
    FUN_004a825c(iVar1,0x4a86e8);
    *in_FS_OFFSET = uStack_40;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004a86d6;
  puStack_30 = (undefined1 *)0x4a86ce;
  FUN_00406aa0((int *)&local_c);
  return;
}

