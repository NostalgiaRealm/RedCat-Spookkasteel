/*
 * FUN_0051e078 at 0051e078
 * undefined __register FUN_0051e078(int * param_1)
 * Address ranges: 0051e078-0051e15e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051e078(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  bool bVar8;
  undefined4 local_28 [4];
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  bVar7 = 0;
  local_8 = param_1;
  iVar1 = FUN_0051e160((int)param_1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_c = 0;
    do {
      FUN_00411624(0xffffffff,0xffffffff,0xffffffff,local_28,0xffffffff);
      iVar1 = FUN_0051e184((int)local_8,local_c);
      puVar5 = local_28;
      puVar6 = (undefined4 *)(iVar1 + 0x14);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_10 = 0;
  uVar2 = FUN_0051e5f0((int)local_8);
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_c = 0;
    do {
      local_14 = FUN_0051e404(local_8,local_c);
      iVar1 = local_8[0xf];
      puVar5 = local_28;
      iVar4 = *(int *)(local_14 + 0x34) + local_10;
      if (SCARRY4(*(int *)(local_14 + 0x34),local_10)) {
        thunk_FUN_00402874(local_14);
        iVar4 = extraout_ECX;
      }
      FUN_00411624(local_10,0,iVar4,puVar5,iVar1);
      puVar5 = local_28;
      puVar6 = (undefined4 *)(local_14 + 0x14);
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = *(uint *)(local_14 + 0x34);
      bVar8 = SCARRY4(local_10,uVar2);
      local_10 = local_10 + uVar2;
      if (bVar8) {
        thunk_FUN_00402874(uVar2);
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

