/*
 * FUN_004f95bc at 004f95bc
 * undefined __register FUN_004f95bc(int * param_1, int * param_2)
 * Address ranges: 004f95bc-004f9614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f95bc(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = 0;
  puStack_1c = &LAB_004f9615;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004f8ee4);
  (**(code **)(*piVar1 + 0x70))(piVar1,&local_14);
  local_d = (**(code **)(*local_8 + 0x6c))(local_8,local_14);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f961c;
  puStack_1c = (undefined1 *)0x4f9614;
  FUN_00403db0(&local_14);
  return;
}

