/*
 * FUN_004bb8e4 at 004bb8e4
 * undefined __register FUN_004bb8e4(int param_1)
 * Address ranges: 004bb8e4-004bb94e;004bb99d-004bb9cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bb8e4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_3c;
  undefined *puStackY_38;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_14;
  
  puStack_28 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_2c = &LAB_004bb9ce;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_004b6e60();
    puStackY_38 = &DAT_004bb94f;
    uStackY_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_3c;
    FUN_00405bcc((VARIANTARG *)&local_14.n2);
    iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x58))();
    FUN_00406b9c(iVar1);
    FUN_004b6e4c();
    *in_FS_OFFSET = uStackY_3c;
    puStackY_38 = (undefined *)0x4bb9b0;
    piVar2 = FUN_004b7164((int *)&PTR_FUN_004b6c80,'\x01',(short *)&local_14,param_1);
    *(int **)(param_1 + 0x14) = piVar2;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004bb9d5;
  puStack_2c = (undefined1 *)0x4bb9cd;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

