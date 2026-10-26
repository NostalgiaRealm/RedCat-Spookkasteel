/*
 * FUN_0056cb70 at 0056cb70
 * undefined __register FUN_0056cb70(void)
 * Address ranges: 0056cb70-0056cc1b;0056cc26-0056cc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056cb70(void)

{
  bool bVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_0056cc44;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = &LAB_0056cc1c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  bVar1 = FUN_0056ca58();
  if (bVar1) {
    local_8 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',DAT_00571fec,0x40);
    iVar2 = FUN_004147cc(local_8);
    if (10000 < iVar2) {
      local_c = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',DAT_00571fec,0x21);
      (**(code **)(*local_8 + 0xc))(local_8,0xffffd8f0,CONCAT22(extraout_var,2));
      FUN_00414874(local_c,local_8,10000);
      (**(code **)*local_c)(local_c,10000);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0056cc4b;
  puStack_20 = (undefined1 *)0x56cc3b;
  FUN_00403094(local_c);
  puStack_20 = (undefined1 *)0x56cc43;
  FUN_00403094(local_8);
  return;
}

