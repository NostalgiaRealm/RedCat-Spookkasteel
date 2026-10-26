/*
 * FUN_004e7d50 at 004e7d50
 * undefined __register FUN_004e7d50(uint * param_1, int * param_2)
 * Address ranges: 004e7d50-004e7e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e7d50(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  undefined1 local_a;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = (undefined4 *)param_1[2];
  puStack_2c = (undefined1 *)0x4e7d76;
  local_8 = param_2;
  FUN_0040496c((int)&local_20,(int)&DAT_004e7d2c);
  puStack_30 = &LAB_004e7e97;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = (uint)(byte)*PTR_DAT_00572214;
  local_9 = *PTR_DAT_005722bc;
  local_a = *PTR_DAT_005724d4;
  puStack_38 = (undefined1 *)0x4e7db3;
  puStack_2c = &stack0xfffffffc;
  FUN_00403e48((int *)&local_14,*(int *)PTR_DAT_00572450);
  puStack_3c = &LAB_004e7e6c;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  uVar1 = local_20;
  puStack_38 = &stack0xfffffffc;
  if (0xff < local_20) {
    puStack_38 = &stack0xfffffffc;
    uVar1 = thunk_FUN_00402874(local_20);
  }
  *PTR_DAT_00572214 = (char)uVar1;
  *PTR_DAT_005722bc = (undefined1)local_1c;
  *PTR_DAT_005724d4 = local_1c._1_1_;
  FUN_00403e04((int *)PTR_DAT_00572450,local_18);
  FUN_004e804c();
  FUN_0040aa08(4,(uint)(byte)*PTR_DAT_00572214,local_8);
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004e7e73;
  uVar1 = local_10;
  if (0xff < local_10) {
    puStack_3c = (undefined1 *)0x4e7e42;
    uVar1 = thunk_FUN_00402874(local_10);
  }
  *PTR_DAT_00572214 = (char)uVar1;
  *PTR_DAT_005722bc = local_9;
  *PTR_DAT_005724d4 = local_a;
  puStack_3c = (undefined1 *)0x4e7e6b;
  FUN_00403e04((int *)PTR_DAT_00572450,local_14);
  return;
}

