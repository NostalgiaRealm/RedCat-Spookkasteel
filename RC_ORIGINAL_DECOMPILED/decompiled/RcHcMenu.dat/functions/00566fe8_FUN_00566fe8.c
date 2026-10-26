/*
 * FUN_00566fe8 at 00566fe8
 * undefined __register FUN_00566fe8(int param_1)
 * Address ranges: 00566fe8-005671e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00566fe8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_1c;
  undefined1 local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_28 = &LAB_0056720a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  FUN_004040f0((int *)&local_10,3);
  uVar2 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar2 == '\0') {
    local_1c = local_10;
    local_18 = 0xb;
    puStack_40 = (undefined1 *)0x567055;
    FUN_0040a894((byte *)"Unable to find %s. Installation incomplete!",&local_1c,0,&local_14);
    FUN_00403d94(local_14);
  }
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_10);
  puStack_40 = &LAB_005671e8;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    uVar3 = *(int *)(local_8 + 0x1c) + 1;
    if (SCARRY4(*(int *)(local_8 + 0x1c),1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"PlayerNumber",uVar3);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartLevelNumber",1);
    iVar1 = *(int *)(*(int *)(local_8 + 0x18) + 0xc);
    uVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartSubLevelNumber",uVar3);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartSubSubLevelNumber",1);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"Replay",0);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"IsLowEndPC");
  }
  else {
    uVar3 = *(int *)(local_8 + 0x1c) + 1;
    if (SCARRY4(*(int *)(local_8 + 0x1c),1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"PlayerNumber",uVar3);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartLevelNumber",1);
    iVar1 = *(int *)(*(int *)(local_8 + 0xc) + 0xc);
    uVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartSubLevelNumber",uVar3);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"StartSubSubLevelNumber",1);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"Replay",0);
    (**(code **)(*local_c + 0xc))(local_c,&DAT_005672c4,"IsLowEndPC");
  }
  *in_FS_OFFSET = 0;
  FUN_00403094(local_c);
  return;
}

