/*
 * FUN_00503c58 at 00503c58
 * undefined __register FUN_00503c58(int param_1, uint * param_2)
 * Address ranges: 00503c58-00503ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503c58(int param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x503c6c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  bVar4 = true;
  puStack_14 = &LAB_00503ce4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404140(*(uint **)(local_8 + 0xc),local_c);
  if (!bVar4) {
    FUN_00403e04((int *)(local_8 + 0xc),local_c);
    iVar1 = FUN_00403224(*(int **)(local_8 + 4),(int)&PTR_FUN_00503a74);
    piVar2 = (int *)FUN_0050421c(iVar1);
    uVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,*(undefined4 *)(local_8 + 0xc));
    *(undefined4 *)(local_8 + 0x10) = uVar3;
    *(undefined1 *)(local_8 + 8) = 0;
    FUN_00501180(local_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00503ceb;
  puStack_14 = (undefined1 *)0x503ce3;
  FUN_00403db0((int *)&local_c);
  return;
}

