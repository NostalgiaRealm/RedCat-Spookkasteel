/*
 * FUN_0053350c at 0053350c
 * undefined __register FUN_0053350c(int param_1, int param_2, int * param_3)
 * Address ranges: 0053350c-0053360c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 73 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 73 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0053350c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_20 = (undefined1 *)0x533524;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_24 = &LAB_0053360d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
  if (*(int *)(iVar1 + 0xc) == 0) {
    piVar2 = (int *)FUN_00549b64(*(int *)(local_8 + 0x294));
    uVar3 = FUN_0049206c(piVar2);
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
  FUN_00494340(*(int **)(iVar1 + 0xc));
  iVar1 = FUN_00549b48(*(int *)(local_8 + 0x294));
  iVar1 = FUN_0048ec24(*(int *)(iVar1 + 0x10));
  if (iVar1 == 1) {
    puVar5 = &local_18;
    ppiVar4 = &local_14;
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    FUN_00494e38(*(int **)(iVar1 + 0xc),(byte *)(local_8 + 0x278),'\x01',ppiVar4,puVar5);
    (**(code **)(*local_14 + 0x38))(local_14,local_c);
  }
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
  *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
  FUN_00501050(iVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00533614;
  puStack_24 = (undefined1 *)0x53360c;
  FUN_00403db0(&local_c);
  return;
}

