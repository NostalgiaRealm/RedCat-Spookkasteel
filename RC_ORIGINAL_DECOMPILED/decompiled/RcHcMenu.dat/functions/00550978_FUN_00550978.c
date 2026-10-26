/*
 * FUN_00550978 at 00550978
 * undefined __register FUN_00550978(undefined4 param_1)
 * Address ranges: 00550978-00550a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00550978(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_38 = &LAB_00550a9e;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x5509b8;
  local_8 = param_1;
  FUN_0040407c((int *)&local_24,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),
               (undefined4 *)"settings\\menu.ini");
  puStack_40 = (undefined1 *)0x5509c7;
  local_10 = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_24);
  puStack_44 = &LAB_00550a74;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  local_c = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
  local_1c = (**(code **)(*local_10 + 8))(local_10,"InputKeys","NrKeys");
  if (0 < local_1c) {
    local_18 = 1;
    local_20 = local_1c;
    do {
      uVar3 = 0;
      piVar2 = &local_14;
      FUN_00409bd8(local_18,(int *)&local_2c);
      FUN_0040407c(&local_28,(undefined4 *)&DAT_00550af8,local_2c);
      (**(code **)*local_10)(local_10,"InputKeys",local_28,piVar2,uVar3);
      iVar1 = FUN_00404030(local_14);
      if (0 < iVar1) {
        (**(code **)(*local_c + 0x34))(local_c,local_14);
      }
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = 0;
  puStack_44 = &LAB_00550a7b;
  uStack_48 = 0x550a73;
  FUN_0040e4b4(&local_10);
  return;
}

