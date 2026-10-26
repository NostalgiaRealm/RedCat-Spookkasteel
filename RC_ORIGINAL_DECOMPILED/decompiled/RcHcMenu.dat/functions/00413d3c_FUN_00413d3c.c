/*
 * FUN_00413d3c at 00413d3c
 * undefined __register FUN_00413d3c(int * param_1, int param_2, int param_3)
 * Address ranges: 00413d3c-00413dbf;00413dc7-00413ddc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413d3c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00413ddd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != param_2) {
    puStack_28 = (undefined1 *)0x413d6b;
    FUN_00413580(param_1);
    puStack_2c = &LAB_00413dc0;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_c);
    uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_2);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    FUN_00413c0c(local_8,param_3,local_c,uVar1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x413dc7;
    puStack_2c = (undefined1 *)0x413dbf;
    FUN_0041363c(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00413de4;
  puStack_20 = (undefined1 *)0x413ddc;
  FUN_00403db0(&local_c);
  return;
}

