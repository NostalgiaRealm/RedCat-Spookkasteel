/*
 * FUN_004baf6c at 004baf6c
 * undefined __register FUN_004baf6c(int param_1, VARIANTARG * param_2)
 * Address ranges: 004baf6c-004bafda;004bb029-004bb03e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004baf6c(int param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  _union_2683 local_1c;
  int local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_30 = &LAB_004bb03f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4baf9a;
  local_8 = param_1;
  FUN_004b73dc(param_2,(VARIANT *)&local_1c.n2,&local_c);
  puStack_38 = (undefined1 *)0x4baf9f;
  FUN_004b6e60();
  puStack_3c = &LAB_004bafdb;
  puStack_40 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_40;
  uVar1 = *(undefined4 *)(local_c + 8);
  piVar2 = *(int **)(local_8 + 0xc);
  puStack_38 = &stack0xfffffffc;
  iVar3 = (**(code **)(*piVar2 + 0x48))();
  FUN_00406b9c(iVar3);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar2;
  *in_FS_OFFSET = uVar1;
  puStack_40 = &LAB_004bb046;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

