/*
 * FUN_005018b8 at 005018b8
 * undefined __register FUN_005018b8(int param_1, uint * param_2)
 * Address ranges: 005018b8-005018fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005018b8(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x5018cc;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_005018fb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00432744(local_8,local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00501902;
  puStack_14 = (undefined1 *)0x5018fa;
  FUN_00403db0((int *)&local_c);
  return;
}

