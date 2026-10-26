/*
 * FUN_005580e4 at 005580e4
 * undefined __register FUN_005580e4(int * param_1, undefined4 param_2, uint param_3, undefined4 param_4, int param_5)
 * Address ranges: 005580e4-005581c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005580e4(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  int iVar3;
  int extraout_EDX;
  
  FUN_00433a98((int)param_1,param_2,param_3,param_4,param_5);
  if ((param_3 & 8) != 0) {
    iVar3 = (int)*(uint *)(param_1[0x62] + 0x38) >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((*(uint *)(param_1[0x62] + 0x38) & 1) != 0);
    }
    uVar1 = *(int *)(param_1[0x62] + 0x30) + iVar3;
    if (SCARRY4(*(int *)(param_1[0x62] + 0x30),iVar3)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    iVar3 = param_5 + param_1[0xc];
    if (SCARRY4(param_5,param_1[0xc])) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar3 = extraout_EDX;
    }
    if (iVar3 < (int)uVar1) {
      if (SBORROW4(param_1[0x60],param_1[0x5d])) {
        thunk_FUN_00402874((uint)param_1);
      }
      (**(code **)(*param_1 + 0xd0))();
      uVar2 = extraout_ECX;
    }
    else {
      if (SCARRY4(param_1[0x60],param_1[0x5d])) {
        thunk_FUN_00402874((uint)param_1);
      }
      (**(code **)(*param_1 + 0xd0))();
      uVar2 = extraout_ECX_00;
    }
    FUN_0049cb50(param_1[0x65],param_1[99],uVar2);
    FUN_0049cb24(param_1[0x65],'\x01',extraout_ECX_01);
  }
  return;
}

