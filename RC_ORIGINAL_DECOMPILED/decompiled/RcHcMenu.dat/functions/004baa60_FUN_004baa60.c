/*
 * FUN_004baa60 at 004baa60
 * undefined __register FUN_004baa60(int param_1, undefined4 param_2, VARIANTARG * param_3)
 * Address ranges: 004baa60-004baad8;004bab27-004bab3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004baa60(int param_1,undefined4 param_2,VARIANTARG *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
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
  puStack_30 = &LAB_004bab3d;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4baa94;
  local_8 = param_1;
  FUN_004b73dc(param_3,(VARIANT *)&local_1c.n2,&local_c);
  puStack_38 = (undefined1 *)0x4baa99;
  FUN_004b6e60();
  puStack_3c = &LAB_004baad9;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  uVar1 = *(undefined4 *)(local_c + 4);
  piVar2 = *(int **)(local_8 + 0xc);
  puStack_38 = &stack0xfffffffc;
  iVar3 = (**(code **)(*piVar2 + 0x104))();
  FUN_00406b9c(iVar3);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar2;
  *in_FS_OFFSET = uVar1;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

