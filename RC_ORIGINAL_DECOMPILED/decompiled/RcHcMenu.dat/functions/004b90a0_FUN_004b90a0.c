/*
 * FUN_004b90a0 at 004b90a0
 * undefined __register FUN_004b90a0(int param_1, VARIANTARG * param_2)
 * Address ranges: 004b90a0-004b9140;004b918f-004b91cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004b90a0(int param_1,VARIANTARG *param_2)

{
  int *piVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iStack_38;
  _union_2683 local_34;
  undefined4 local_24;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = (int *)0x5;
  do {
    local_c = 0;
    local_14 = (int *)((int)local_14 + -1);
  } while (local_14 != (int *)0x0);
  LOCK();
  UNLOCK();
  local_34._12_4_ = &LAB_004b91cd;
  local_34._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34.n2 + 8;
  local_34.decVal.Hi32 = 0x4b90d9;
  local_8 = param_1;
  FUN_004b73dc(param_2,(VARIANT *)&stack0xffffffdc,&local_c);
  local_34.decVal.Hi32 = 0x4b90e6;
  FUN_004b73dc((VARIANTARG *)0x0,(VARIANT *)&local_34,&local_10);
  local_34.decVal.Hi32 = 0x4b90eb;
  FUN_004b6e60();
  local_34._0_4_ = &LAB_004b9141;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  local_34.decVal.Hi32 = (ULONG)&stack0xfffffffc;
  FUN_00406aa0((int *)&local_14);
  piVar1 = *(int **)(local_8 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = (int)piVar1;
  iVar2 = local_8;
  FUN_004b70d4((int *)&PTR_FUN_004b69a0,'\x01',local_14,local_8);
  *in_FS_OFFSET = iVar2;
  FUN_00404878((VARIANTARG *)&local_34,"\f\nOleVariantp\x11@",2);
  FUN_00406aa0((int *)&local_14);
  return;
}

