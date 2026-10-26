/*
 * FUN_00565fec at 00565fec
 * undefined __register FUN_00565fec(int * param_1, undefined * param_2)
 * Address ranges: 00565fec-005660b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00565fec(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  int iVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_18;
  undefined1 local_14;
  int *local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x566000;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_005660dc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403d94(" Self = nil: LoadFromFile");
  }
  local_18 = local_c;
  local_14 = 0xb;
  iVar2 = 0;
  uVar1 = FUN_004a418c();
  FUN_004a474c(uVar1,0x566148,0,iVar2);
  puStackY_34 = (undefined1 *)0x56605e;
  local_10 = FUN_004149f8((int *)&PTR_FUN_004a3aa0,'\x01',local_c,0);
  puStackY_34 = &LAB_005660b5;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*local_8 + 0x14))(local_8,local_10);
  if (*PTR_DAT_00572000 != '\0') {
    FUN_0054feb0(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),*(int *)(local_8[4] + 0x18));
  }
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x5660b4;
  FUN_00403094(local_10);
  return;
}

