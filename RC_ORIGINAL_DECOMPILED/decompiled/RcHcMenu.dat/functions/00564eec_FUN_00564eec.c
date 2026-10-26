/*
 * FUN_00564eec at 00564eec
 * undefined __register FUN_00564eec(undefined4 param_1)
 * Address ranges: 00564eec-00565079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00564eec(undefined4 param_1)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  byte local_44 [36];
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_4c = &LAB_0056509c;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x564f26;
  local_8 = param_1;
  FUN_004b0344(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x1c),(int *)&local_1c);
  puStack_54 = (undefined1 *)0x564f3e;
  FUN_0040407c((int *)&local_18,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),local_1c);
  puStack_54 = (undefined1 *)0x564f4a;
  local_10 = (int *)FUN_00403064((int *)&DAT_00550dd8,'\x01',extraout_ECX);
  puStack_54 = (undefined1 *)0x564f67;
  FUN_0040407c((int *)&local_20,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),
               (undefined4 *)"settings\\menu.ini");
  puStack_54 = (undefined1 *)0x564f76;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_004a4db4,'\x01',local_20);
  puStack_58 = &LAB_0056507a;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0x2c) != '\0') {
    puStack_54 = &stack0xfffffffc;
    FUN_00564d3c(local_8);
    *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x38) = 1;
    local_10[1] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0x24);
    FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_44);
    FUN_00403fd4(local_10 + 2,local_44);
    FUN_00551a9c(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c),(int)local_10,&local_14);
    FUN_005516dc(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c),local_c);
    FUN_00567b84(*(int *)(*(int *)PTR_DAT_00572108 + 0x118));
    FUN_00566158(*(int **)(*(int *)PTR_DAT_00572108 + 0x118),local_18);
    FUN_00567344(*(int **)(*(int *)PTR_DAT_00572108 + 0x118));
  }
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00565081;
  puStack_58 = (undefined1 *)0x565071;
  FUN_00403094(local_10);
  puStack_58 = (undefined1 *)0x565079;
  FUN_00403094(local_c);
  return;
}

