/*
 * FUN_004cf0ec at 004cf0ec
 * undefined __register FUN_004cf0ec(int * param_1)
 * Address ranges: 004cf0ec-004cf171
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf0ec(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004cf172;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  if (param_1[5] < 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".GetIsInUse: illegal FInUseCount");
    FUN_00403d94(local_10);
  }
  local_9 = local_8[5] != 0;
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004cf179;
  puStack_118 = (undefined1 *)0x4cf171;
  FUN_00403db0(&local_10);
  return;
}

