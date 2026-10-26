/*
 * FUN_004e83fc at 004e83fc
 * undefined __register FUN_004e83fc(int param_1, undefined4 param_2, int * param_3, undefined4 param_4)
 * Address ranges: 004e83fc-004e84c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e83fc(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 local_17 [3];
  int local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = 0;
  puStack_28 = (undefined1 *)0x4e841f;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404780((int)&local_1c,(int)&DAT_004e7d2c);
  puStack_2c = &LAB_004e84c2;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  puStack_28 = &stack0xfffffffc;
  local_1c = FUN_004e82ec(local_8);
  uVar1 = FUN_004e831c(local_8);
  local_18 = (undefined1)uVar1;
  uVar1 = FUN_004e834c(local_8);
  local_17[0] = (undefined1)uVar1;
  FUN_004e837c(local_8,&local_20);
  FUN_00403e48(&local_14,local_20);
  if (*(short *)(local_8 + 0x5a) != 0) {
    (**(code **)(local_8 + 0x58))
              (*(undefined4 *)(local_8 + 0x5c),local_8,local_c,&local_14,local_17,&local_18,
               &local_1c);
  }
  FUN_004e7d50(&local_1c,local_10);
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_004e84c9;
  FUN_00403db0(&local_20);
  FUN_0040484c((int)&local_1c,(int)&DAT_004e7d2c);
  return;
}

