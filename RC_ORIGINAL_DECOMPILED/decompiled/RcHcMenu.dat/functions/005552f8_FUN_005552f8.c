/*
 * FUN_005552f8 at 005552f8
 * undefined __register FUN_005552f8(int param_1)
 * Address ranges: 005552f8-00555525;0055553a-005555dd;005555fe-00555982
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005552f8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_28 = 0;
  local_c = (uint *)0x0;
  puStack_30 = &LAB_00555983;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_1c = 0;
  local_8 = param_1;
  FUN_00432744(*(int *)(param_1 + 0x310),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x314),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x318),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x31c),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 800),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x324),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x328),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x32c),(uint *)0x0);
  (**(code **)(**(int **)(local_8 + 0x310) + 0x5c))(*(int **)(local_8 + 0x310),0);
  (**(code **)(**(int **)(local_8 + 0x314) + 0x5c))(*(int **)(local_8 + 0x314),0);
  (**(code **)(**(int **)(local_8 + 0x318) + 0x5c))(*(int **)(local_8 + 0x318),0);
  (**(code **)(**(int **)(local_8 + 0x31c) + 0x5c))(*(int **)(local_8 + 0x31c),0);
  (**(code **)(**(int **)(local_8 + 800) + 0x5c))(*(int **)(local_8 + 800),0);
  (**(code **)(**(int **)(local_8 + 0x324) + 0x5c))(*(int **)(local_8 + 0x324),0);
  (**(code **)(**(int **)(local_8 + 0x328) + 0x5c))(*(int **)(local_8 + 0x328),0);
  (**(code **)(**(int **)(local_8 + 0x32c) + 0x5c))(*(int **)(local_8 + 0x32c),0);
  FUN_004aeaf0(*(int **)(local_8 + 0x310),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x314),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x318),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x31c),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 800),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x324),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x328),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  FUN_004aeaf0(*(int **)(local_8 + 0x32c),*(int *)(*(int *)PTR_DAT_00572108 + 0xac));
  local_18 = 0;
  do {
    FUN_00568e54(*(int **)PTR_DAT_00572108,local_18,(int *)&local_c,&local_28,&local_14,&local_10);
    switch(local_10) {
    case 0:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0x98);
      break;
    case 1:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0x9c);
      break;
    case 2:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0xa0);
      break;
    case 3:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0xa4);
      break;
    case 4:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0xa8);
      break;
    default:
      local_20 = *(int *)(*(int *)PTR_DAT_00572108 + 0xac);
    }
    local_21 = *(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28) == local_18;
    iVar2 = FUN_00404030((int)local_c);
    if (0 < iVar2) {
      uVar3 = local_1c;
      switch(local_1c) {
      case 0:
        FUN_00432744(*(int *)(local_8 + 0x310),local_c);
        (**(code **)(**(int **)(local_8 + 0x310) + 0x5c))(*(int **)(local_8 + 0x310),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x310),local_20);
        *(int *)(local_8 + 0x334) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x310) + 0xbc))
                          (*(int **)(local_8 + 0x310),local_21);
        break;
      case 1:
        FUN_00432744(*(int *)(local_8 + 0x314),local_c);
        (**(code **)(**(int **)(local_8 + 0x314) + 0x5c))(*(int **)(local_8 + 0x314),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x314),local_20);
        *(int *)(local_8 + 0x338) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x314) + 0xbc))
                          (*(int **)(local_8 + 0x314),local_21);
        break;
      case 2:
        FUN_00432744(*(int *)(local_8 + 0x318),local_c);
        (**(code **)(**(int **)(local_8 + 0x318) + 0x5c))(*(int **)(local_8 + 0x318),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x318),local_20);
        *(int *)(local_8 + 0x33c) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x318) + 0xbc))
                          (*(int **)(local_8 + 0x318),local_21);
        break;
      case 3:
        FUN_00432744(*(int *)(local_8 + 0x31c),local_c);
        (**(code **)(**(int **)(local_8 + 0x31c) + 0x5c))(*(int **)(local_8 + 0x31c),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x31c),local_20);
        *(int *)(local_8 + 0x340) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x31c) + 0xbc))
                          (*(int **)(local_8 + 0x31c),local_21);
        break;
      case 4:
        FUN_00432744(*(int *)(local_8 + 800),local_c);
        (**(code **)(**(int **)(local_8 + 800) + 0x5c))(*(int **)(local_8 + 800),1);
        FUN_004aeaf0(*(int **)(local_8 + 800),local_20);
        *(int *)(local_8 + 0x344) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 800) + 0xbc))(*(int **)(local_8 + 800),local_21);
        break;
      case 5:
        FUN_00432744(*(int *)(local_8 + 0x324),local_c);
        (**(code **)(**(int **)(local_8 + 0x324) + 0x5c))(*(int **)(local_8 + 0x324),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x324),local_20);
        *(int *)(local_8 + 0x348) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x324) + 0xbc))
                          (*(int **)(local_8 + 0x324),local_21);
        break;
      case 6:
        FUN_00432744(*(int *)(local_8 + 0x328),local_c);
        (**(code **)(**(int **)(local_8 + 0x328) + 0x5c))(*(int **)(local_8 + 0x328),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x328),local_20);
        *(int *)(local_8 + 0x34c) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x328) + 0xbc))
                          (*(int **)(local_8 + 0x328),local_21);
        break;
      case 7:
        FUN_00432744(*(int *)(local_8 + 0x32c),local_c);
        (**(code **)(**(int **)(local_8 + 0x32c) + 0x5c))(*(int **)(local_8 + 0x32c),1);
        FUN_004aeaf0(*(int **)(local_8 + 0x32c),local_20);
        *(int *)(local_8 + 0x350) = local_18;
        uVar3 = (**(code **)(**(int **)(local_8 + 0x32c) + 0xbc))
                          (*(int **)(local_8 + 0x32c),local_21);
      }
      bVar4 = SCARRY4(local_1c,1);
      local_1c = local_1c + 1;
      if (bVar4) {
        thunk_FUN_00402874(uVar3);
      }
    }
    local_18 = local_18 + 1;
  } while (local_18 != 8);
  iVar2 = FUN_00569038(*(int **)PTR_DAT_00572108);
  (**(code **)(**(int **)(local_8 + 0x30c) + 0x5c))(*(int **)(local_8 + 0x30c),0 < iVar2);
  iVar2 = FUN_00569038(*(int **)PTR_DAT_00572108);
  (**(code **)(**(int **)(local_8 + 0x308) + 0x5c))(*(int **)(local_8 + 0x308),iVar2 < 8);
  cVar1 = (**(code **)(**(int **)(local_8 + 0x30c) + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00432bec(*(int **)(local_8 + 0x30c),extraout_EDX,extraout_ECX);
  }
  else {
    FUN_00432bf4(*(int **)(local_8 + 0x30c),extraout_EDX,extraout_ECX);
  }
  cVar1 = (**(code **)(**(int **)(local_8 + 0x308) + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00432bec(*(int **)(local_8 + 0x308),extraout_EDX_00,extraout_ECX_00);
  }
  else {
    FUN_00432bf4(*(int **)(local_8 + 0x308),extraout_EDX_00,extraout_ECX_00);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0055598a;
  puStack_30 = (undefined1 *)0x55597a;
  FUN_00403db0(&local_28);
  puStack_30 = (undefined1 *)0x555982;
  FUN_00403db0((int *)&local_c);
  return;
}

