/*
 * FUN_004b7a2c at 004b7a2c
 * undefined __register FUN_004b7a2c(int param_1, undefined4 param_2, undefined4 param_3, VARIANTARG * param_4)
 * Address ranges: 004b7a2c-004b7ab0;004b7aff-004b7b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7a2c(int param_1,undefined4 param_2,undefined4 param_3,VARIANTARG *param_4)

{
  int *piVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  _union_2683 local_24;
  undefined4 uStack_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  local_10 = (int *)0x0;
  uStack_14 = 0;
  local_24._12_4_ = 0;
  local_24._8_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._0_4_ = 0;
  puStack_38 = &LAB_004b7b32;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  puStack_40 = (undefined1 *)0x4b7a65;
  local_8 = param_1;
  FUN_004b73dc(param_4,(VARIANT *)&local_24.n2,&local_c);
  puStack_40 = (undefined1 *)0x4b7a6a;
  FUN_004b6e60();
  puStack_44 = &LAB_004b7ab1;
  iStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_00406aa0((int *)&local_10);
  piVar1 = *(int **)(local_8 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x5c))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = (int)piVar1;
  iVar2 = local_8;
  FUN_004b70d4((int *)&PTR_FUN_004b6938,'\x01',local_10,local_8);
  *in_FS_OFFSET = iVar2;
  FUN_00405bcc((VARIANTARG *)&local_24.n2);
  FUN_00406aa0((int *)&local_10);
  return;
}

