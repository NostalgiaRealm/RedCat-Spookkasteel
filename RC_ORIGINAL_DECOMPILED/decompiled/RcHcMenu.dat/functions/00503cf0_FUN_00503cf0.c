/*
 * FUN_00503cf0 at 00503cf0
 * undefined __register FUN_00503cf0(int param_1, int param_2)
 * Address ranges: 00503cf0-00503db5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503cf0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00503db6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x10) == param_2) goto LAB_00503da0;
  *(int *)(param_1 + 0x10) = param_2;
  puVar1 = &stack0xfffffffc;
  if (param_2 < 0) {
LAB_00503d4e:
    puStack_18 = puVar1;
    FUN_00403db0((int *)(local_8 + 0xc));
    *(undefined1 *)(local_8 + 8) = 1;
  }
  else {
    iVar2 = FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_00503a74);
    piVar3 = (int *)FUN_0050421c(iVar2);
    iVar2 = (**(code **)(*piVar3 + 0x14))();
    puVar1 = puStack_18;
    if (iVar2 <= local_c) goto LAB_00503d4e;
    iVar2 = FUN_00403224(*(int **)(local_8 + 4),(int)&PTR_FUN_00503a74);
    piVar3 = (int *)FUN_0050421c(iVar2);
    (**(code **)(*piVar3 + 0xc))(piVar3,local_c,&local_10);
    FUN_00403e04((int *)(local_8 + 0xc),local_10);
    *(undefined1 *)(local_8 + 8) = 0;
  }
  FUN_00501180(local_8);
LAB_00503da0:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00503dbd;
  puStack_1c = (undefined1 *)0x503db5;
  FUN_00403db0((int *)&local_10);
  return;
}

