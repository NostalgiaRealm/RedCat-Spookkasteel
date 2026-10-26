/*
 * FUN_00568c74 at 00568c74
 * undefined __register FUN_00568c74(int param_1)
 * Address ranges: 00568c74-00568d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00568c74(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00568d21;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = (int *)0x0;
  puStack_28 = &LAB_00568d04;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  FUN_0040407c((int *)&local_10,*(undefined4 **)(param_1 + 0x110),(undefined4 *)"debug.ini");
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_10);
  cVar1 = (**(code **)(*local_c + 0x10))(local_c,"GENERAL","debug");
  if (cVar1 == '\0') {
    iVar2 = FUN_004a418c();
    FUN_004a4310(iVar2);
  }
  *in_FS_OFFSET = 0;
  puStack_28 = &LAB_00568d0b;
  uStack_2c = 0x568d03;
  FUN_00403094(local_c);
  return;
}

