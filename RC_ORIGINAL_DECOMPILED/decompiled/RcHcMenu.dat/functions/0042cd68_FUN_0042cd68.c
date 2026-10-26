/*
 * FUN_0042cd68 at 0042cd68
 * undefined __register FUN_0042cd68(void)
 * Address ranges: 0042cd68-0042cec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042cd68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte bVar7;
  int in_stack_00000004;
  undefined4 local_94 [4];
  tagRECT local_84;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 local_c;
  int local_8;
  
  bVar7 = 0;
  piVar5 = (int *)(in_stack_00000004 + -4);
  local_1c = 0xbc2b;
  local_14 = &local_5c;
  local_18 = FUN_00438988((int *)*piVar5);
  local_5c = 2;
  local_50 = 1;
  local_4c = 0;
  local_44 = *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 4);
  local_58 = FUN_00438988((int *)*piVar5);
  local_48 = FUN_00438988((int *)*piVar5);
  local_2c = 0xbc2c;
  local_28 = FUN_00438988((int *)*piVar5);
  local_24 = &local_74;
  local_74 = 2;
  local_70 = FUN_00438988((int *)*piVar5);
  iVar3 = 0;
  iVar1 = FUN_0042c8dc((int *)*piVar5);
  GetClipBox(*(HDC *)(*(int *)(in_stack_00000004 + -8) + 4),&local_84);
  local_8 = *(int *)(*piVar5 + 0x3c);
  local_c = *(undefined4 *)(*piVar5 + 0x38);
  if (0 < local_8) {
    do {
      local_6c = iVar1;
      iVar2 = (**(code **)(**(int **)(*piVar5 + 0x1f0) + 0x14))();
      if (iVar1 < iVar2) {
        local_60 = (**(code **)(**(int **)(*piVar5 + 0x1f0) + 0x18))
                             (*(int **)(*piVar5 + 0x1f0),iVar1);
      }
      local_68 = local_c;
      local_64 = *(int *)(*piVar5 + 0x200);
      local_30 = local_60;
      local_54 = iVar1;
      (**(code **)(*(int *)*piVar5 + -0x14))((int *)*piVar5,&local_2c);
      FUN_00411624(0,iVar3,local_68,local_94,local_64 + iVar3);
      puVar4 = local_94;
      puVar6 = local_40;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      (**(code **)(*(int *)*piVar5 + -0x14))((int *)*piVar5,&local_1c);
      iVar3 = iVar3 + local_64;
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(**(int **)(*piVar5 + 0x1f0) + 0x14))();
    } while ((iVar1 < iVar2) && (iVar3 < local_8));
  }
  return;
}

