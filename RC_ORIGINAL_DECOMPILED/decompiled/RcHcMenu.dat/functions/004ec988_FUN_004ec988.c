/*
 * FUN_004ec988 at 004ec988
 * undefined __register FUN_004ec988(int * param_1, int * param_2, int param_3)
 * Address ranges: 004ec988-004ecade
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 11 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 11 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ec988(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  _union_2683 local_54;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined1 local_30;
  _union_2683 *local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined1 local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_5c = &stack0xfffffffc;
  puStack_68 = &stack0xfffffffc;
  local_54._0_4_ = 0;
  local_54.decVal.Hi32 = 0;
  local_54._8_4_ = 0;
  local_54._12_4_ = 0;
  puStack_60 = &LAB_004ecafc;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  local_11 = 0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_6c = &LAB_004ecadf;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00459af0(-0x11);
  piVar2 = (int *)FUN_004cf3c8(local_8,'\0');
  local_18 = (int *)FUN_00403224(piVar2,(int)&PTR_FUN_004ea51c);
  local_1c = FUN_004cf39c(local_8,extraout_EDX,extraout_ECX);
  iVar3 = FUN_00494858(local_c);
  FUN_004b49b8(local_1c,iVar3);
  FUN_004b4b84((int)local_1c,local_10);
  local_44 = *(undefined4 *)PTR_DAT_00572470;
  local_40 = 7;
  local_3c = FUN_004949bc(local_c);
  local_38 = 7;
  local_34 = *(undefined4 *)PTR_DAT_0057260c;
  local_30 = 7;
  piVar2 = (int *)FUN_004949bc(local_c);
  FUN_00496550(piVar2,(VARIANT *)&local_54.n2);
  local_2c = &local_54;
  local_28 = 0xd;
  local_24 = *(undefined4 *)PTR_DAT_005725b8;
  local_20 = 7;
  FUN_004b4e04((int)local_1c,&local_44,4);
  FUN_004b4f0c(local_1c,0);
  FUN_004d69fc(local_18,(int)local_1c);
  FUN_004d5dc0(local_18);
  cVar1 = (**(code **)(*local_18 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_004d6cb4(local_18,local_c);
    local_11 = 1;
  }
  FUN_004d516c(local_18);
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_004ecae6;
  puStack_6c = (undefined1 *)0x4ecad1;
  FUN_00403094(local_18);
  puStack_6c = (undefined1 *)0x4ecad9;
  FUN_00403094(local_1c);
  puStack_6c = (undefined1 *)0x4ecade;
  FUN_00459b04();
  return;
}

