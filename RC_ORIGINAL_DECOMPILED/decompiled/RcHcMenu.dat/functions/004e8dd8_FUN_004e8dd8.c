/*
 * FUN_004e8dd8 at 004e8dd8
 * undefined __register FUN_004e8dd8(int * param_1, int * param_2)
 * Address ranges: 004e8dd8-004e8e79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 5 for TCurrencyProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 5 for
   TCurrencyProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e8dd8(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_30;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_1c;
  uint local_18;
  undefined1 local_14;
  undefined1 local_13;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_1c = 0;
  puStack_20 = (undefined1 *)0x4e8df7;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404780((int)&local_18,(int)&DAT_004e7d2c);
  puStack_24 = &LAB_004e8e7a;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_20 = &stack0xfffffffc;
  local_18 = FUN_004e8e88((int)local_8);
  local_14 = FUN_004e8ee8((int)local_8);
  local_13 = FUN_004e8f48((int)local_8);
  FUN_004e8fa8((int)local_8,&local_1c);
  FUN_00403e48(&local_10,local_1c);
  (**(code **)(*local_8 + 0x70))();
  FUN_004e7d50(&local_18,local_c);
  uStack_30 = (undefined4)(longlong)ROUND(in_ST0);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e8e81;
  FUN_00403db0(&local_1c);
  FUN_0040484c((int)&local_18,(int)&DAT_004e7d2c);
  return;
}

