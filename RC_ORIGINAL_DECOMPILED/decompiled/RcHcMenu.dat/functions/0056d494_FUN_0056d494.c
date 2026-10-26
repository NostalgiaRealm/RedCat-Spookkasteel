/*
 * FUN_0056d494 at 0056d494
 * undefined __register FUN_0056d494(void)
 * Address ranges: 0056d494-0056d52d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056d494(void)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  char *pcStack_34;
  undefined *puStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 uStack_8;
  
  puStack_20 = &stack0xfffffffc;
  uStack_8 = 0;
  local_c = (int *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_0056d550;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iStack_2c = 0x56d4bc;
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_18);
  iStack_2c = 0x56d4c7;
  FUN_00409f84(local_18,&local_14);
  iStack_2c = local_14;
  puStack_30 = &DAT_0056d568;
  pcStack_34 = "settings\\menu.ini";
  puStack_38 = (undefined1 *)0x56d4e1;
  FUN_004040f0((int *)&local_10,3);
  puStack_38 = (undefined1 *)0x56d4f0;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_10);
  puStack_3c = &LAB_0056d52e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  uVar1 = (**(code **)(*local_c + 0x10))(local_c,"GENERAL","Windowed");
  uStack_8 = CONCAT13(uVar1,(undefined3)uStack_8);
  *in_FS_OFFSET = 0;
  puStack_3c = &LAB_0056d535;
  uStack_40 = 0x56d52d;
  FUN_00403094(local_c);
  return;
}

