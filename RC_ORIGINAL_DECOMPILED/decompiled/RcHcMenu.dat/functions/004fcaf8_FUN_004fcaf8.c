/*
 * FUN_004fcaf8 at 004fcaf8
 * undefined __register FUN_004fcaf8(int param_1, uint * param_2)
 * Address ranges: 004fcaf8-004fcb40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fcaf8(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x4fcb0c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_004fcb41;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00432744(*(int *)(local_8 + 0x244),local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fcb48;
  puStack_14 = (undefined1 *)0x4fcb40;
  FUN_00403db0((int *)&local_c);
  return;
}

