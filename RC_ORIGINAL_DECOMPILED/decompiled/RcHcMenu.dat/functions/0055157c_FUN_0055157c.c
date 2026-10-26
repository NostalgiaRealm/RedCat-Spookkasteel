/*
 * FUN_0055157c at 0055157c
 * undefined __register FUN_0055157c(int param_1)
 * Address ranges: 0055157c-0055166d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055157c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = (undefined4 *)0x0;
  local_20 = 0;
  local_24 = (undefined4 *)0x0;
  puStack_30 = &LAB_00551690;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x5515b5;
  local_8 = param_1;
  FUN_0040407c((int *)&local_14,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),
               (undefined4 *)"settings\\menu.ini");
  puStack_38 = (undefined1 *)0x5515c4;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_14);
  puStack_3c = &LAB_0055166e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_10 = 0;
  puStack_38 = &stack0xfffffffc;
  do {
    FUN_00409bd8(local_10,&local_18);
    uVar1 = (**(code **)(*local_c + 8))(local_c,"HIGHSCORES",local_18);
    iVar2 = FUN_00551a30(local_8,local_10);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    iVar2 = FUN_00551a30(local_8,local_10);
    iVar2 = iVar2 + 8;
    uVar1 = 0;
    ppuVar3 = &local_1c;
    FUN_00409bd8(local_10,(int *)&local_24);
    FUN_0040407c(&local_20,(undefined4 *)&DAT_005516d4,local_24);
    (**(code **)*local_c)(local_c,"HIGHSCORES",local_20,ppuVar3,uVar1,iVar2);
    FUN_00403e04((int *)0x0,local_1c);
    local_10 = local_10 + 1;
  } while (local_10 != 0xb);
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00551675;
  puStack_3c = (undefined1 *)0x55166d;
  FUN_00403094(local_c);
  return;
}

