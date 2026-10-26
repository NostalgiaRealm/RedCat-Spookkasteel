/*
 * FUN_004bf310 at 004bf310
 * undefined __register FUN_004bf310(int param_1)
 * Address ranges: 004bf310-004bf3d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bf310(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_24._0_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._8_4_ = 0;
  local_24._12_4_ = 0;
  puStack_2c = &LAB_004bf3d2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x24) == 0) {
    piVar2 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
    *(int **)(local_8 + 0x24) = piVar2;
    iVar3 = FUN_004ba1d8(*(int *)(local_8 + 0x34));
    sVar1 = FUN_004b74a4(iVar3);
    uVar4 = (int)sVar1 - 1;
    if (SBORROW4((int)sVar1,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_14 = uVar4 + 1;
      local_10 = 0;
      do {
        iVar3 = FUN_004ba1d8(*(int *)(local_8 + 0x34));
        FUN_004053dc((VARIANTARG *)&local_24.n2,local_10);
        uVar5 = FUN_004bb34c(iVar3,(VARIANTARG *)&local_24.n2);
        (**(code **)(**(int **)(local_8 + 0x24) + 0xc))(*(int **)(local_8 + 0x24),uVar5);
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  local_c = *(undefined4 *)(local_8 + 0x24);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004bf3d9;
  puStack_2c = (undefined1 *)0x4bf3d1;
  FUN_00405bcc((VARIANTARG *)&local_24.n2);
  return;
}

