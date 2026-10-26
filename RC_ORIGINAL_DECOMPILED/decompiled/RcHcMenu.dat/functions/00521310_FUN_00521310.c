/*
 * FUN_00521310 at 00521310
 * undefined __register FUN_00521310(int param_1)
 * Address ranges: 00521310-00521513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521310(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *extraout_ECX;
  int *piVar5;
  int *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  uint extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int *piVar7;
  byte bVar8;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar8 = 0;
  if (*(int *)(*(int *)(param_1 + 0x27c) + 0x204) != -1) {
    local_14 = 0;
    local_8 = param_1;
    uVar1 = FUN_0051e5f0(*(int *)(param_1 + 0x27c));
    if (uVar1 == *(uint *)(*(int *)(local_8 + 0x27c) + 0x204)) {
      local_14 = 1;
    }
    iVar2 = *(int *)(*(uint *)(local_8 + 0x27c) + 0x204);
    uVar1 = iVar2 - local_14;
    if (SBORROW4(iVar2,local_14)) {
      thunk_FUN_00402874(*(uint *)(local_8 + 0x27c));
      uVar1 = extraout_EDX;
    }
    iVar2 = FUN_0051e404(*(int **)(local_8 + 0x27c),uVar1);
    piVar5 = (int *)(iVar2 + 0x14);
    piVar7 = &local_24;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    if (local_14 == 1) {
      uVar1 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x200) + 0x38);
      iVar2 = (int)uVar1 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
      }
      uVar1 = local_1c - iVar2;
      if (SBORROW4(local_1c,iVar2)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      uVar3 = uVar1 - 1;
      if (SBORROW4(uVar1,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      piVar5 = &local_10;
      iVar2 = local_20 - DAT_00571ee0;
      if (SBORROW4(local_20,DAT_00571ee0)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        piVar5 = extraout_ECX;
        iVar2 = extraout_EDX_00;
      }
      FUN_0041160c(uVar3,iVar2,piVar5);
    }
    else {
      uVar1 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x200) + 0x38);
      iVar2 = (int)uVar1 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
      }
      uVar1 = local_24 - iVar2;
      if (SBORROW4(local_24,iVar2)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      uVar3 = uVar1 - 1;
      if (SBORROW4(uVar1,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      piVar5 = &local_10;
      iVar2 = local_20 - DAT_00571ee0;
      if (SBORROW4(local_20,DAT_00571ee0)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        piVar5 = extraout_ECX_00;
        iVar2 = extraout_EDX_01;
      }
      FUN_0041160c(uVar3,iVar2,piVar5);
    }
    FUN_0043228c(*(int **)(local_8 + 0x27c),&local_10,&local_2c);
    local_10 = local_2c;
    local_c = local_28;
    uVar1 = FUN_0051c7f0(*(int *)(*(int *)(local_8 + 0x27c) + 0x214));
    uVar6 = extraout_ECX_01;
    if (uVar1 != *(uint *)(*(int *)(local_8 + 0x27c) + 0x204)) {
      uVar1 = FUN_0051c7f0(*(int *)(*(int *)(local_8 + 0x27c) + 0x214));
      uVar3 = uVar1 + 1;
      uVar6 = extraout_ECX_02;
      if (SCARRY4(uVar1,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        uVar6 = extraout_ECX_03;
      }
      if (uVar3 != *(uint *)(*(int *)(local_8 + 0x27c) + 0x204)) {
        FUN_0043262c(*(int **)(*(int *)(local_8 + 0x27c) + 0x200),
                     CONCAT31((int3)((uint)*(int *)(local_8 + 0x27c) >> 8),1),uVar6);
        piVar5 = *(int **)(*(int *)(local_8 + 0x27c) + 0x200);
        (**(code **)(*piVar5 + 0x7c))
                  (piVar5,local_10,local_c,
                   *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x200) + 0x3c),
                   *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x200) + 0x38));
        return;
      }
    }
    FUN_0043262c(*(int **)(*(int *)(local_8 + 0x27c) + 0x200),0,uVar6);
  }
  return;
}

