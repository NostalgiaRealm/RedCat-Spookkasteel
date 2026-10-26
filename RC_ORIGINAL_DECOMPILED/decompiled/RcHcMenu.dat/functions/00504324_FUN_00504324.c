/*
 * FUN_00504324 at 00504324
 * undefined __register FUN_00504324(int * param_1, uint * param_2)
 * Address ranges: 00504324-00504382
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00504324(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x504338;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_00504383;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar1 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00503898);
  FUN_00503c58(iVar1,local_c);
  (**(code **)(*local_8 + 0xe8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0050438a;
  puStack_14 = (undefined1 *)0x504382;
  FUN_00403db0((int *)&local_c);
  return;
}

