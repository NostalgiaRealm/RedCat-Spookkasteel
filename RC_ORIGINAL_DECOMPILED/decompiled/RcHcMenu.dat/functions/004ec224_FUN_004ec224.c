/*
 * FUN_004ec224 at 004ec224
 * undefined __register FUN_004ec224(int * param_1, int * param_2)
 * Address ranges: 004ec224-004ec371
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 9 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 9 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ec224(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  _union_2683 local_50;
  byte local_40 [28];
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_54 = &stack0xfffffffc;
  local_50._0_4_ = 0;
  local_50.decVal.Hi32 = 0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  local_20 = 0;
  local_24 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_58 = &LAB_004ec39c;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x4ec25d;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_004cf200(param_1);
  puStack_64 = &LAB_004ec372;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  FUN_00459af0(-0x11);
  (**(code **)(*local_14 + 100))();
  iVar2 = FUN_00494858(local_c);
  FUN_0040407c(&local_1c,(undefined4 *)"DELETE FROM ",*(undefined4 **)(iVar2 + 0x3c));
  (**(code **)(*local_14 + 0x60))(local_14,local_1c);
  FUN_00494974(local_c,local_40);
  piVar3 = (int *)FUN_00494858(local_c);
  FUN_0049145c(piVar3,local_40,(int *)&local_24);
  FUN_0040407c(&local_20,(undefined4 *)"WHERE ",local_24);
  (**(code **)(*local_14 + 0x60))(local_14,local_20);
  piVar3 = (int *)FUN_004949bc(local_c);
  cVar1 = (**(code **)(*piVar3 + 0x50))();
  if (cVar1 == '\0') {
    (**(code **)(*local_14 + 0x60))(local_14,&DAT_004ec3ec);
    local_18 = FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',(undefined4 *)"P0_Param");
    FUN_004d7000(local_14,local_18);
    piVar3 = (int *)FUN_004949bc(local_c);
    FUN_00496550(piVar3,(VARIANT *)&local_50.n2);
    FUN_004d4ebc(local_18,(undefined4 *)&local_50);
  }
  else {
    (**(code **)(*local_14 + 0x60))(local_14," = NULL");
  }
  FUN_004d5b68(local_14);
  local_10 = (**(code **)(*local_14 + 0x14))();
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_004ec379;
  puStack_64 = (undefined1 *)0x4ec36c;
  FUN_00403094(local_14);
  puStack_64 = (undefined1 *)0x4ec371;
  FUN_00459b04();
  return;
}

