/*
 * FUN_00566158 at 00566158
 * undefined __register FUN_00566158(int * param_1, undefined * param_2)
 * Address ranges: 00566158-005661fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00566158(int *param_1,undefined *param_2)

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
  
  puStack_1c = (undefined1 *)0x56616c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_00566226;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403d94(" Self = nil: SaveToFile");
  }
  local_18 = local_c;
  local_14 = 0xb;
  iVar2 = 0;
  uVar1 = FUN_004a418c();
  FUN_004a474c(uVar1,0x566290,0,iVar2);
  puStackY_34 = (undefined1 *)0x5661cd;
  local_10 = FUN_004149f8((int *)&PTR_FUN_004a3aa0,'\x01',local_c,0xffff);
  puStackY_34 = &LAB_005661ff;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*local_8 + 0x10))(local_8,local_10);
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x5661fe;
  FUN_00403094(local_10);
  return;
}

