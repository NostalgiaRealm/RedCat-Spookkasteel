/*
 * FUN_00554d74 at 00554d74
 * undefined __register FUN_00554d74(void)
 * Address ranges: 00554d74-00554eaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00554d74(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar2;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_18 = &LAB_00554eab;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_005549d4(*(int *)PTR_DAT_005725d4,*(uint **)(PTR_DAT_00572404 + 100));
  local_c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4) + 0x30);
  FUN_00432714(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4),(int *)&local_10);
  FUN_0043262c(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2f0),0,extraout_ECX);
  piVar1 = (int *)(*(uint *)(*(int *)PTR_DAT_005725d4 + 0x2f4) + 0x38);
  iVar2 = *(int *)(*(int *)PTR_DAT_005725d4 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(*(int *)PTR_DAT_005725d4 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(*(int *)PTR_DAT_005725d4 + 0x2f4));
    iVar2 = extraout_EDX;
  }
  FUN_00431f34(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2f4),iVar2);
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4),*(uint **)(PTR_DAT_00572404 + 0xe4));
  iVar2 = (**(code **)(**(int **)PTR_DAT_005725d4 + 0xd8))();
  local_5 = iVar2 == 1;
  FUN_0043262c(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2f0),
               CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  FUN_00431f34(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2f4),local_c);
  FUN_00432744(*(int *)(*(int *)PTR_DAT_005725d4 + 0x2f4),local_10);
  FUN_0043262c(*(int **)(*(int *)PTR_DAT_005725d4 + 0x2ec),0,extraout_ECX_01);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00554eb2;
  puStack_18 = (undefined1 *)0x554eaa;
  FUN_00403db0((int *)&local_10);
  return;
}

