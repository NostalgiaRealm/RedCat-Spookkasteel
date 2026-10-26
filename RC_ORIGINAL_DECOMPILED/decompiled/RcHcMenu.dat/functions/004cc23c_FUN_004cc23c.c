/*
 * FUN_004cc23c at 004cc23c
 * undefined __register FUN_004cc23c(int * param_1, int * param_2)
 * Address ranges: 004cc23c-004cc32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cc23c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_24 = &LAB_004cc34e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_14 = (int *)0x0;
  local_d = 0;
  puStack_30 = &LAB_004cc32c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00449cd0((int *)&PTR_FUN_004cbf0c,'\x01',0);
  FUN_004cc158(local_8,local_c);
  FUN_00432744(local_14[0xb5],(uint *)*local_8);
  FUN_00432744(local_14[0xb7],(uint *)*local_c);
  iVar1 = (**(code **)(*local_14 + 0xd8))();
  if (iVar1 == 1) {
    FUN_00432714(local_14[0xb5],(int *)&local_18);
    FUN_00403e04(local_8,local_18);
    FUN_00432714(local_14[0xb7],(int *)&local_1c);
    FUN_00403e04(local_c,local_1c);
    local_d = *local_8 != 0;
    FUN_004cc0b4(*local_8);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004cc333;
  puStack_30 = (undefined1 *)0x4cc32b;
  FUN_00403094(local_14);
  return;
}

