/*
 * FUN_005035a4 at 005035a4
 * undefined __register FUN_005035a4(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 005035a4-00503654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005035a4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int extraout_EDX;
  
  FUN_004383fc(param_1,param_2,param_3,param_4,param_5);
  iVar1 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
  iVar4 = param_1[0x83];
  if (SBORROW4(iVar1,param_1[0x83])) {
    thunk_FUN_00402874((uint)param_1);
  }
  iVar2 = FUN_00502c08(param_1);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (iVar1 - iVar4 < (int)uVar3) {
    iVar4 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
    uVar3 = iVar4 - param_1[0x83];
    if (SBORROW4(iVar4,param_1[0x83])) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar5 = FUN_00502c08(param_1);
    iVar4 = uVar3 - uVar5;
    if (SBORROW4(uVar3,uVar5)) {
      uVar5 = thunk_FUN_00402874(uVar5);
      iVar4 = extraout_EDX;
    }
    if (SCARRY4(iVar4,1)) {
      thunk_FUN_00402874(uVar5);
    }
    (**(code **)(*param_1 + 0xbc))();
  }
  FUN_00503518(param_1);
  return;
}

