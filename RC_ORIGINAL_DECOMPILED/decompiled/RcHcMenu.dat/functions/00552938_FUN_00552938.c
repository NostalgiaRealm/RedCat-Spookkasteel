/*
 * FUN_00552938 at 00552938
 * undefined __register FUN_00552938(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 00552938-005529b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00552938(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [4];
  int local_c;
  int *local_8;
  
  puVar2 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_2c = (undefined1 *)0x55295b;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_30 = &LAB_005529b9;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0044f5e0(*(int *)PTR_DAT_005725f0,0);
  (**(code **)(*(int *)local_8[0x7c] + 0xb8))((int *)local_8[0x7c],local_1c,local_c);
  *(undefined1 *)(local_8 + 0x7d) = 1;
  (**(code **)(*local_8 + 0xb0))();
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005529c0;
  puStack_30 = (undefined1 *)0x5529b8;
  FUN_00403db0(&local_c);
  return;
}

