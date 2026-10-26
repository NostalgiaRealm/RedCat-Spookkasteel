/*
 * FUN_004fca04 at 004fca04
 * undefined __register FUN_004fca04(int param_1, undefined4 * param_2)
 * Address ranges: 004fca04-004fca66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fca04(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = (uint *)0x0;
  puStack_14 = (undefined1 *)0x4fca1d;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_004fca67;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0040407c((int *)&local_10,local_c,(undefined4 *)&LAB_004fca7c);
  FUN_00432744(*(int *)(local_8 + 0x24c),local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004fca6e;
  puStack_18 = (undefined1 *)0x4fca66;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

