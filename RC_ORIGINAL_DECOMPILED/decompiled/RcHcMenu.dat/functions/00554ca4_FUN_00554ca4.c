/*
 * FUN_00554ca4 at 00554ca4
 * undefined4 __register FUN_00554ca4(void)
 * Address ranges: 00554ca4-00554d52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00554ca4(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_005549d4(*(int *)PTR_DAT_005725d4,*(uint **)(PTR_DAT_00572404 + 0x38));
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f0),*(uint **)(PTR_DAT_00572404 + 0xf0));
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4),*(uint **)(PTR_DAT_00572404 + 0xec));
  FUN_00403e04((int *)(*(int *)PTR_DAT_005725d4 + 0x30c),(undefined4 *)"RCMn3");
  FUN_00403e04((int *)(*(int *)PTR_DAT_005725d4 + 0x310),(undefined4 *)"RCMn4");
  FUN_0043262c(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2ec),0,extraout_ECX);
  iVar1 = (**(code **)(**(int **)PTR_DAT_005725d4 + 0xd8))();
  return CONCAT31((int3)((uint)(iVar1 + -1) >> 8),iVar1 + -1 == 0);
}

