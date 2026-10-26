/*
 * FUN_00541e48 at 00541e48
 * undefined __register FUN_00541e48(int param_1, uint * param_2)
 * Address ranges: 00541e48-00541e90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541e48(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x541e5c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_00541e91;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00432744(*(int *)(local_8 + 0x27c),local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00541e98;
  puStack_14 = (undefined1 *)0x541e90;
  FUN_00403db0((int *)&local_c);
  return;
}

