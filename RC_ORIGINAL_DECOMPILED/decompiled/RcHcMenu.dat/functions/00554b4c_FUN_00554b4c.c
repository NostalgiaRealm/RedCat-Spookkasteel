/*
 * FUN_00554b4c at 00554b4c
 * undefined __register FUN_00554b4c(int param_1)
 * Address ranges: 00554b4c-00554c62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00554b4c(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  undefined1 local_14;
  uint *local_10;
  undefined1 local_9;
  int local_8;
  
  local_10 = (uint *)0x0;
  puStack_1c = (undefined1 *)0x554b62;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_20 = &LAB_00554c63;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_18 = local_8;
  local_14 = 0xb;
  puStack_1c = &stack0xfffffffc;
  FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 0xc),&local_18,0,(int *)&local_10);
  FUN_005549d4(*(int *)PTR_DAT_005725d4,local_10);
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f0),*(uint **)(PTR_DAT_00572404 + 0xf0));
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4),*(uint **)(PTR_DAT_00572404 + 0xec));
  FUN_00403e04((int *)(*(int *)PTR_DAT_005725d4 + 0x30c),(undefined4 *)"RCMn3");
  FUN_00403e04((int *)(*(int *)PTR_DAT_005725d4 + 0x310),(undefined4 *)"RCMn4");
  FUN_00403e04((int *)(*(int *)PTR_DAT_005725d4 + 0x314),(undefined4 *)"RcMn8");
  FUN_0043262c(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2ec),0,extraout_ECX);
  iVar1 = (**(code **)(**(int **)PTR_DAT_005725d4 + 0xd8))();
  local_9 = iVar1 == 1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00554c6a;
  puStack_20 = (undefined1 *)0x554c5a;
  FUN_00403db0((int *)&local_10);
  puStack_20 = (undefined1 *)0x554c62;
  FUN_00403db0(&local_8);
  return;
}

