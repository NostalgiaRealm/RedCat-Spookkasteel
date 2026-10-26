/*
 * FUN_005549d4 at 005549d4
 * undefined __register FUN_005549d4(int param_1, uint * param_2)
 * Address ranges: 005549d4-00554a1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005549d4(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x5549e8;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_00554a1d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00432744(*(int *)(local_8 + 0x308),local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00554a24;
  puStack_14 = (undefined1 *)0x554a1c;
  FUN_00403db0((int *)&local_c);
  return;
}

