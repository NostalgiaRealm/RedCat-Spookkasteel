/*
 * FUN_004ffaa4 at 004ffaa4
 * undefined __register FUN_004ffaa4(int param_1)
 * Address ranges: 004ffaa4-004ffb50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffaa4(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_20;
  _union_2683 local_1c;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  local_20 = (undefined4 *)0x0;
  puStack_28 = &LAB_004ffb51;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_004fd950);
    FUN_00432714(iVar1,&local_c);
    if (local_c == 0) {
      FUN_004f1368(local_8,*(int **)(local_8 + 0xc));
    }
    else {
      iVar1 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_004fd950);
      FUN_00432714(iVar1,(int *)&local_20);
      FUN_004054ac((VARIANTARG *)&local_1c.n2,local_20);
      FUN_004964d0(*(int **)(local_8 + 0xc),(undefined4 *)&local_1c);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ffb58;
  puStack_28 = (undefined1 *)0x4ffb40;
  FUN_00403db0((int *)&local_20);
  puStack_28 = (undefined1 *)0x4ffb48;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  puStack_28 = (undefined1 *)0x4ffb50;
  FUN_00403db0(&local_c);
  return;
}

