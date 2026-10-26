/*
 * FUN_005274dc at 005274dc
 * undefined __register FUN_005274dc(int * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 005274dc-005275f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005274dc(int *param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  byte *pbVar5;
  byte *pbVar6;
  byte local_50 [28];
  byte local_34 [28];
  int local_18;
  uint local_14;
  uint local_10;
  char local_9;
  int *local_8;
  
  bVar3 = 0;
  pbVar5 = local_34;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 4;
  }
  local_9 = param_3;
  local_8 = param_1;
  local_14 = FUN_00492440((int *)param_1[0xa0],local_34);
  if ((*(byte *)(local_14 + 0x18) & 2) == 0) {
    local_10 = (**(code **)(*local_8 + 0xc4))(local_8,local_34);
    cVar2 = FUN_00492f80((int *)local_8[0xa0],local_34);
    if (cVar2 == '\0') {
      FUN_0051ccb8(local_10,*(uint **)(local_14 + 0x24));
    }
    else {
      pbVar5 = local_34;
      pbVar6 = local_50;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + ((uint)bVar3 * -2 + 1) * 4;
        pbVar6 = pbVar6 + ((uint)bVar3 * -2 + 1) * 4;
      }
      FUN_0048dea8(local_50);
      local_18 = FUN_00492440((int *)local_8[0xa0],local_50);
      FUN_0051ccb8(local_10,*(uint **)(local_18 + 0x24));
      bVar3 = FUN_00527370((undefined4 *)local_34,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      if (bVar3 == 0) {
        FUN_0051cc48(local_10,*(uint **)(local_14 + 0x24));
      }
    }
    lVar1 = (longlong)*(int *)(local_14 + 4) * 10;
    iVar4 = (int)lVar1;
    if (iVar4 != lVar1) {
      thunk_FUN_00402874(local_14);
      iVar4 = extraout_EDX_00;
    }
    FUN_0051cd28(local_10,iVar4);
    iVar4 = FUN_00527214(local_8);
    cVar2 = (**(code **)(**(int **)(iVar4 + 0x290) + 0x74))(*(int **)(iVar4 + 0x290),local_34);
    FUN_0051c8d8(local_10,cVar2);
    FUN_0051ced4(local_10,local_9);
    (**(code **)(*(int *)local_8[0x9d] + 0xc))((int *)local_8[0x9d],local_10);
  }
  return;
}

