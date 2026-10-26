/*
 * FUN_004bae4c at 004bae4c
 * undefined __register FUN_004bae4c(int param_1, VARIANT * param_2)
 * Address ranges: 004bae4c-004baec4;004baf13-004baf40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004bae4c(int param_1,VARIANT *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  _union_2683 local_2c;
  undefined4 local_1c;
  VARIANT *local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_2c._12_4_ = &LAB_004baf41;
  local_2c._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c.n2 + 8;
  local_2c.decVal.Hi32 = 0x4bae7e;
  local_8 = param_1;
  FUN_004b740c(param_2,&local_1c,&local_c);
  local_2c.decVal.Hi32 = 0x4bae83;
  FUN_004b6e60();
  local_2c._0_4_ = &LAB_004baec5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_2c.decVal.Hi32 = (ULONG)&stack0xfffffffc;
  FUN_00405bcc((VARIANTARG *)&local_2c);
  piVar1 = *(int **)(local_8 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x44))();
  FUN_00406b9c(iVar2);
  FUN_00404e28(local_c,(VARIANTARG *)&local_2c);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  uStack_30 = 0x4baf20;
  FUN_004b7424(param_2,(VARIANTARG *)&local_1c,(int *)&local_c);
  *in_FS_OFFSET = local_2c._0_4_;
  local_2c._8_4_ = &LAB_004baf48;
  local_2c.decVal.Hi32 = 0x4baf40;
  FUN_00404878((VARIANTARG *)&local_2c,"\f\nOleVariantp\x11@",2);
  return;
}

