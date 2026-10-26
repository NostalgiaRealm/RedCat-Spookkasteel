/*
 * FUN_004fadec at 004fadec
 * undefined __register FUN_004fadec(int * param_1, int * param_2)
 * Address ranges: 004fadec-004faf02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fadec(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  _union_2683 local_128;
  byte local_118 [256];
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_128._0_4_ = 0;
  local_128.decVal.Hi32 = 0;
  local_128._8_4_ = 0;
  local_128._12_4_ = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_130 = &LAB_004faf03;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  local_c = param_2;
  local_8 = param_1;
  piVar1 = (int *)FUN_00543858((int)param_1);
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0048ce0c);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_140 = "AppProp is not a TGenericFKProp type.";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  piVar1 = (int *)FUN_00543858((int)local_8);
  local_10 = (int *)FUN_00403224(piVar1,(int)&PTR_FUN_0048ce0c);
  piVar1 = (int *)FUN_004949bc(local_c);
  FUN_00496550(piVar1,(VARIANT *)&local_128.n2);
  FUN_004964d0(local_10,(undefined4 *)&local_128);
  if ((char)local_8[0xac] != '\0') {
    piVar1 = (int *)FUN_004744a0(local_10);
    FUN_00493768(piVar1,local_c);
  }
  *in_FS_OFFSET = pcStack_140;
  FUN_00405bcc((VARIANTARG *)&local_128.n2);
  FUN_00403dd4(&local_18,2);
  return;
}

