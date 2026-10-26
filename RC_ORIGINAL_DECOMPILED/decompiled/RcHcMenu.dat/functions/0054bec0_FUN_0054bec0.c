/*
 * FUN_0054bec0 at 0054bec0
 * undefined __register FUN_0054bec0(undefined4 * param_1, int param_2)
 * Address ranges: 0054bec0-0054bf5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054bec0(undefined4 *param_1,int param_2)

{
  ULONG_PTR UVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_10 = (undefined4 *)0x0;
  puStack_14 = (undefined1 *)0x54bed9;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_14 = (undefined1 *)0x54bee1;
  FUN_004041e4(local_c);
  puStack_18 = &LAB_0054bf7f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x54bf02;
  puStack_14 = &stack0xfffffffc;
  FUN_00403e48((int *)&local_10,*(int *)(*(int *)PTR_DAT_005723fc + 0x40));
  puStack_24 = &LAB_0054bf5d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00403e04((int *)(*(int *)PTR_DAT_005723fc + 0x40),local_8);
  UVar1 = FUN_0054b974(local_c);
  FUN_0045184c(*(int *)PTR_DAT_005723fc,8,UVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0054bf64;
  puStack_24 = (undefined1 *)0x54bf5c;
  FUN_00403e04((int *)(*(int *)PTR_DAT_005723fc + 0x40),local_10);
  return;
}

