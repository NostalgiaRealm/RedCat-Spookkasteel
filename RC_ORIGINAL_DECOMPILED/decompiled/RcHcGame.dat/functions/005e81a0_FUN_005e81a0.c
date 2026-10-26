/*
 * FUN_005e81a0 at 005e81a0
 * undefined FUN_005e81a0(void)
 * Address ranges: 005e81a0-005e8357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 1 for .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 1 for
   .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes
   unchanged; names and types still inferred. */

void FUN_005e81a0(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,byte param_5,
                 int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_54;
  undefined4 local_4c;
  byte local_44 [68];
  
  iVar4 = FUN_0060d588(local_44,&DAT_006b0fa8,param_6);
  param_6 = *(int *)(param_4 + 0x14);
  if ((param_6 < 1) || (param_6 <= iVar4)) {
    param_6 = 0;
  }
  else {
    param_6 = param_6 - iVar4;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      if (param_3 == (int *)0x0) {
LAB_005e8245:
        local_54 = CONCAT31((int3)((uint)param_2 >> 8),1);
      }
      else {
        uVar5 = *(uint *)param_3[8];
        if (uVar5 == 0) {
LAB_005e822e:
          uVar5 = (**(code **)(*param_3 + 4))(param_5);
        }
        else {
          iVar2 = *(int *)param_3[0xc];
          if (iVar2 + uVar5 <= uVar5) goto LAB_005e822e;
          *(int *)param_3[0xc] = iVar2 + -1;
          pbVar6 = *(byte **)param_3[8];
          *(byte **)param_3[8] = pbVar6 + 1;
          *pbVar6 = param_5;
          uVar5 = (uint)param_5;
        }
        local_54 = param_2;
        if (uVar5 == 0xffffffff) goto LAB_005e8245;
      }
      param_2 = local_54;
    }
    param_6 = 0;
  }
  pbVar6 = local_44;
  local_4c = param_2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (param_3 == (int *)0x0) {
LAB_005e82c1:
      uVar5 = (uint)local_4c >> 8;
      local_4c = CONCAT31((int3)uVar5,1);
    }
    else {
      bVar1 = *pbVar6;
      uVar5 = *(uint *)param_3[8];
      if (uVar5 == 0) {
LAB_005e82aa:
        uVar5 = (**(code **)(*param_3 + 4))(bVar1);
      }
      else {
        iVar2 = *(int *)param_3[0xc];
        if (iVar2 + uVar5 <= uVar5) goto LAB_005e82aa;
        *(int *)param_3[0xc] = iVar2 + -1;
        pbVar3 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar5 = (uint)bVar1;
      }
      if (uVar5 == 0xffffffff) goto LAB_005e82c1;
    }
    pbVar6 = pbVar6 + 1;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  param_2 = local_4c;
  do {
    if (param_6 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_005e833a:
      uVar5 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar5,1);
    }
    else {
      uVar5 = *(uint *)param_3[8];
      if (uVar5 == 0) {
LAB_005e8323:
        uVar5 = (**(code **)(*param_3 + 4))(param_5);
      }
      else {
        iVar4 = *(int *)param_3[0xc];
        if (iVar4 + uVar5 <= uVar5) goto LAB_005e8323;
        *(int *)param_3[0xc] = iVar4 + -1;
        pbVar6 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar6 + 1;
        *pbVar6 = param_5;
        uVar5 = (uint)param_5;
      }
      if (uVar5 == 0xffffffff) goto LAB_005e833a;
    }
    param_6 = param_6 + -1;
  } while( true );
}

