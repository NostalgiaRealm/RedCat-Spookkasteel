/*
 * FUN_004cc158 at 004cc158
 * undefined __register FUN_004cc158(int * param_1, undefined4 param_2)
 * Address ranges: 004cc158-004cc1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cc158(int *param_1,undefined4 param_2)

{
  int *in_FS_OFFSET;
  undefined4 **ppuVar1;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  puStack_20 = &LAB_004cc1f3;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_28 = (undefined1 *)0x4cc189;
  local_10 = param_2;
  local_8 = param_1;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',(undefined4 *)"CARTHAGO.INI");
  puStack_2c = &LAB_004cc1d6;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  ppuVar1 = &local_14;
  puStack_28 = &stack0xfffffffc;
  (**(code **)*local_c)(local_c,"Login","UserName",ppuVar1,*local_8);
  FUN_00403e04(local_8,local_14);
  *in_FS_OFFSET = (int)ppuVar1;
  puStack_30 = &LAB_004cc1dd;
  FUN_00403094(local_c);
  return;
}

